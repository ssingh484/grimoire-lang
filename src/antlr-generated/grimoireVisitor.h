
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

    virtual std::any visitType(grimoireParser::TypeContext *context) = 0;

    virtual std::any visitOptionalinit(grimoireParser::OptionalinitContext *context) = 0;

    virtual std::any visitParamlist(grimoireParser::ParamlistContext *context) = 0;

    virtual std::any visitParamlisttail(grimoireParser::ParamlisttailContext *context) = 0;

    virtual std::any visitRettype(grimoireParser::RettypeContext *context) = 0;

    virtual std::any visitParam(grimoireParser::ParamContext *context) = 0;

    virtual std::any visitStatseq(grimoireParser::StatseqContext *context) = 0;

    virtual std::any visitStattail(grimoireParser::StattailContext *context) = 0;

    virtual std::any visitStat(grimoireParser::StatContext *context) = 0;

    virtual std::any visitIdstat(grimoireParser::IdstatContext *context) = 0;

    virtual std::any visitIdstat2(grimoireParser::Idstat2Context *context) = 0;

    virtual std::any visitCondstat(grimoireParser::CondstatContext *context) = 0;

    virtual std::any visitCondstattail(grimoireParser::CondstattailContext *context) = 0;

    virtual std::any visitExpr(grimoireParser::ExprContext *context) = 0;

    virtual std::any visitLogicoperation1(grimoireParser::Logicoperation1Context *context) = 0;

    virtual std::any visitLogicoperationtail1(grimoireParser::Logicoperationtail1Context *context) = 0;

    virtual std::any visitLogicoperation2(grimoireParser::Logicoperation2Context *context) = 0;

    virtual std::any visitLogicoperationtail2(grimoireParser::Logicoperationtail2Context *context) = 0;

    virtual std::any visitCompoperation1(grimoireParser::Compoperation1Context *context) = 0;

    virtual std::any visitCompoperationtail1(grimoireParser::Compoperationtail1Context *context) = 0;

    virtual std::any visitCompoperation2(grimoireParser::Compoperation2Context *context) = 0;

    virtual std::any visitCompoperationtail2(grimoireParser::Compoperationtail2Context *context) = 0;

    virtual std::any visitCompoperation3(grimoireParser::Compoperation3Context *context) = 0;

    virtual std::any visitCompoperationtail3(grimoireParser::Compoperationtail3Context *context) = 0;

    virtual std::any visitCompoperation4(grimoireParser::Compoperation4Context *context) = 0;

    virtual std::any visitCompoperationtail4(grimoireParser::Compoperationtail4Context *context) = 0;

    virtual std::any visitCompoperation5(grimoireParser::Compoperation5Context *context) = 0;

    virtual std::any visitCompoperationtail5(grimoireParser::Compoperationtail5Context *context) = 0;

    virtual std::any visitCompoperation6(grimoireParser::Compoperation6Context *context) = 0;

    virtual std::any visitCompoperationtail6(grimoireParser::Compoperationtail6Context *context) = 0;

    virtual std::any visitSumoperation1(grimoireParser::Sumoperation1Context *context) = 0;

    virtual std::any visitSumoperationtail1(grimoireParser::Sumoperationtail1Context *context) = 0;

    virtual std::any visitSumoperation2(grimoireParser::Sumoperation2Context *context) = 0;

    virtual std::any visitSumoperationtail2(grimoireParser::Sumoperationtail2Context *context) = 0;

    virtual std::any visitMultoperation1(grimoireParser::Multoperation1Context *context) = 0;

    virtual std::any visitMultoperationtail1(grimoireParser::Multoperationtail1Context *context) = 0;

    virtual std::any visitMultoperation2(grimoireParser::Multoperation2Context *context) = 0;

    virtual std::any visitMultoperationtail2(grimoireParser::Multoperationtail2Context *context) = 0;

    virtual std::any visitTerm(grimoireParser::TermContext *context) = 0;

    virtual std::any visitExprlist(grimoireParser::ExprlistContext *context) = 0;

    virtual std::any visitExprlisttail(grimoireParser::ExprlisttailContext *context) = 0;

    virtual std::any visitLvaluetail(grimoireParser::LvaluetailContext *context) = 0;

    virtual std::any visitAssignstat(grimoireParser::AssignstatContext *context) = 0;


};

}  // namespace antlrcppgrim
