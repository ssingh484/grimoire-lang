
// Generated from grimoire.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcppgrim {


class  grimoireParser : public antlr4::Parser {
public:
  enum {
    WHITESPACE = 1, NEWLINE = 2, COMMENT = 3, MAIN = 4, ARRAY = 5, BREAK = 6, 
    DO = 7, IF = 8, ELSE = 9, FOR = 10, FUNC = 11, LET = 12, IN = 13, OF = 14, 
    THEN = 15, TO = 16, VAR = 17, WHILE = 18, ENDIF = 19, BEGIN = 20, END = 21, 
    ENDDO = 22, RET = 23, INT = 24, FLOAT = 25, ID = 26, INTLIT = 27, FLOATLIT = 28, 
    COMMA = 29, COLON = 30, SEMICOLON = 31, OPENBRACKET = 32, CLOSEBRACKET = 33, 
    OPENSQBRACKET = 34, CLOSESQBRACKET = 35, ADD = 36, SUB = 37, MULT = 38, 
    DIV = 39, EQUAL = 40, NOTEQUAL = 41, LESS = 42, GREAT = 43, LESSEQUAL = 44, 
    GREATEQUAL = 45, AND = 46, OR = 47, NOT = 48, ASSIGNMENT = 49
  };

  enum {
    RuleGrimoire = 0, RuleDeclarationsegment = 1, RuleVardeclarationlist = 2, 
    RuleVardeclaration = 3, RuleFunctdeclarationlist = 4, RuleFunctdeclaration = 5, 
    RuleBeginfunc = 6, RuleEndfunc = 7, RuleType = 8, RuleOptionalinit = 9, 
    RuleParamlist = 10, RuleRettype = 11, RuleParam = 12, RuleStatseq = 13, 
    RuleStattail = 14, RuleStat = 15, RuleAssignstat = 16, RuleFunccall = 17, 
    RuleCondstat = 18, RuleCondstattail = 19, RuleIfcond = 20, RuleElsecond = 21, 
    RuleEndcondstat = 22, RuleForstat = 23, RuleEndfor = 24, RuleRetstat = 25, 
    RuleExpr = 26, RuleTerm = 27, RuleExprlist = 28, RuleLvaluetail = 29
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
  class StatseqContext;
  class StattailContext;
  class StatContext;
  class AssignstatContext;
  class FunccallContext;
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
    antlr4::tree::TerminalNode *MAIN();
    antlr4::tree::TerminalNode *LET();
    DeclarationsegmentContext *declarationsegment();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *BEGIN();
    StatseqContext *statseq();
    antlr4::tree::TerminalNode *END();

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
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COLON();
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
    antlr4::tree::TerminalNode *BEGIN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginfuncContext* beginfunc();

  class  EndfuncContext : public antlr4::ParserRuleContext {
  public:
    EndfuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();

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
    antlr4::tree::TerminalNode *ASSIGNMENT();
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
    antlr4::tree::TerminalNode *COLON();
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
    antlr4::tree::TerminalNode *COLON();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

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
    antlr4::tree::TerminalNode *THEN();

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
    antlr4::tree::TerminalNode *ENDIF();
    antlr4::tree::TerminalNode *SEMICOLON();

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
    antlr4::tree::TerminalNode *DO();
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
    antlr4::tree::TerminalNode *ENDDO();
    antlr4::tree::TerminalNode *SEMICOLON();

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
    FunccallContext *funccall();
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
