
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

  virtual void enterBeginfunc(grimoireParser::BeginfuncContext *ctx) = 0;
  virtual void exitBeginfunc(grimoireParser::BeginfuncContext *ctx) = 0;

  virtual void enterEndfunc(grimoireParser::EndfuncContext *ctx) = 0;
  virtual void exitEndfunc(grimoireParser::EndfuncContext *ctx) = 0;

  virtual void enterType(grimoireParser::TypeContext *ctx) = 0;
  virtual void exitType(grimoireParser::TypeContext *ctx) = 0;

  virtual void enterOptionalinit(grimoireParser::OptionalinitContext *ctx) = 0;
  virtual void exitOptionalinit(grimoireParser::OptionalinitContext *ctx) = 0;

  virtual void enterParamlist(grimoireParser::ParamlistContext *ctx) = 0;
  virtual void exitParamlist(grimoireParser::ParamlistContext *ctx) = 0;

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

  virtual void enterAssignstat(grimoireParser::AssignstatContext *ctx) = 0;
  virtual void exitAssignstat(grimoireParser::AssignstatContext *ctx) = 0;

  virtual void enterFunccall(grimoireParser::FunccallContext *ctx) = 0;
  virtual void exitFunccall(grimoireParser::FunccallContext *ctx) = 0;

  virtual void enterFuncexpr(grimoireParser::FuncexprContext *ctx) = 0;
  virtual void exitFuncexpr(grimoireParser::FuncexprContext *ctx) = 0;

  virtual void enterCondstat(grimoireParser::CondstatContext *ctx) = 0;
  virtual void exitCondstat(grimoireParser::CondstatContext *ctx) = 0;

  virtual void enterCondstattail(grimoireParser::CondstattailContext *ctx) = 0;
  virtual void exitCondstattail(grimoireParser::CondstattailContext *ctx) = 0;

  virtual void enterIfcond(grimoireParser::IfcondContext *ctx) = 0;
  virtual void exitIfcond(grimoireParser::IfcondContext *ctx) = 0;

  virtual void enterElsecond(grimoireParser::ElsecondContext *ctx) = 0;
  virtual void exitElsecond(grimoireParser::ElsecondContext *ctx) = 0;

  virtual void enterEndcondstat(grimoireParser::EndcondstatContext *ctx) = 0;
  virtual void exitEndcondstat(grimoireParser::EndcondstatContext *ctx) = 0;

  virtual void enterForstat(grimoireParser::ForstatContext *ctx) = 0;
  virtual void exitForstat(grimoireParser::ForstatContext *ctx) = 0;

  virtual void enterEndfor(grimoireParser::EndforContext *ctx) = 0;
  virtual void exitEndfor(grimoireParser::EndforContext *ctx) = 0;

  virtual void enterRetstat(grimoireParser::RetstatContext *ctx) = 0;
  virtual void exitRetstat(grimoireParser::RetstatContext *ctx) = 0;

  virtual void enterExpr(grimoireParser::ExprContext *ctx) = 0;
  virtual void exitExpr(grimoireParser::ExprContext *ctx) = 0;

  virtual void enterTerm(grimoireParser::TermContext *ctx) = 0;
  virtual void exitTerm(grimoireParser::TermContext *ctx) = 0;

  virtual void enterExprlist(grimoireParser::ExprlistContext *ctx) = 0;
  virtual void exitExprlist(grimoireParser::ExprlistContext *ctx) = 0;

  virtual void enterLvaluetail(grimoireParser::LvaluetailContext *ctx) = 0;
  virtual void exitLvaluetail(grimoireParser::LvaluetailContext *ctx) = 0;


};

}  // namespace antlrcppgrim
