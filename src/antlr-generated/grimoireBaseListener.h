
// Generated from grimoire.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "grimoireListener.h"


namespace antlrcppgrim {

/**
 * This class provides an empty implementation of grimoireListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  grimoireBaseListener : public grimoireListener {
public:

  virtual void enterGrimoire(grimoireParser::GrimoireContext * /*ctx*/) override { }
  virtual void exitGrimoire(grimoireParser::GrimoireContext * /*ctx*/) override { }

  virtual void enterDeclarationsegment(grimoireParser::DeclarationsegmentContext * /*ctx*/) override { }
  virtual void exitDeclarationsegment(grimoireParser::DeclarationsegmentContext * /*ctx*/) override { }

  virtual void enterVardeclarationlist(grimoireParser::VardeclarationlistContext * /*ctx*/) override { }
  virtual void exitVardeclarationlist(grimoireParser::VardeclarationlistContext * /*ctx*/) override { }

  virtual void enterVardeclaration(grimoireParser::VardeclarationContext * /*ctx*/) override { }
  virtual void exitVardeclaration(grimoireParser::VardeclarationContext * /*ctx*/) override { }

  virtual void enterFunctdeclarationlist(grimoireParser::FunctdeclarationlistContext * /*ctx*/) override { }
  virtual void exitFunctdeclarationlist(grimoireParser::FunctdeclarationlistContext * /*ctx*/) override { }

  virtual void enterFunctdeclaration(grimoireParser::FunctdeclarationContext * /*ctx*/) override { }
  virtual void exitFunctdeclaration(grimoireParser::FunctdeclarationContext * /*ctx*/) override { }

  virtual void enterBeginfunc(grimoireParser::BeginfuncContext * /*ctx*/) override { }
  virtual void exitBeginfunc(grimoireParser::BeginfuncContext * /*ctx*/) override { }

  virtual void enterEndfunc(grimoireParser::EndfuncContext * /*ctx*/) override { }
  virtual void exitEndfunc(grimoireParser::EndfuncContext * /*ctx*/) override { }

  virtual void enterType(grimoireParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(grimoireParser::TypeContext * /*ctx*/) override { }

  virtual void enterOptionalinit(grimoireParser::OptionalinitContext * /*ctx*/) override { }
  virtual void exitOptionalinit(grimoireParser::OptionalinitContext * /*ctx*/) override { }

  virtual void enterParamlist(grimoireParser::ParamlistContext * /*ctx*/) override { }
  virtual void exitParamlist(grimoireParser::ParamlistContext * /*ctx*/) override { }

  virtual void enterRettype(grimoireParser::RettypeContext * /*ctx*/) override { }
  virtual void exitRettype(grimoireParser::RettypeContext * /*ctx*/) override { }

  virtual void enterParam(grimoireParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(grimoireParser::ParamContext * /*ctx*/) override { }

  virtual void enterStatseq(grimoireParser::StatseqContext * /*ctx*/) override { }
  virtual void exitStatseq(grimoireParser::StatseqContext * /*ctx*/) override { }

  virtual void enterStattail(grimoireParser::StattailContext * /*ctx*/) override { }
  virtual void exitStattail(grimoireParser::StattailContext * /*ctx*/) override { }

  virtual void enterStat(grimoireParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(grimoireParser::StatContext * /*ctx*/) override { }

  virtual void enterAssignstat(grimoireParser::AssignstatContext * /*ctx*/) override { }
  virtual void exitAssignstat(grimoireParser::AssignstatContext * /*ctx*/) override { }

  virtual void enterFunccall(grimoireParser::FunccallContext * /*ctx*/) override { }
  virtual void exitFunccall(grimoireParser::FunccallContext * /*ctx*/) override { }

  virtual void enterCondstat(grimoireParser::CondstatContext * /*ctx*/) override { }
  virtual void exitCondstat(grimoireParser::CondstatContext * /*ctx*/) override { }

  virtual void enterCondstattail(grimoireParser::CondstattailContext * /*ctx*/) override { }
  virtual void exitCondstattail(grimoireParser::CondstattailContext * /*ctx*/) override { }

  virtual void enterIfcond(grimoireParser::IfcondContext * /*ctx*/) override { }
  virtual void exitIfcond(grimoireParser::IfcondContext * /*ctx*/) override { }

  virtual void enterElsecond(grimoireParser::ElsecondContext * /*ctx*/) override { }
  virtual void exitElsecond(grimoireParser::ElsecondContext * /*ctx*/) override { }

  virtual void enterEndcondstat(grimoireParser::EndcondstatContext * /*ctx*/) override { }
  virtual void exitEndcondstat(grimoireParser::EndcondstatContext * /*ctx*/) override { }

  virtual void enterForstat(grimoireParser::ForstatContext * /*ctx*/) override { }
  virtual void exitForstat(grimoireParser::ForstatContext * /*ctx*/) override { }

  virtual void enterEndfor(grimoireParser::EndforContext * /*ctx*/) override { }
  virtual void exitEndfor(grimoireParser::EndforContext * /*ctx*/) override { }

  virtual void enterRetstat(grimoireParser::RetstatContext * /*ctx*/) override { }
  virtual void exitRetstat(grimoireParser::RetstatContext * /*ctx*/) override { }

  virtual void enterExpr(grimoireParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(grimoireParser::ExprContext * /*ctx*/) override { }

  virtual void enterTerm(grimoireParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(grimoireParser::TermContext * /*ctx*/) override { }

  virtual void enterExprlist(grimoireParser::ExprlistContext * /*ctx*/) override { }
  virtual void exitExprlist(grimoireParser::ExprlistContext * /*ctx*/) override { }

  virtual void enterLvaluetail(grimoireParser::LvaluetailContext * /*ctx*/) override { }
  virtual void exitLvaluetail(grimoireParser::LvaluetailContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcppgrim
