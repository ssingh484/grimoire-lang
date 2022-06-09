
// Generated from grimoire.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "grimoireVisitor.h"


namespace antlrcppgrim {

/**
 * This class provides an empty implementation of grimoireVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  grimoireBaseVisitor : public grimoireVisitor {
public:

  virtual std::any visitGrimoire(grimoireParser::GrimoireContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationsegment(grimoireParser::DeclarationsegmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVardeclarationlist(grimoireParser::VardeclarationlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVardeclaration(grimoireParser::VardeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctdeclarationlist(grimoireParser::FunctdeclarationlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctdeclaration(grimoireParser::FunctdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBeginfunc(grimoireParser::BeginfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndfunc(grimoireParser::EndfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(grimoireParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalinit(grimoireParser::OptionalinitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamlist(grimoireParser::ParamlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRettype(grimoireParser::RettypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(grimoireParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocalslist(grimoireParser::LocalslistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocaldeclaration(grimoireParser::LocaldeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatseq(grimoireParser::StatseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStattail(grimoireParser::StattailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStat(grimoireParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignstat(grimoireParser::AssignstatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunccall(grimoireParser::FunccallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncexpr(grimoireParser::FuncexprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondstat(grimoireParser::CondstatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondstattail(grimoireParser::CondstattailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfcond(grimoireParser::IfcondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElsecond(grimoireParser::ElsecondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndcondstat(grimoireParser::EndcondstatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForstat(grimoireParser::ForstatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEndfor(grimoireParser::EndforContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRetstat(grimoireParser::RetstatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(grimoireParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(grimoireParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprlist(grimoireParser::ExprlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLvaluetail(grimoireParser::LvaluetailContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcppgrim
