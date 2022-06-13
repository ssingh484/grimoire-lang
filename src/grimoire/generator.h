#pragma once
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/DIBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/Support/Host.h>
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetOptions.h"

#include "ast.h"
#include "symtab.h"

struct DebugInfo {
    llvm::DICompileUnit *unit;
    llvm::DIType *itype = nullptr;

} ;

struct Blocks {
    llvm::BasicBlock    *trueBlock;
    llvm::BasicBlock    *falseBlock;
};

class GeneratorLLVM : public Generator {

public:

    GeneratorLLVM(std::string filename) {
        this->filename = filename;

        this->module = std::make_unique<llvm::Module>(llvm::StringRef(filename),llvmContext);
        this->builder = std::make_unique<llvm::IRBuilder<>>(llvmContext);
        auto TargetTriple = llvm::sys::getDefaultTargetTriple();
        // std::cout << std::endl << TargetTriple << std::endl << std::endl;
        module->setTargetTriple(TargetTriple);

        llvm::InitializeAllTargetInfos();
        llvm::InitializeAllTargets();
        llvm::InitializeAllTargetMCs();
        llvm::InitializeAllAsmParsers();
        llvm::InitializeAllAsmPrinters();

    }
    void dump();
public:
    virtual void declare(Symbol *);
    void         process(std::shared_ptr<SymbolTable> symbolTable,std::shared_ptr<AST> ast);
    void         initializeRunTime(std::shared_ptr<SymbolTable> symbolTable);
    llvm::Value* visit(IntegerLiteral *integer,void *param) override;
    // llvm::Value* visit(DecimalLiteral *decimal,void *param) override;
    // llvm::Value* visit(StringLiteral *string,void *param) override;
    llvm::Value* visit(Identifier *identifier,void *param) override;

    llvm::Value* visit(MathExpression *expression,void *param) override;
    llvm::Value *visit(ComparisonExpression *expression,void *param) override;
    llvm::Value *visit(LogicalExpression *expression,void *param) override;
    llvm::Value *visit(UnaryExpression *expression,void *param) override;

    llvm::Value* visit(AssignmentStatement *assignment,void *param) override;
    llvm::Value* visit(FunctionDeclaration *func,void *param) override;
    llvm::Value* visit(FunctionCall *func,void *param) override;
    llvm::Value* visit(ConditionalClause *cond,void *param) override;

    llvm::Value *visit(ForStatement *loop,void *param) override;
    llvm::Value *visit(ReturnStatement *ret,void *param) override;
    llvm::Value *visit(Statement *statement,void *param) override;
    llvm::Value *visit(ArrayIdentifier *identifier,void *param) override;

private:
    std::string filename;

    llvm::LLVMContext llvmContext;
    std::unique_ptr<llvm::Module> module;
    std::unique_ptr<llvm::IRBuilder<>>  builder;
    std::shared_ptr<SymbolTable> symbolTable;
    std::map< std::string, llvm::AllocaInst *> localVars;
};