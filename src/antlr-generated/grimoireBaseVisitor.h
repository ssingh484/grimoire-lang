
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

  virtual std::any visitType(grimoireParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptionalinit(grimoireParser::OptionalinitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamlist(grimoireParser::ParamlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamlisttail(grimoireParser::ParamlisttailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRettype(grimoireParser::RettypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(grimoireParser::ParamContext *ctx) override {
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

  virtual std::any visitIdstat(grimoireParser::IdstatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdstat2(grimoireParser::Idstat2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondstat(grimoireParser::CondstatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondstattail(grimoireParser::CondstattailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(grimoireParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicoperation1(grimoireParser::Logicoperation1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicoperationtail1(grimoireParser::Logicoperationtail1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicoperation2(grimoireParser::Logicoperation2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicoperationtail2(grimoireParser::Logicoperationtail2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperation1(grimoireParser::Compoperation1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperationtail1(grimoireParser::Compoperationtail1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperation2(grimoireParser::Compoperation2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperationtail2(grimoireParser::Compoperationtail2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperation3(grimoireParser::Compoperation3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperationtail3(grimoireParser::Compoperationtail3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperation4(grimoireParser::Compoperation4Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperationtail4(grimoireParser::Compoperationtail4Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperation5(grimoireParser::Compoperation5Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperationtail5(grimoireParser::Compoperationtail5Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperation6(grimoireParser::Compoperation6Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoperationtail6(grimoireParser::Compoperationtail6Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSumoperation1(grimoireParser::Sumoperation1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSumoperationtail1(grimoireParser::Sumoperationtail1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSumoperation2(grimoireParser::Sumoperation2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSumoperationtail2(grimoireParser::Sumoperationtail2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultoperation1(grimoireParser::Multoperation1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultoperationtail1(grimoireParser::Multoperationtail1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultoperation2(grimoireParser::Multoperation2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultoperationtail2(grimoireParser::Multoperationtail2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(grimoireParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprlist(grimoireParser::ExprlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprlisttail(grimoireParser::ExprlisttailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLvaluetail(grimoireParser::LvaluetailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignstat(grimoireParser::AssignstatContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcppgrim
