
// Generated from grimoire.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "grimoireParser.h"


namespace antlrcppgrim {

/**
 * This interface defines an abstract listener for a parse tree produced by grimoireParser.
 */
class  grimoireListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterGrimoire(grimoireParser::GrimoireContext *ctx) = 0;
  virtual void exitGrimoire(grimoireParser::GrimoireContext *ctx) = 0;

  virtual void enterDeclarationsegment(grimoireParser::DeclarationsegmentContext *ctx) = 0;
  virtual void exitDeclarationsegment(grimoireParser::DeclarationsegmentContext *ctx) = 0;

  virtual void enterVardeclarationlist(grimoireParser::VardeclarationlistContext *ctx) = 0;
  virtual void exitVardeclarationlist(grimoireParser::VardeclarationlistContext *ctx) = 0;

  virtual void enterVardeclaration(grimoireParser::VardeclarationContext *ctx) = 0;
  virtual void exitVardeclaration(grimoireParser::VardeclarationContext *ctx) = 0;

  virtual void enterFunctdeclarationlist(grimoireParser::FunctdeclarationlistContext *ctx) = 0;
  virtual void exitFunctdeclarationlist(grimoireParser::FunctdeclarationlistContext *ctx) = 0;

  virtual void enterFunctdeclaration(grimoireParser::FunctdeclarationContext *ctx) = 0;
  virtual void exitFunctdeclaration(grimoireParser::FunctdeclarationContext *ctx) = 0;

  virtual void enterType(grimoireParser::TypeContext *ctx) = 0;
  virtual void exitType(grimoireParser::TypeContext *ctx) = 0;

  virtual void enterOptionalinit(grimoireParser::OptionalinitContext *ctx) = 0;
  virtual void exitOptionalinit(grimoireParser::OptionalinitContext *ctx) = 0;

  virtual void enterParamlist(grimoireParser::ParamlistContext *ctx) = 0;
  virtual void exitParamlist(grimoireParser::ParamlistContext *ctx) = 0;

  virtual void enterParamlisttail(grimoireParser::ParamlisttailContext *ctx) = 0;
  virtual void exitParamlisttail(grimoireParser::ParamlisttailContext *ctx) = 0;

  virtual void enterRettype(grimoireParser::RettypeContext *ctx) = 0;
  virtual void exitRettype(grimoireParser::RettypeContext *ctx) = 0;

  virtual void enterParam(grimoireParser::ParamContext *ctx) = 0;
  virtual void exitParam(grimoireParser::ParamContext *ctx) = 0;

  virtual void enterStatseq(grimoireParser::StatseqContext *ctx) = 0;
  virtual void exitStatseq(grimoireParser::StatseqContext *ctx) = 0;

  virtual void enterStattail(grimoireParser::StattailContext *ctx) = 0;
  virtual void exitStattail(grimoireParser::StattailContext *ctx) = 0;

  virtual void enterStat(grimoireParser::StatContext *ctx) = 0;
  virtual void exitStat(grimoireParser::StatContext *ctx) = 0;

  virtual void enterIdstat(grimoireParser::IdstatContext *ctx) = 0;
  virtual void exitIdstat(grimoireParser::IdstatContext *ctx) = 0;

  virtual void enterIdstat2(grimoireParser::Idstat2Context *ctx) = 0;
  virtual void exitIdstat2(grimoireParser::Idstat2Context *ctx) = 0;

  virtual void enterCondstat(grimoireParser::CondstatContext *ctx) = 0;
  virtual void exitCondstat(grimoireParser::CondstatContext *ctx) = 0;

  virtual void enterCondstattail(grimoireParser::CondstattailContext *ctx) = 0;
  virtual void exitCondstattail(grimoireParser::CondstattailContext *ctx) = 0;

  virtual void enterExpr(grimoireParser::ExprContext *ctx) = 0;
  virtual void exitExpr(grimoireParser::ExprContext *ctx) = 0;

  virtual void enterLogicoperation1(grimoireParser::Logicoperation1Context *ctx) = 0;
  virtual void exitLogicoperation1(grimoireParser::Logicoperation1Context *ctx) = 0;

  virtual void enterLogicoperationtail1(grimoireParser::Logicoperationtail1Context *ctx) = 0;
  virtual void exitLogicoperationtail1(grimoireParser::Logicoperationtail1Context *ctx) = 0;

  virtual void enterLogicoperation2(grimoireParser::Logicoperation2Context *ctx) = 0;
  virtual void exitLogicoperation2(grimoireParser::Logicoperation2Context *ctx) = 0;

  virtual void enterLogicoperationtail2(grimoireParser::Logicoperationtail2Context *ctx) = 0;
  virtual void exitLogicoperationtail2(grimoireParser::Logicoperationtail2Context *ctx) = 0;

  virtual void enterCompoperation1(grimoireParser::Compoperation1Context *ctx) = 0;
  virtual void exitCompoperation1(grimoireParser::Compoperation1Context *ctx) = 0;

  virtual void enterCompoperationtail1(grimoireParser::Compoperationtail1Context *ctx) = 0;
  virtual void exitCompoperationtail1(grimoireParser::Compoperationtail1Context *ctx) = 0;

  virtual void enterCompoperation2(grimoireParser::Compoperation2Context *ctx) = 0;
  virtual void exitCompoperation2(grimoireParser::Compoperation2Context *ctx) = 0;

  virtual void enterCompoperationtail2(grimoireParser::Compoperationtail2Context *ctx) = 0;
  virtual void exitCompoperationtail2(grimoireParser::Compoperationtail2Context *ctx) = 0;

  virtual void enterCompoperation3(grimoireParser::Compoperation3Context *ctx) = 0;
  virtual void exitCompoperation3(grimoireParser::Compoperation3Context *ctx) = 0;

  virtual void enterCompoperationtail3(grimoireParser::Compoperationtail3Context *ctx) = 0;
  virtual void exitCompoperationtail3(grimoireParser::Compoperationtail3Context *ctx) = 0;

  virtual void enterCompoperation4(grimoireParser::Compoperation4Context *ctx) = 0;
  virtual void exitCompoperation4(grimoireParser::Compoperation4Context *ctx) = 0;

  virtual void enterCompoperationtail4(grimoireParser::Compoperationtail4Context *ctx) = 0;
  virtual void exitCompoperationtail4(grimoireParser::Compoperationtail4Context *ctx) = 0;

  virtual void enterCompoperation5(grimoireParser::Compoperation5Context *ctx) = 0;
  virtual void exitCompoperation5(grimoireParser::Compoperation5Context *ctx) = 0;

  virtual void enterCompoperationtail5(grimoireParser::Compoperationtail5Context *ctx) = 0;
  virtual void exitCompoperationtail5(grimoireParser::Compoperationtail5Context *ctx) = 0;

  virtual void enterCompoperation6(grimoireParser::Compoperation6Context *ctx) = 0;
  virtual void exitCompoperation6(grimoireParser::Compoperation6Context *ctx) = 0;

  virtual void enterCompoperationtail6(grimoireParser::Compoperationtail6Context *ctx) = 0;
  virtual void exitCompoperationtail6(grimoireParser::Compoperationtail6Context *ctx) = 0;

  virtual void enterSumoperation1(grimoireParser::Sumoperation1Context *ctx) = 0;
  virtual void exitSumoperation1(grimoireParser::Sumoperation1Context *ctx) = 0;

  virtual void enterSumoperationtail1(grimoireParser::Sumoperationtail1Context *ctx) = 0;
  virtual void exitSumoperationtail1(grimoireParser::Sumoperationtail1Context *ctx) = 0;

  virtual void enterSumoperation2(grimoireParser::Sumoperation2Context *ctx) = 0;
  virtual void exitSumoperation2(grimoireParser::Sumoperation2Context *ctx) = 0;

  virtual void enterSumoperationtail2(grimoireParser::Sumoperationtail2Context *ctx) = 0;
  virtual void exitSumoperationtail2(grimoireParser::Sumoperationtail2Context *ctx) = 0;

  virtual void enterMultoperation1(grimoireParser::Multoperation1Context *ctx) = 0;
  virtual void exitMultoperation1(grimoireParser::Multoperation1Context *ctx) = 0;

  virtual void enterMultoperationtail1(grimoireParser::Multoperationtail1Context *ctx) = 0;
  virtual void exitMultoperationtail1(grimoireParser::Multoperationtail1Context *ctx) = 0;

  virtual void enterMultoperation2(grimoireParser::Multoperation2Context *ctx) = 0;
  virtual void exitMultoperation2(grimoireParser::Multoperation2Context *ctx) = 0;

  virtual void enterMultoperationtail2(grimoireParser::Multoperationtail2Context *ctx) = 0;
  virtual void exitMultoperationtail2(grimoireParser::Multoperationtail2Context *ctx) = 0;

  virtual void enterTerm(grimoireParser::TermContext *ctx) = 0;
  virtual void exitTerm(grimoireParser::TermContext *ctx) = 0;

  virtual void enterExprlist(grimoireParser::ExprlistContext *ctx) = 0;
  virtual void exitExprlist(grimoireParser::ExprlistContext *ctx) = 0;

  virtual void enterExprlisttail(grimoireParser::ExprlisttailContext *ctx) = 0;
  virtual void exitExprlisttail(grimoireParser::ExprlisttailContext *ctx) = 0;

  virtual void enterLvaluetail(grimoireParser::LvaluetailContext *ctx) = 0;
  virtual void exitLvaluetail(grimoireParser::LvaluetailContext *ctx) = 0;

  virtual void enterAssignstat(grimoireParser::AssignstatContext *ctx) = 0;
  virtual void exitAssignstat(grimoireParser::AssignstatContext *ctx) = 0;


};

}  // namespace antlrcppgrim
