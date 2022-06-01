#include <list>
#include "antlr4-runtime.h"
#include "antlr-generated/grimoireParser.h"
#include "antlr-generated/grimoireBaseVisitor.h"

#include "symtab.h"
#include "declaration.h"

/**
 * Process a variable declaration
 * @param ctx
 * @return symbol
 */
std::shared_ptr<Symbol> grimoireSymbolFactory::create(antlrcppgrim::grimoireParser::VardeclarationContext* ctx) {
    if (ctx->ID()) {
        /* Symbol Name */
        std::string name = ctx->ID()->getText();

        /* Creates the symbol and the specifier */
        std::shared_ptr<Symbol> symbol = std::make_shared<Symbol>(name, ctx->getStart()->getLine());
        std::shared_ptr<SymbolSpecifier> specifier = std::make_shared<SymbolSpecifier>("I");

        /* array */
        if (ctx->type()->ARRAY())
        {
            int arraySize = stoi(ctx->type()->INTLIT()->getText());
            std::shared_ptr<ArrayDeclarator> declarator = std::make_shared<ArrayDeclarator>(arraySize);
            symbol->addDeclarator(declarator);
        }
        

        /* value */
        if (ctx->optionalinit()->EMBODIES())
        {
            specifier->setValue(IntegerLiteral::create( ctx->optionalinit()->INTLIT()->getText(), ctx->getStart()->getLine()));
        } else
        {
            specifier->setValue(IntegerLiteral::create( "0", ctx->getStart()->getLine()));
        }

        symbol->addSpecifier(specifier);
        return symbol;
    }
    return nullptr;
}

/**
 * Process a function declaration
 * @param ctx
 * @return symbol
 */
std::shared_ptr<Symbol> grimoireSymbolFactory::create(antlrcppgrim::grimoireParser::FunctdeclarationContext* ctx) {
    /* Function Name */
    std::string name =  ctx->beginfunc()->ID()->getText();

    /* Function Return Type */
    std::shared_ptr<Symbol> ret_var;

    if (ctx->beginfunc()->rettype()->type())
    {
        /* Creates the symbol and the specifier */
        ret_var = std::make_shared<Symbol>("UNNAMED RETURNED SYMBOL", ctx->getStart()->getLine());
        std::shared_ptr<SymbolSpecifier> ret_specifier = std::make_shared<SymbolSpecifier>("I");

        /* array */
        if (ctx->beginfunc()->rettype()->type()->ARRAY())
        {
            int arraySize = stoi(ctx->beginfunc()->rettype()->type()->INTLIT()->getText());
            std::shared_ptr<ArrayDeclarator> ret_declarator = std::make_shared<ArrayDeclarator>(arraySize);
            ret_var->addDeclarator(ret_declarator);
        }
        ret_var->addSpecifier(ret_specifier);
    } else
    {
        ret_var = std::make_shared<Symbol>("UNNAMED RETURNED SYMBOL", ctx->getStart()->getLine());
    }

    // std::cout << "FUNCTION FOUND" << ctx->toStringTree(true);
    std::shared_ptr<Symbol> symbol = std::make_shared<Symbol>(name, ctx->getStart()->getLine());
    std::shared_ptr<FunctionDeclarator> declarator = std::make_shared<FunctionDeclarator>(ret_var);
    
    /* Function Params */
    
    for (auto param_ctx : ctx->beginfunc()->paramlist()->param())
    {
        /* Creates the symbol and the specifier */
        std::shared_ptr<Symbol> param_var = std::make_shared<Symbol>(param_ctx->ID()->getText(), ctx->getStart()->getLine());
        std::shared_ptr<SymbolSpecifier> param_specifier = std::make_shared<SymbolSpecifier>("I");

        /* array */
        if (param_ctx->type()->ARRAY())
        {
            int arraySize = stoi(param_ctx->type()->INTLIT()->getText());
            std::shared_ptr<ArrayDeclarator> param_declarator = std::make_shared<ArrayDeclarator>(arraySize);
            param_var->addDeclarator(param_declarator);
        }
        param_var->addSpecifier(param_specifier);

        declarator->addParam(param_var);
    }

    symbol->addDeclarator(declarator);

    return symbol;
}

grimoireDeclarationVisitor::grimoireDeclarationVisitor(const std::string &filename, const Compiler *compiler)
        : grimoireCompilerVisitor(filename, compiler) {
    this->symbolFactory = std::make_shared<grimoireSymbolFactory>(compiler);
}

/**
 * Parse variable declaration
 * @param ctx
 * @return
 */
std::shared_ptr<Symbol> grimoireDeclarationVisitor::parseSymbol(antlrcppgrim::grimoireParser::VardeclarationContext *ctx) {

    return this->symbolFactory->create(ctx);

}

/**
 * Parse function declaration
 * @param ctx
 * @return
 */
std::shared_ptr<Symbol> grimoireDeclarationVisitor::parseSubroutine(antlrcppgrim::grimoireParser::FunctdeclarationContext* ctx) {

    return this->symbolFactory->create(ctx);

}

/**
 * Variable declaration
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireDeclarationVisitor::visitVardeclaration(antlrcppgrim::grimoireParser::VardeclarationContext *ctx) {
    std::string name = ctx->ID() ? ctx->ID()->getText() : "";
    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : DECLARATION " << name;

    std::shared_ptr<Symbol> symbol = parseSymbol(ctx);
    if (symbol) {
        this->compiler->symbolTable->add(symbol);
    }
    return grimoireBaseVisitor::visitVardeclaration(ctx);
}

/**
 * function declaration
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireDeclarationVisitor::visitFunctdeclaration(antlrcppgrim::grimoireParser::FunctdeclarationContext *ctx) {
    std::string name = ctx->beginfunc()->ID() ? ctx->beginfunc()->ID()->getText() : "";
    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : function " << name;

    std::shared_ptr<Symbol> symbol = parseSubroutine(ctx);
    if (symbol) {
        this->compiler->symbolTable->add(symbol);
    }
    return grimoireBaseVisitor::visitFunctdeclaration(ctx);
}