#include <llvm/ADT/STLExtras.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Verifier.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/DIBuilder.h>
#include <llvm/IR/GlobalVariable.h>
#include <llvm/IR/ValueSymbolTable.h>
#include <llvm/IR/LegacyPassManager.h>

#include <llvm/ADT/StringRef.h>
#include "generator.h"
#include "compiler.h"


/**
 * Process the symbol table and the AST to emit global definitions
 * @param symbolTable
 * @param ast
 */
void  GeneratorLLVM::process(std::shared_ptr<SymbolTable> symbolTable,std::shared_ptr<AST> ast) {

    
    // this->filename = filename;

    // this->module = std::make_unique<llvm::Module>(llvm::StringRef(filename),llvmContext);
    // this->builder = std::make_unique<llvm::IRBuilder<>>(llvmContext);

    auto CPU = "generic";
    auto Features = "";
    std::string Error;

    auto TargetTriple = llvm::sys::getDefaultTargetTriple();

    auto Target = llvm::TargetRegistry::lookupTarget(TargetTriple, Error);
    if (! Target)
    {
        throw GrimException("TARGET " + TargetTriple + " NOT FOUND");
    }
    
    llvm::TargetOptions opt;
    auto RM = llvm:: Optional<llvm::Reloc::Model>();
    auto TargetMachine = Target->createTargetMachine(TargetTriple, CPU, Features, opt, RM);
    std::cout << "HERE\n\n\n";
    module->setDataLayout(TargetMachine->createDataLayout());
    // module->setTargetTriple(TargetTriple);

    auto out_file = this->filename;
    auto idx = out_file.find(".sigil");
    out_file.replace(idx, 7, ".out");
    std::error_code EC;
    llvm::raw_fd_ostream dest(out_file, EC, llvm::sys::fs::OF_None);

    if (EC) {
        throw GrimException("Could not open file: " + EC.message() );
    }

    llvm::legacy::PassManager pass;
    auto FileType = llvm::CGFT_ObjectFile;

    if (TargetMachine->addPassesToEmitFile(pass, dest, nullptr, FileType)) {
        throw GrimException("TargetMachine can't emit a file of this type");
    }
    
    std::cout << "----- Code generation : Processing Global scope vars and function declarations -----"  << std::endl;

    // Generate data, processing global scope (only one that exists for now)
    std::map<std::basic_string<char>, std::shared_ptr<Symbol>> global = symbolTable->getSymbols(0);

    for(auto symbol = global.begin(); symbol != global.end();symbol++) {
        declare(symbol->second.get());
    }

    std::cout << "----- Code generation : Initializing runtime ( support functions ) -----" << std::endl;
    // Store a reference to the symbol table
    this->symbolTable = symbolTable;

    // Generate support functions
    initializeRunTime(symbolTable);

    std::cout << "----- Code generation : -----" << std::endl;

    // Generate code
    for (auto node = ast->getNodes().begin(); node != ast->getNodes().end(); ++node) {
        std::cout << std::endl << "processing node: " << node->get()->toString();
        node->get()->accept(this);
    }

    std::cout << "----- Code generation : Emitting Object file -----";

    pass.run(*(this->module));
    std::cout << "WROTE OUT FILE TO: " << out_file << std::endl;
    dest.flush();

}

/**
 * Emits a INZ function for global variables initialization
 * In this implementation all var declarations are global variables.
 * This method creates a INZ function with all the store operation required to set the
 * value specified in the data declaration INZ value,
 */
void  GeneratorLLVM::initializeRunTime(std::shared_ptr<SymbolTable> symbolTable) {
    /* Emit the format string for the printf */
    std::string str = "%d\n";
    auto charType = llvm::IntegerType::get(llvmContext, 8);

    /*  Initialize the  vector */
    std::vector<llvm::Constant *> chars(str.length());
    for(unsigned int i = 0; i < str.size(); i++) {
        chars[i] = llvm::ConstantInt::get(charType, str[i]);
    }
    /*  Add '\0' at the end of the string */
    //chars.push_back(llvm::ConstantInt::get(charType, 0));

    /* Initialize the string from the characters */
    auto stringType = llvm::ArrayType::get(charType, chars.size());

    /* declaration statement */
    auto globalDeclaration = (llvm::GlobalVariable*) module->getOrInsertGlobal("pstr", stringType);
    globalDeclaration->setInitializer(llvm::ConstantArray::get(stringType, chars));
    globalDeclaration->setConstant(true);
    globalDeclaration->setLinkage(llvm::GlobalValue::LinkageTypes::PrivateLinkage);
    globalDeclaration->setUnnamedAddr (llvm::GlobalValue::UnnamedAddr::Global);

    std::vector<llvm::Type*> putchar_params;
    putchar_params.push_back(llvm::Type::getInt8Ty(llvmContext));
    /* External function declaration */
    llvm::FunctionType *putchar_type = llvm::FunctionType::get(llvm::Type::getInt32Ty(llvmContext),putchar_params, false);
    llvm::Function *putchar_func = llvm::Function::Create(putchar_type, llvm::Function::ExternalLinkage, "putchar", this->module.get());

    std::vector<llvm::Type*> printf_params;
    printf_params.push_back(llvm::Type::getInt8PtrTy(llvmContext));
    /* External function declaration */
    llvm::FunctionType *printf_type = llvm::FunctionType::get(llvm::Type::getInt32Ty(llvmContext),printf_params, true);
    llvm::Function *printf_func = llvm::Function::Create(printf_type, llvm::Function::ExternalLinkage, "printf", this->module.get());

    /* External function declaration */
    llvm::FunctionType *getchar_type = llvm::FunctionType::get(llvm::Type::getInt32Ty(llvmContext), false);
    llvm::Function *getchar_func = llvm::Function::Create(getchar_type, llvm::Function::ExternalLinkage, "getchar", this->module.get());

    std::vector<llvm::Type*> writec_params;
    writec_params.push_back(llvm::Type::getInt32Ty(llvmContext));
    llvm::FunctionType *writec_ft = llvm::FunctionType::get(llvm::Type::getVoidTy(llvmContext),writec_params,false);
    llvm::Function *writec = llvm::Function::Create(writec_ft, llvm::Function::ExternalLinkage, "writec", this->module.get());

    llvm::BasicBlock *BB0 = llvm::BasicBlock::Create(llvmContext, "",writec);
    builder->SetInsertPoint(BB0);
    llvm::Value * trunc_val = builder->CreateTrunc(writec->getArg(0), llvm::Type::getInt8Ty(llvmContext));
    builder->CreateCall(putchar_func, trunc_val);
    builder->CreateRetVoid();

    std::vector<llvm::Type*> writei_params;
    writei_params.push_back(llvm::Type::getInt32Ty(llvmContext));
    llvm::FunctionType *writei_ft = llvm::FunctionType::get(llvm::Type::getVoidTy(llvmContext),writei_params,false);
    llvm::Function *writei = llvm::Function::Create(writei_ft, llvm::Function::ExternalLinkage, "writei", this->module.get());

    llvm::BasicBlock *BB1 = llvm::BasicBlock::Create(llvmContext, "",writei);
    builder->SetInsertPoint(BB1);
    std::vector<llvm::Value *> writei_args;
    llvm::Value * format_string = llvm::ConstantExpr::getBitCast(module->getNamedGlobal("pstr"), charType->getPointerTo());
    writei_args.push_back(format_string);
    writei_args.push_back(writei->getArg(0));

    // llvm::BasicBlock *BB2 = llvm::BasicBlock::Create(llvmContext, "",getchar_func);
    // builder->SetInsertPoint(BB2);    
    // builder->CreateRetVoid(builder->CreateCall(getchar_func));

    std::cout << "PRINTF HAS NUM ARGS: " << printf_type->getParamType(0) << std::endl;
    // llvm::Value * trunc_val = builder->CreateTrunc(writec->getArg(0), llvm::Type::getInt8Ty(llvmContext));
    builder->CreateCall(printf_func, writei_args);
    builder->CreateRetVoid();

    // std::vector<llvm::Type*> display_params;
    // display_params.push_back(llvm::Type::getInt8Ty(llvmContext));
    // /* External function declaration */
    // llvm::FunctionType *display_ft = llvm::FunctionType::get(llvm::Type::getInt8Ty(llvmContext),display_params, false);
    // llvm::Function *display_func = llvm::Function::Create(display_ft, llvm::Function::ExternalLinkage, "display", this->module.get());
    // llvm::BasicBlock *BB = llvm::BasicBlock::Create(llvmContext, "",display_func);
    // builder->SetInsertPoint(BB);
    // builder->CreateTrunc();
    // builder->CreateCall(printf_func, display_func->args());
    // builder->CreateRetVoid();



    /* Emit the INZ function - Not in use right now*/
    std::vector<llvm::Type*> params;
    llvm::FunctionType *ft = llvm::FunctionType::get(llvm::Type::getVoidTy(llvmContext),params,false);
    llvm::Function *inz = llvm::Function::Create(ft, llvm::Function::ExternalLinkage, "INZ", this->module.get());

    llvm::BasicBlock *BB2 = llvm::BasicBlock::Create(llvmContext, "",inz);
    builder->SetInsertPoint(BB2);

    /* Process the symbol table and create the initialization values*/
    std::map<std::basic_string<char>, std::shared_ptr<Symbol>> global = symbolTable->getSymbols(0);
    for(auto symbol = global.begin(); symbol != global.end();symbol++) {
        SymbolSpecifier *specifier = symbol->second->getSpecifier();
        if (!( symbol->second->getFunctionDeclarator() ))
        {
            if(specifier) {
                llvm::Constant *initValue;
                llvm::GlobalVariable *var = module->getNamedGlobal(symbol->second->getName());
                std::shared_ptr<Expression> expression = specifier->getValue();
                // std::cout << var << std::endl;
                // var->dump();
                if(expression) {
                    /* Evaluates the initialization expression */
                    llvm::Value* value = expression->accept(this);
                    // value->dump();
                    if (symbol->second->getArrayDeclarator())
                    {
                        std::vector<llvm::Constant *> init_vec(symbol->second->getArrayDeclarator()->getSize());
                        int  given_v = std::stoi(specifier->getValue()->getValue());
                        for (int i = 0 ; i < symbol->second->getArrayDeclarator()->getSize() ; i++)
                        {
                            init_vec[i] = llvm::ConstantInt::get(llvmContext, llvm::APInt(32, given_v, true));
                        }
                        value = llvm::ConstantArray::get(llvm::ArrayType::get(llvm::Type::getInt32Ty(llvmContext), symbol->second->getArrayDeclarator()->getSize()), init_vec);
                    }
                    
                    /* Creates the store instruction with the initialization value */
                    var->dump();
                    value->dump();
                    builder->CreateStore(value,var);
                }
            }
        }
        
        
    }

    /* Function terminator */
    builder->CreateRetVoid();

}
/**
 * Declares a global variable or a function
 * @param symbol
 */
void GeneratorLLVM::declare(class Symbol *symbol) {
    FunctionDeclarator *function = symbol->getFunctionDeclarator();
    std::string what = function ? "processing subroutine declaration" : "processing data declaration";
    std::cout << std::endl << what << symbol->getName() << std::endl;
    // Declares a function prototype
    if(function) {

        /* params */
        std::vector<llvm::Type*> params;
        std::vector<std::shared_ptr<Symbol>> given_params = function->getParams();
        for (auto given_param : given_params)
        {
            if (given_param->getArrayDeclarator())
            {
                // declare(given_param.get());
                params.push_back(llvm::ArrayType::get(llvm::Type::getInt32Ty(llvmContext), given_param->getArrayDeclarator()->getSize()));
            } else
            {
                // declare(given_param.get());
                params.push_back(llvm::Type::getInt32Ty(llvmContext));
            }
            
        }

        /* return type */
        std::shared_ptr<Symbol> given_ret = function->getReturn();

        llvm::Type* ret_type;

        if (given_ret->getSpecifier())
        {
            if (given_ret->getSpecifier()->getStorage() == "I")
            {
                if (given_ret->getArrayDeclarator())
                {
                    ret_type = llvm::ArrayType::get(llvm::Type::getInt32Ty(llvmContext), given_ret->getArrayDeclarator()->getSize());
                } else {
                    ret_type = llvm::Type::getInt32Ty(llvmContext);
                }
                
            } else
            {
                ret_type = llvm::Type::getInt32Ty(llvmContext);
            }
            
            
        } else {
            ret_type = llvm::Type::getVoidTy(llvmContext);
        }
        

        llvm::FunctionType *ft = llvm::FunctionType::get(ret_type,params, false);
        llvm::Function *function;
        if (symbol->isMAIN())
        {
            function = llvm::Function::Create(ft, llvm::Function::ExternalLinkage, "main", this->module.get());
        } else {
            function = llvm::Function::Create(ft, llvm::Function::ExternalLinkage, symbol->getName(), this->module.get());   
        }

        int param_idx = 0;
        for (auto &Arg : function->args()) {
            Arg.setName(given_params.at(param_idx++)->getName());
        }
        

    }
    // Declares a global variable
    SymbolSpecifier *variable = symbol->getSpecifier();
    if(variable) {
        if( !module->getNamedGlobal(symbol->getName())) {
            if (variable->getStorage() == "I")
            {
                if (symbol->getArrayDeclarator())
                {
                    this->module->getOrInsertGlobal(symbol->getName(), llvm::ArrayType::get(llvm::Type::getInt32Ty(llvmContext), symbol->getArrayDeclarator()->getSize()) );
                } else {
                    this->module->getOrInsertGlobal(symbol->getName(),builder->getInt32Ty());
                }
                
            } else
            {
                this->module->getOrInsertGlobal(symbol->getName(),builder->getInt32Ty());
            }
            // Get the variable
            llvm::GlobalVariable *var = module->getNamedGlobal(symbol->getName());
            // INZ value (if specified) - set to 0 for all globals ( could be used for locals in future)
            if(var) {
                llvm::Constant *initValue;

                if (symbol->getArrayDeclarator())
                {
                    initValue = llvm::ConstantAggregateZero::get(llvm::ArrayType::get(llvm::Type::getInt32Ty(llvmContext), symbol->getArrayDeclarator()->getSize()));
                    
                    // initValue = llvm::ConstantInt::get(llvmContext, llvm::APInt(8, 0, true));
                } else
                {
                    if (variable->getValue())
                    {
                        // initValue = llvm::ConstantInt::get(llvmContext, llvm::APInt(8, std::stoi(variable->getValue()->getValue()), true));
                        initValue = llvm::ConstantInt::get(llvmContext, llvm::APInt(32, 0, true));
                    } else {
                        initValue = llvm::ConstantInt::get(llvmContext, llvm::APInt(32, 0, true));
                    }
                    
                }
                
                
                var->setInitializer(initValue);
                var->setLinkage(llvm::GlobalValue::CommonLinkage);

            }

        }
    }
}

/**
 * Retruns an integer constant
 * @param integer instance of IntegerLiteral node
 * @return llvm::Value integer constant value
 */
llvm::Value*  GeneratorLLVM::visit(IntegerLiteral *integer,void *param) {
    int64_t ivalue = stoi(integer->getValue());
    return llvm::ConstantInt::get(llvmContext,llvm::APInt(32,ivalue,true));
}

/**
 * Returns the load instruction for an identifier
 * @param identifier instance of Identifier node
 * @return LLVM load instruction
 */
llvm::Value* GeneratorLLVM::visit(Identifier *identifier,void *param) {
    // Check if the symbol is defined
    std::shared_ptr<Symbol> symbol = symbolTable->get(identifier->getValue(), identifier->getScope());
    std::cout << "LOOKING FOR : " << identifier->getValue() << " in scope : " << identifier->getScope();
    if(symbol == nullptr) {
        throw GrimException("ERROR: undefined symbol: " + identifier->getValue());
        exit(1);
    }
    // module->getGlobalVariable(symbol->getName())->dump();
    // module->getGlobalVariable(symbol->getName())->getType()->dump();
    // Emits a Load as the data definition are global
    llvm::Type* var_ty;
    llvm::Value* var_val;
    if (this->localVars.find(symbol->getName()) != this->localVars.end())
    {
        var_ty = this->localVars[symbol->getName()]->getAllocatedType();
        var_val = this->localVars[symbol->getName()];
    } else {
        var_ty = module->getGlobalVariable(symbol->getName())->getValueType();
        var_val = module->getGlobalVariable(symbol->getName());
    }
    return  builder->CreateLoad(var_ty, var_val);
}

/**
 * Generates a math instruction
 * @param expression instance of MathExpression node
 * @return llvm::Value with the evaluated instruction
 */
llvm::Value* GeneratorLLVM::visit(MathExpression *expression,void *param) {
    llvm::Value* L = expression->getLeft()->accept(this,param);
    llvm::Value* R = expression->getRight()->accept(this,param);

    switch (expression->getType()) {
        case Token::PLUS:
            return builder->CreateAdd(L, R, "addtmp");;

        case Token::MINUS:
            return builder->CreateSub(L, R, "subtmp");

        case Token::MULTIPLY:
            return builder->CreateMul(L, R, "multmp");

        case Token::DIVIDE:
            return builder->CreateSDiv(L, R, "divtmp");
    }
    std::cout << expression->getValue() + "  INVALID operator!";
    return nullptr;
}

/**
 * Generates the instructons for a Comparison
 * @param select instance of ComparisonExpression node
 * @return
 */
llvm::Value *GeneratorLLVM::visit(ComparisonExpression *expression,void *param) {
    llvm::Value* L = expression->getLeft()->accept(this,param);
    llvm::Value* R = expression->getRight()->accept(this,param);


    switch (expression->getType()) {
        case Token::EQUAL:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_EQ,L,R,"");

        case Token::NE:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_NE,L,R,"");

        case Token::LE:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_SLE,L,R,"");

        case Token::GE:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_SGE,L,R,"");

        case Token::GT:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_SGT,L,R,"");

        case Token::LT:
            return builder->CreateICmp(llvm::ICmpInst::ICMP_SLT,L,R,"");

        default:
            break;
    }

    return nullptr;
}

/**
 * Generates a logical instruction
 * @param expression instance of LogicalExpression node
 * @return llvm::Value with the evaluated instruction
 */
llvm::Value* GeneratorLLVM::visit(LogicalExpression *expression,void *param) {
    llvm::Value* L = expression->getLeft()->accept(this,param);
    llvm::Value* R = expression->getRight()->accept(this,param);

    switch (expression->getType()) {
        case Token::AND:
            return builder->CreateAnd(L, R, "andtmp");

        case Token::OR:
            return builder->CreateOr(L, R, "ortmp");
    }
    std::cout << expression->getValue() << "  INVALID operator!";
    return nullptr;
}

/**
 * Generates a logical unary NOT instruction
 * @param expression instance of ComparisonExpression node
 * @return llvm::Value with the evaluated instruction
 */
llvm::Value* GeneratorLLVM::visit(UnaryExpression *expression,void *param) {
    llvm::Value* target = expression->getTarget()->accept(this,param);

    switch (expression->getType()) {
        case Token::NOT:
            return builder->CreateNot(target, "nottmp");
    }
    std::cout << expression->getValue() << "  INVALID operator!";
    return nullptr;
}

/**
 * Generates the instructons for an Assigment statement
 * @param assignment instance of AssignmentStatement node
 * @return
 */
llvm::Value* GeneratorLLVM::visit(AssignmentStatement *assignment,void *param) {
    // Check if the symbol is defined
    std::shared_ptr<Symbol> symbol;
    if (std::dynamic_pointer_cast<ArrayIdentifier>( assignment->getTarget()) )
    {
        std::shared_ptr<ArrayIdentifier> arr_ptr = std::dynamic_pointer_cast<ArrayIdentifier>( assignment->getTarget());
        symbol = symbolTable->get(arr_ptr->getValue(), arr_ptr->getScope());

    } else if (std::dynamic_pointer_cast<Identifier>( assignment->getTarget()))
    {
        std::shared_ptr<Identifier> id_ptr = std::dynamic_pointer_cast<Identifier>( assignment->getTarget());
        symbol = symbolTable->get(id_ptr->getValue(), id_ptr->getScope());
    }
    
    //  = symbolTable->get(assignment->getTarget()->getValue(), assignment->getTarget()->getScope());
    if(symbol == nullptr) {
        std::cout << "ERROR: undefined symbol: " << assignment->getTarget()->getValue()  << std::endl;
        exit(1);
    }

    llvm::Type* var_ty;
    llvm::Value* var_val;
    if (this->localVars.find(symbol->getName()) != this->localVars.end())
    {
        var_ty = this->localVars[symbol->getName()]->getAllocatedType();
        var_val = this->localVars[symbol->getName()];
    } else {
        var_ty = module->getGlobalVariable(symbol->getName())->getValueType();
        var_val = module->getGlobalVariable(symbol->getName());
    }


    // llvm::GlobalVariable* target = module->getGlobalVariable(symbol->getName());
    if(!var_val) {
        throw GrimException(assignment->getTarget()->getValue() + "  not found!");
    }
    var_val->dump();
    if(assignment->getExpression()) {
        std::cout << std::endl << assignment->getExpression()->toString() << std::endl;
        // this->module->print(llvm::outs(), nullptr);
        std::cout << std::endl << std::endl;
        llvm::Value* rhs = assignment->getExpression()->accept(this);
        // this->module->print(llvm::outs(), nullptr);
        std::cout << std::endl << std::endl;   
        if(rhs) {
            // Store the value in the variable
            // Modify for assigning to ArrayIdentifier
            if (std::dynamic_pointer_cast<ArrayIdentifier>( assignment->getTarget()) )
            {
                std::shared_ptr<ArrayIdentifier> arr_ptr = std::dynamic_pointer_cast<ArrayIdentifier>( assignment->getTarget());

                // llvm::GlobalVariable* var = module->getGlobalVariable(symbol->getName());
                std::vector<llvm::Value*> idx_list;

                llvm::Value* idx1 = arr_ptr->getIndex()->accept(this);
                llvm::Value* idx0 = llvm::ConstantInt::get(llvmContext, llvm::APInt(32, 0, true));

                idx_list.push_back(idx0);
                idx_list.push_back(idx1);

                llvm::Value* actual_var = builder->CreateGEP(var_ty, var_val, idx_list);

                return builder->CreateStore(rhs, actual_var);

            } else {
                return builder->CreateStore(rhs, var_val);
            }
            
            
        }
    }
    return var_val;
}

/**
 * Generates body block for a Function
 * @param func instance of FunctionDeclaration node
 * @return
 */
llvm::Value* GeneratorLLVM::visit(FunctionDeclaration *func,void *param) {

    // Create a new block insert the func.
    llvm::Function *function;
    if(func->isMAIN()) {
        function = module->getFunction("main");
    } else {
        function = module->getFunction(func->getName());
    }
    if(!function) {
        std::cout << func->getName() << "  not found!";
    }
    
    
    llvm::BasicBlock *body = llvm::BasicBlock::Create(llvmContext, "entry", function);
    builder->SetInsertPoint(body);

    // The very first statement is the initialization call
    if(func->isMAIN()) {

        std::vector<llvm::Value *> args;
        llvm::Function *target = module->getFunction("INZ");
        llvm::CallInst *c = builder->CreateCall(target, args);

    }

    this->localVars.clear();

    /* Creating the local stack variables for the arguments*/
    for (auto &Arg : function->args()) {
        std::cout << "ARGUMENT : " << Arg.getName().str() << std::endl;
        llvm::AllocaInst* arg_alloc = builder->CreateAlloca(Arg.getType(), 0, Arg.getName().str());
        this->localVars[Arg.getName().str()] = arg_alloc;
        builder->CreateStore(&Arg, arg_alloc);   
        std::cout << "ARGUMENT ALLOCED: " << Arg.getName().str() << std::endl;
    }

    /* Creating the local stack variables for local scope variables */
    
    /* Process the symbol table for the locals*/
    std::shared_ptr<Symbol> func_symbol = symbolTable->getSymbols(0)[func->getName()];
    if (func_symbol->getFunctionDeclarator() )
    {
        FunctionDeclarator* func_decl = func_symbol->getFunctionDeclarator();

        for (std::shared_ptr<Symbol> local : func_decl->getLocals() ) {
            std::cout << "Processing Local : " << local->getName() << std::endl;

            llvm::AllocaInst* local_alloc;

            SymbolSpecifier *variable = local->getSpecifier();
            if(variable) {
                if (variable->getStorage() == "I")
                {
                    if (local->getArrayDeclarator())
                    {
                        local_alloc = builder->CreateAlloca(llvm::ArrayType::get(llvm::Type::getInt32Ty(llvmContext), local->getArrayDeclarator()->getSize()), 0, local->getName());
                    } else {
                        local_alloc = builder->CreateAlloca(builder->getInt32Ty(), 0, local->getName());
                    }
                    
                } else
                {
                    local_alloc = builder->CreateAlloca(builder->getInt32Ty(), 0, local->getName());
                }

                //Put into locals map for this function
                this->localVars[local->getName()] = local_alloc;

                // INZ value (if specified)
                std::shared_ptr<Expression> expression = variable->getValue();

                if(expression) {
                    /* Evaluates the initialization expression */
                    llvm::Value* value = expression->accept(this);
                    // value->dump();
                    if (local->getArrayDeclarator())
                    {
                        std::vector<llvm::Constant *> init_vec(local->getArrayDeclarator()->getSize());
                        int  given_v = std::stoi(expression->getValue());
                        for (int i = 0 ; i < local->getArrayDeclarator()->getSize() ; i++)
                        {
                            init_vec[i] = llvm::ConstantInt::get(llvmContext, llvm::APInt(32, given_v, true));
                        }
                        value = llvm::ConstantArray::get(llvm::ArrayType::get(llvm::Type::getInt32Ty(llvmContext), local->getArrayDeclarator()->getSize()), init_vec);
                    }
                    
                    /* Creates the store instruction with the initialization value */
                    builder->CreateStore(value, local_alloc);
                } 
                std::cout << "LOCAL ALLOCED: " << local->getName() << std::endl;
            }
            
        }
    }

    // Emit the func body
    llvm::Value * func_ret_val;
    for (auto stmt = func->getNodes().begin(); stmt != func->getNodes().end(); ++stmt) {
        std::cout << std::endl << "processing node: " << stmt->get()->toString();
        func_ret_val = stmt->get()->accept( this );
    }
    // Function terminator -> return should be put in return statement's visitor
    if (func->getName() != "genesis")
    {
        if (! this->symbolTable->get(func->getName())->getFunctionDeclarator()->getReturn()->getSpecifier())
        {
            func_ret_val = builder->CreateRetVoid();
        }
    } else {
        if (! this->symbolTable->get(func->getName())->getFunctionDeclarator()->getReturn()->getSpecifier())
        {
            func_ret_val = builder->CreateRetVoid();
        }
    }
    

    return func_ret_val;

    // llvm::Value *ret = llvm:: ConstantInt::get(llvmContext, llvm::APInt(8, 0, true));
    // builder->CreateRet(ret);

    // if(emitDebugInfo) {
    //     LexicalBlocks.pop_back();
    // } else {
    //     /* Verfifies the function */
    //     std::string errors;
    //     llvm::raw_string_ostream out(errors);
    //     if(llvm::verifyFunction(*function,&out)) {
    //         throw RpgException( func->getName() + " " + out.str());
    //     }
    // }

}

/**
 * Generates  the instructions to call  a function
 * @param func instance of FunctionCall node
 * @return
 */
llvm::Value* GeneratorLLVM::visit(FunctionCall *func,void *param) {
    std::cout << "function call : " << func->getName() << std::endl;

    llvm::Function *target = module->getFunction(func->getName());
    if(!target) {
        std::cout << func->getName() << "  not found!";
    }

    std::vector<llvm::Value *> args;
    std::vector<std::shared_ptr<Expression>> given_args = func->getArgs();
    // std::cout << "NUMBER OF ARGS FOUND: " << given_args.size();
    for (auto given_arg : given_args)
    {
        // std::cout << "Argument: " << given_arg.use_count() << std::endl;
        args.push_back(given_arg->accept(this));
    }

    // std::cout << args.
    
    // llvm::Value *arg0 = llvm:: ConstantInt::get(llvmContext, llvm::APInt(8, 0, true));
    // args.push_back(arg0);
    llvm::CallInst *call = builder->CreateCall(target, args);
    
    return call;
}

/**
 * Generates  blocks and the instructions for the cond statement
 * @param cond instance of ConditionalClause node
 * @return
 */
llvm::Value* GeneratorLLVM::visit(ConditionalClause *cond,void *param) {
    std::cout << "---- conditional clause ----" ;

    /* Gets the function which is the parent */
    llvm::Function *parentBlock = builder->GetInsertBlock()->getParent();
    /* Creates a block for the exit  */
    llvm::BasicBlock *mergeBlock = llvm::BasicBlock::Create(llvmContext, "endcond");

    // Creates a block for the ELSE clause (if any)
    llvm::BasicBlock *elseBlock = nullptr;
    if (cond->getElse()) {
        elseBlock = llvm::BasicBlock::Create(llvmContext, "else");
    }

    // Creates a block for each IF clause
    for (int i = 0; i < cond->getWhen().size(); i++) {

        llvm::BasicBlock *falseBlock;
        llvm::BasicBlock *trueBlock = llvm::BasicBlock::Create(llvmContext, "when_true", parentBlock);

        // Last WHEN clause, if the OTHER is present became the false block
        if (i == cond->getWhen().size() - 1) {
            if (elseBlock) {
                falseBlock = elseBlock;
            } else {
                falseBlock = mergeBlock;
            }
        } else {
            falseBlock = llvm::BasicBlock::Create(llvmContext, "when_false");
        }

        std::cout << cond->getWhen().at(i)->getExpression() << std::endl;
        llvm::Value *condition = cond->getWhen().at(i)->getExpression()->accept(this );
        condition->dump();
        // llvm::ConstantInt::get(llvmContext, llvm::APInt(8, 0, true))->dump();
        // condition = builder->CreateICmpNE(condition, llvm::ConstantInt::get(llvmContext, llvm::APInt(8, 0, true)), "ifcond");
        builder->CreateCondBr(condition, trueBlock, falseBlock);

        // Emits the true block
        builder->SetInsertPoint(trueBlock);
        llvm::Value *xx;
        for (auto stmt = cond->getWhen().at(i)->getNodes().begin();
            stmt != cond->getWhen().at(i)->getNodes().end(); ++stmt) {
            xx = stmt->get()->accept( this );
            //std::cout << xx << std::endl;
        }
        if (! trueBlock->getTerminator())
        {
            builder->CreateBr(mergeBlock);
        }
        // builder->CreateBr(mergeBlock);

        // Emits the false block
        parentBlock->getBasicBlockList().push_back(falseBlock);
        builder->SetInsertPoint(falseBlock);

    }

    // Emits the else block
    if (elseBlock) {
        std::cout <<  " : " << "else clause";

        // parentBlock->getBasicBlockList().push_back(elseBlock);
        // Already pushed at end of parentBlock by the last if condition processed in loop above
        builder->SetInsertPoint(elseBlock);
        llvm::Value *xx;
        for (auto stmt = cond->getElse()->getNodes().begin(); stmt != cond->getElse()->getNodes().end(); ++stmt) {
            xx = stmt->get()->accept(this,param);
        }
        if (! elseBlock->getTerminator())
        {
            builder->CreateBr(mergeBlock);
        }
    }

    /* Emits the exit block */
    if (elseBlock) {
        parentBlock->getBasicBlockList().push_back(mergeBlock);
    }
    
    builder->SetInsertPoint(mergeBlock);
    return nullptr;
}

/**
 * Generates  blocks and the instructions of the FOR statement
 * @param select instance of ForStatement node
 * @return
 */
llvm::Value *GeneratorLLVM::visit(ForStatement *loop,void *param) {
    std::cout;
    /* Initialize the loop variable */
    llvm::Value *startVal = loop->getStart()->accept(this );
    llvm::GlobalVariable* variable = module->getGlobalVariable(loop->getStart().get()->getTarget()->getValue());

    llvm::Function *forLoop = builder->GetInsertBlock()->getParent();
    llvm::BasicBlock *loopBody = llvm::BasicBlock::Create(llvmContext, "forLoop", forLoop);
    
    // Insert branch based on first eval of the condition
    llvm::BasicBlock *exitLoop = llvm::BasicBlock::Create(llvmContext, "exitLoop", forLoop);


    llvm::Value *EndCond = loop->getEnd()->accept(this );
    builder->CreateCondBr(EndCond, loopBody, exitLoop);
    // builder->CreateBr(loopBody);

    /* Insert the statements in loopBody */
    builder->SetInsertPoint(loopBody);

    /* Adds the statements to the loop body */
    for (auto stmt = loop->getNodes().begin(); stmt != loop->getNodes().end(); ++stmt) {
        stmt->get()->accept(this );
    }

    /* Emits instructions to update the loop variable */
    loop->getChange()->accept(this );

    /* Create the "exit loop" block */
    // llvm::BasicBlock *exitLoop = llvm::BasicBlock::Create(llvmContext, "exitLoop", forLoop);


    EndCond = loop->getEnd()->accept(this );
    /* Insert the conditional branch */
    builder->CreateCondBr(EndCond, loopBody, exitLoop);

    /* Restore the insert point to the end of the loop */
    builder->SetInsertPoint(exitLoop);

    return nullptr;

}

llvm::Value *GeneratorLLVM::visit(ReturnStatement *ret,void *param) {
    
    llvm::Value *ret_val = ret->getExpression()->accept(this);
    builder->CreateRet(ret_val);
    return ret_val;
}

void GeneratorLLVM::dump()  {
    

    /* Verifies the module */
    // std::string errors;
    // llvm::raw_string_ostream out(errors);
    // if(llvm::verifyModule(*this->module, &out)) {
    //     throw RpgException( filename + " " + out.str());
    // }

    this->module->print(llvm::outs(), nullptr);
}

llvm::Value* GeneratorLLVM::visit(Statement *statement,void *param) {
    return nullptr;
}

// TODO: array identifier leads to a load via GEP maybe
llvm::Value* GeneratorLLVM::visit(ArrayIdentifier *identifier,void *param) {
    std::shared_ptr<Symbol> symbol = symbolTable->get(identifier->getVar()->getValue(), identifier->getScope());
    if(symbol == nullptr) {
        throw GrimException("ERROR: undefined symbol: " + identifier->getValue());
        exit(1);
    }

    llvm::Type* var_ty;
    llvm::Value* var_val;
    if (this->localVars.find(symbol->getName()) != this->localVars.end())
    {
        var_ty = this->localVars[symbol->getName()]->getAllocatedType();
        var_val = this->localVars[symbol->getName()];
    } else {
        var_ty = module->getGlobalVariable(symbol->getName())->getValueType();
        var_val = module->getGlobalVariable(symbol->getName());
    }

    // llvm::GlobalVariable* var = module->getGlobalVariable(symbol->getName());
    std::vector<llvm::Value*> idx_list;

    llvm::Value* idx1 = identifier->getIndex()->accept(this);
    llvm::Value* idx0 = llvm::ConstantInt::get(llvmContext, llvm::APInt(32, 0, true));

    idx_list.push_back(idx0);
    idx_list.push_back(idx1);

    llvm::Value* actual_var = builder->CreateGEP(var_ty, var_val, idx_list);
    // module->getGlobalVariable(symbol->getName())->dump();
    // module->getGlobalVariable(symbol->getName())->getType()->dump();
    // Emits a Load as the data definition are global
    // return  builder->CreateLoad(module->getGlobalVariable(symbol->getName())->getValueType() , module->getGlobalVariable(symbol->getName()));
    // actual_var->dump();
    // actual_var->getType()->dump();
    // var->getValueType()->getElementType()->dump();
    return  builder->CreateLoad(llvm::Type::getInt32Ty(llvmContext), actual_var);
}


// llvm::Value* GeneratorLLVM::visit(DecimalLiteral *decimal,void *param) {
//     return nullptr;
// }

// llvm::Value* GeneratorLLVM::visit(StringLiteral *string,void *param) {
//     return nullptr;
// }
/**
 * Utility function to emit debug location
 * @param node
 * @param unit
 */
// void GeneratorLLVM::emitLocation(Node *node,llvm::DICompileUnit *unit) {
//     if (!node)
//         return builder->SetCurrentDebugLocation(llvm::DebugLoc());
//     llvm::DIScope *scope;
//     if (LexicalBlocks.empty())
//         scope = unit;
//     else
//         scope = LexicalBlocks.back();
//     builder->SetCurrentDebugLocation(
//             llvm::DebugLoc::get(node->getLine(),0, scope));
// }

// llvm::DIType *GeneratorLLVM::getDebugType() {
//     if (debugInfo.itype)
//         return debugInfo.itype;

//     debugInfo.itype = debugBuilder->createBasicType("int", 32, llvm::dwarf::DW_ATE_signed);
//     return debugInfo.itype;
// }


// llvm::DISubroutineType *GeneratorLLVM::createFunctionType(unsigned NumArgs) {
//     llvm::SmallVector<llvm::Metadata *, 8> EltTys;
//     llvm::DIType *DblTy = getDebugType();

//     // Add the result type.
//     EltTys.push_back(DblTy);

//     for (unsigned i = 0, e = NumArgs; i != e; ++i)
//         EltTys.push_back(DblTy);

//     return debugBuilder->createSubroutineType(debugBuilder->getOrCreateTypeArray(EltTys));
// }