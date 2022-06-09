
// Generated from grimoire.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcppgrim {


class  grimoireParser : public antlr4::Parser {
public:
  enum {
    WHITESPACE = 1, NEWLINE = 2, COMMENT = 3, ARRAY = 4, BREAK = 5, DO = 6, 
    IF = 7, ELSE = 8, FOR = 9, FUNC = 10, LET = 11, IN = 12, OF = 13, THEN = 14, 
    TO = 15, FROM = 16, SUMMON = 17, WHILE = 18, ENDIF = 19, BEGIN = 20, 
    END = 21, ENDDO = 22, RET = 23, INT = 24, FLOAT = 25, EMBODIES = 26, 
    ASSIGNMENT = 27, ID = 28, INTLIT = 29, FLOATLIT = 30, COMMA = 31, COLON = 32, 
    SEMICOLON = 33, OPENBRACKET = 34, CLOSEBRACKET = 35, OPENSQBRACKET = 36, 
    CLOSESQBRACKET = 37, OPENBLOCK = 38, CLOSEBLOCK = 39, ADD = 40, SUB = 41, 
    MULT = 42, DIV = 43, EQUAL = 44, NOTEQUAL = 45, LESS = 46, GREAT = 47, 
    LESSEQUAL = 48, GREATEQUAL = 49, AND = 50, OR = 51, NOT = 52
  };

  enum {
    RuleGrimoire = 0, RuleDeclarationsegment = 1, RuleVardeclarationlist = 2, 
    RuleVardeclaration = 3, RuleFunctdeclarationlist = 4, RuleFunctdeclaration = 5, 
    RuleBeginfunc = 6, RuleEndfunc = 7, RuleType = 8, RuleOptionalinit = 9, 
    RuleParamlist = 10, RuleRettype = 11, RuleParam = 12, RuleLocalslist = 13, 
    RuleLocaldeclaration = 14, RuleStatseq = 15, RuleStattail = 16, RuleStat = 17, 
    RuleAssignstat = 18, RuleFunccall = 19, RuleFuncexpr = 20, RuleCondstat = 21, 
    RuleCondstattail = 22, RuleIfcond = 23, RuleElsecond = 24, RuleEndcondstat = 25, 
    RuleForstat = 26, RuleEndfor = 27, RuleRetstat = 28, RuleExpr = 29, 
    RuleTerm = 30, RuleExprlist = 31, RuleLvaluetail = 32
  };

  explicit grimoireParser(antlr4::TokenStream *input);

  grimoireParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~grimoireParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class GrimoireContext;
  class DeclarationsegmentContext;
  class VardeclarationlistContext;
  class VardeclarationContext;
  class FunctdeclarationlistContext;
  class FunctdeclarationContext;
  class BeginfuncContext;
  class EndfuncContext;
  class TypeContext;
  class OptionalinitContext;
  class ParamlistContext;
  class RettypeContext;
  class ParamContext;
  class LocalslistContext;
  class LocaldeclarationContext;
  class StatseqContext;
  class StattailContext;
  class StatContext;
  class AssignstatContext;
  class FunccallContext;
  class FuncexprContext;
  class CondstatContext;
  class CondstattailContext;
  class IfcondContext;
  class ElsecondContext;
  class EndcondstatContext;
  class ForstatContext;
  class EndforContext;
  class RetstatContext;
  class ExprContext;
  class TermContext;
  class ExprlistContext;
  class LvaluetailContext; 

  class  GrimoireContext : public antlr4::ParserRuleContext {
  public:
    GrimoireContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationsegmentContext *declarationsegment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrimoireContext* grimoire();

  class  DeclarationsegmentContext : public antlr4::ParserRuleContext {
  public:
    DeclarationsegmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VardeclarationlistContext *vardeclarationlist();
    FunctdeclarationlistContext *functdeclarationlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationsegmentContext* declarationsegment();

  class  VardeclarationlistContext : public antlr4::ParserRuleContext {
  public:
    VardeclarationlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VardeclarationContext *vardeclaration();
    VardeclarationlistContext *vardeclarationlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VardeclarationlistContext* vardeclarationlist();

  class  VardeclarationContext : public antlr4::ParserRuleContext {
  public:
    VardeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUMMON();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *FROM();
    TypeContext *type();
    OptionalinitContext *optionalinit();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VardeclarationContext* vardeclaration();

  class  FunctdeclarationlistContext : public antlr4::ParserRuleContext {
  public:
    FunctdeclarationlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctdeclarationContext *functdeclaration();
    FunctdeclarationlistContext *functdeclarationlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctdeclarationlistContext* functdeclarationlist();

  class  FunctdeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BeginfuncContext *beginfunc();
    LocalslistContext *localslist();
    StatseqContext *statseq();
    EndfuncContext *endfunc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctdeclarationContext* functdeclaration();

  class  BeginfuncContext : public antlr4::ParserRuleContext {
  public:
    BeginfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *OPENBRACKET();
    ParamlistContext *paramlist();
    antlr4::tree::TerminalNode *CLOSEBRACKET();
    RettypeContext *rettype();
    antlr4::tree::TerminalNode *OPENBLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginfuncContext* beginfunc();

  class  EndfuncContext : public antlr4::ParserRuleContext {
  public:
    EndfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSEBLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndfuncContext* endfunc();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *OPENSQBRACKET();
    antlr4::tree::TerminalNode *INTLIT();
    antlr4::tree::TerminalNode *CLOSESQBRACKET();
    antlr4::tree::TerminalNode *OF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  OptionalinitContext : public antlr4::ParserRuleContext {
  public:
    OptionalinitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EMBODIES();
    antlr4::tree::TerminalNode *INTLIT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionalinitContext* optionalinit();

  class  ParamlistContext : public antlr4::ParserRuleContext {
  public:
    ParamlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamlistContext* paramlist();

  class  RettypeContext : public antlr4::ParserRuleContext {
  public:
    RettypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RettypeContext* rettype();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *FROM();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  LocalslistContext : public antlr4::ParserRuleContext {
  public:
    LocalslistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LocaldeclarationContext *> localdeclaration();
    LocaldeclarationContext* localdeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalslistContext* localslist();

  class  LocaldeclarationContext : public antlr4::ParserRuleContext {
  public:
    LocaldeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUMMON();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *FROM();
    TypeContext *type();
    OptionalinitContext *optionalinit();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocaldeclarationContext* localdeclaration();

  class  StatseqContext : public antlr4::ParserRuleContext {
  public:
    StatseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatContext *stat();
    StattailContext *stattail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatseqContext* statseq();

  class  StattailContext : public antlr4::ParserRuleContext {
  public:
    StattailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatseqContext *statseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StattailContext* stattail();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignstatContext *assignstat();
    FunccallContext *funccall();
    antlr4::tree::TerminalNode *SEMICOLON();
    CondstatContext *condstat();
    ForstatContext *forstat();
    RetstatContext *retstat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatContext* stat();

  class  AssignstatContext : public antlr4::ParserRuleContext {
  public:
    AssignstatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    LvaluetailContext *lvaluetail();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignstatContext* assignstat();

  class  FunccallContext : public antlr4::ParserRuleContext {
  public:
    FunccallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *OPENBRACKET();
    ExprlistContext *exprlist();
    antlr4::tree::TerminalNode *CLOSEBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunccallContext* funccall();

  class  FuncexprContext : public antlr4::ParserRuleContext {
  public:
    FuncexprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *OPENBRACKET();
    ExprlistContext *exprlist();
    antlr4::tree::TerminalNode *CLOSEBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncexprContext* funcexpr();

  class  CondstatContext : public antlr4::ParserRuleContext {
  public:
    CondstatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfcondContext *ifcond();
    StatseqContext *statseq();
    CondstattailContext *condstattail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondstatContext* condstat();

  class  CondstattailContext : public antlr4::ParserRuleContext {
  public:
    CondstattailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EndcondstatContext *endcondstat();
    antlr4::tree::TerminalNode *CLOSEBLOCK();
    ElsecondContext *elsecond();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondstattailContext* condstattail();

  class  IfcondContext : public antlr4::ParserRuleContext {
  public:
    IfcondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    antlr4::tree::TerminalNode *OPENBLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfcondContext* ifcond();

  class  ElsecondContext : public antlr4::ParserRuleContext {
  public:
    ElsecondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *OPENBLOCK();
    StatseqContext *statseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElsecondContext* elsecond();

  class  EndcondstatContext : public antlr4::ParserRuleContext {
  public:
    EndcondstatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSEBLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndcondstatContext* endcondstat();

  class  ForstatContext : public antlr4::ParserRuleContext {
  public:
    ForstatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *OPENBLOCK();
    StatseqContext *statseq();
    EndforContext *endfor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForstatContext* forstat();

  class  EndforContext : public antlr4::ParserRuleContext {
  public:
    EndforContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSEBLOCK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndforContext* endfor();

  class  RetstatContext : public antlr4::ParserRuleContext {
  public:
    RetstatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RET();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetstatContext* retstat();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermContext *term();
    antlr4::tree::TerminalNode *MULT();
    ExprContext *expr();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOTEQUAL();
    antlr4::tree::TerminalNode *GREAT();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *GREATEQUAL();
    antlr4::tree::TerminalNode *LESSEQUAL();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTLIT();
    antlr4::tree::TerminalNode *ID();
    LvaluetailContext *lvaluetail();
    FuncexprContext *funcexpr();
    antlr4::tree::TerminalNode *OPENBRACKET();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSEBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  ExprlistContext : public antlr4::ParserRuleContext {
  public:
    ExprlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprlistContext* exprlist();

  class  LvaluetailContext : public antlr4::ParserRuleContext {
  public:
    LvaluetailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENSQBRACKET();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSESQBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LvaluetailContext* lvaluetail();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcppgrim
