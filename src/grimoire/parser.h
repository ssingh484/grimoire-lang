#pragma once
#include "antlr4-runtime.h"
#include "antlr-generated/grimoireBaseVisitor.h"

#include "ast.h"
#include "compiler.h"


class grimoireCodeVisitor : public grimoireCompilerVisitor {
public:
    grimoireCodeVisitor(const std::string &filename, const Compiler *compiler);

    antlrcpp::Any visitGrimoire(antlrcppgrim::grimoireParser::GrimoireContext *ctx) override;

    antlrcpp::Any visitFunccall(antlrcppgrim::grimoireParser::FunccallContext *ctx) override;

    antlrcpp::Any visitBeginfunc(antlrcppgrim::grimoireParser::BeginfuncContext *ctx) override;
    antlrcpp::Any visitEndfunc(antlrcppgrim::grimoireParser::EndfuncContext *ctx) override;

    antlrcpp::Any visitAssignstat(antlrcppgrim::grimoireParser::AssignstatContext *ctx) override;

    antlrcpp::Any visitCondstat(antlrcppgrim::grimoireParser::CondstatContext *ctx) override;
    antlrcpp::Any visitIfcond(antlrcppgrim::grimoireParser::IfcondContext *ctx) override;
    antlrcpp::Any visitElsecond(antlrcppgrim::grimoireParser::ElsecondContext *ctx) override;
    antlrcpp::Any visitEndcondstat(antlrcppgrim::grimoireParser::EndcondstatContext *ctx) override;

    antlrcpp::Any visitForstat(antlrcppgrim::grimoireParser::ForstatContext *ctx) override;
    antlrcpp::Any visitEndfor(antlrcppgrim::grimoireParser::EndforContext *ctx) override;

    antlrcpp::Any visitRetstat(antlrcppgrim::grimoireParser::RetstatContext *ctx) override;

    void addNode(std::shared_ptr<Node> node) {
        if(scopeStack.size() > 0) {
            std::shared_ptr<Node> current = scopeStack.top();
            current.get()->addNode(node);
        } else {
            compiler->ast->add(node);
        }
    }
    std::shared_ptr<Expression>  parseExpression(antlrcppgrim::grimoireParser::ExprContext *ctx);

    void dump() { 

        std::cout << std::endl << "PARSED AST HEAD HAS " << std::endl << compiler->ast->getNodes().size() << " Children" << std::endl;

    }


private:
    std::stack<std::shared_ptr<Node>> scopeStack;


};