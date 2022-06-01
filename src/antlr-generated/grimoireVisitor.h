
// Generated from grimoire.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "grimoireParser.h"


namespace antlrcppgrim {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by grimoireParser.
 */
class  grimoireVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by grimoireParser.
   */
    virtual std::any visitGrimoire(grimoireParser::GrimoireContext *context) = 0;

    virtual std::any visitDeclarationsegment(grimoireParser::DeclarationsegmentContext *context) = 0;

    virtual std::any visitVardeclarationlist(grimoireParser::VardeclarationlistContext *context) = 0;

    virtual std::any visitVardeclaration(grimoireParser::VardeclarationContext *context) = 0;

    virtual std::any visitFunctdeclarationlist(grimoireParser::FunctdeclarationlistContext *context) = 0;

    virtual std::any visitFunctdeclaration(grimoireParser::FunctdeclarationContext *context) = 0;

    virtual std::any visitBeginfunc(grimoireParser::BeginfuncContext *context) = 0;

    virtual std::any visitEndfunc(grimoireParser::EndfuncContext *context) = 0;

    virtual std::any visitType(grimoireParser::TypeContext *context) = 0;

    virtual std::any visitOptionalinit(grimoireParser::OptionalinitContext *context) = 0;

    virtual std::any visitParamlist(grimoireParser::ParamlistContext *context) = 0;

    virtual std::any visitRettype(grimoireParser::RettypeContext *context) = 0;

    virtual std::any visitParam(grimoireParser::ParamContext *context) = 0;

    virtual std::any visitStatseq(grimoireParser::StatseqContext *context) = 0;

    virtual std::any visitStattail(grimoireParser::StattailContext *context) = 0;

    virtual std::any visitStat(grimoireParser::StatContext *context) = 0;

    virtual std::any visitAssignstat(grimoireParser::AssignstatContext *context) = 0;

    virtual std::any visitFunccall(grimoireParser::FunccallContext *context) = 0;

    virtual std::any visitFuncexpr(grimoireParser::FuncexprContext *context) = 0;

    virtual std::any visitCondstat(grimoireParser::CondstatContext *context) = 0;

    virtual std::any visitCondstattail(grimoireParser::CondstattailContext *context) = 0;

    virtual std::any visitIfcond(grimoireParser::IfcondContext *context) = 0;

    virtual std::any visitElsecond(grimoireParser::ElsecondContext *context) = 0;

    virtual std::any visitEndcondstat(grimoireParser::EndcondstatContext *context) = 0;

    virtual std::any visitForstat(grimoireParser::ForstatContext *context) = 0;

    virtual std::any visitEndfor(grimoireParser::EndforContext *context) = 0;

    virtual std::any visitRetstat(grimoireParser::RetstatContext *context) = 0;

    virtual std::any visitExpr(grimoireParser::ExprContext *context) = 0;

    virtual std::any visitTerm(grimoireParser::TermContext *context) = 0;

    virtual std::any visitExprlist(grimoireParser::ExprlistContext *context) = 0;

    virtual std::any visitLvaluetail(grimoireParser::LvaluetailContext *context) = 0;


};

}  // namespace antlrcppgrim
