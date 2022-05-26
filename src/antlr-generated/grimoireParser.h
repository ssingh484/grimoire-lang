
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
    GREATEQUAL = 45, AND = 46, OR = 47, ASSIGNMENT = 48
  };

  enum {
    RuleGrimoire = 0, RuleDeclarationsegment = 1, RuleVardeclarationlist = 2, 
    RuleVardeclaration = 3, RuleFunctdeclarationlist = 4, RuleFunctdeclaration = 5, 
    RuleType = 6, RuleOptionalinit = 7, RuleParamlist = 8, RuleParamlisttail = 9, 
    RuleRettype = 10, RuleParam = 11, RuleStatseq = 12, RuleStattail = 13, 
    RuleStat = 14, RuleIdstat = 15, RuleIdstat2 = 16, RuleCondstat = 17, 
    RuleCondstattail = 18, RuleExpr = 19, RuleLogicoperation1 = 20, RuleLogicoperationtail1 = 21, 
    RuleLogicoperation2 = 22, RuleLogicoperationtail2 = 23, RuleCompoperation1 = 24, 
    RuleCompoperationtail1 = 25, RuleCompoperation2 = 26, RuleCompoperationtail2 = 27, 
    RuleCompoperation3 = 28, RuleCompoperationtail3 = 29, RuleCompoperation4 = 30, 
    RuleCompoperationtail4 = 31, RuleCompoperation5 = 32, RuleCompoperationtail5 = 33, 
    RuleCompoperation6 = 34, RuleCompoperationtail6 = 35, RuleSumoperation1 = 36, 
    RuleSumoperationtail1 = 37, RuleSumoperation2 = 38, RuleSumoperationtail2 = 39, 
    RuleMultoperation1 = 40, RuleMultoperationtail1 = 41, RuleMultoperation2 = 42, 
    RuleMultoperationtail2 = 43, RuleTerm = 44, RuleExprlist = 45, RuleExprlisttail = 46, 
    RuleLvaluetail = 47, RuleAssignstat = 48
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
  class TypeContext;
  class OptionalinitContext;
  class ParamlistContext;
  class ParamlisttailContext;
  class RettypeContext;
  class ParamContext;
  class StatseqContext;
  class StattailContext;
  class StatContext;
  class IdstatContext;
  class Idstat2Context;
  class CondstatContext;
  class CondstattailContext;
  class ExprContext;
  class Logicoperation1Context;
  class Logicoperationtail1Context;
  class Logicoperation2Context;
  class Logicoperationtail2Context;
  class Compoperation1Context;
  class Compoperationtail1Context;
  class Compoperation2Context;
  class Compoperationtail2Context;
  class Compoperation3Context;
  class Compoperationtail3Context;
  class Compoperation4Context;
  class Compoperationtail4Context;
  class Compoperation5Context;
  class Compoperationtail5Context;
  class Compoperation6Context;
  class Compoperationtail6Context;
  class Sumoperation1Context;
  class Sumoperationtail1Context;
  class Sumoperation2Context;
  class Sumoperationtail2Context;
  class Multoperation1Context;
  class Multoperationtail1Context;
  class Multoperation2Context;
  class Multoperationtail2Context;
  class TermContext;
  class ExprlistContext;
  class ExprlisttailContext;
  class LvaluetailContext;
  class AssignstatContext; 

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
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *OPENBRACKET();
    ParamlistContext *paramlist();
    antlr4::tree::TerminalNode *CLOSEBRACKET();
    RettypeContext *rettype();
    antlr4::tree::TerminalNode *BEGIN();
    StatseqContext *statseq();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctdeclarationContext* functdeclaration();

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
    ParamContext *param();
    ParamlisttailContext *paramlisttail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamlistContext* paramlist();

  class  ParamlisttailContext : public antlr4::ParserRuleContext {
  public:
    ParamlisttailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    ParamContext *param();
    ParamlisttailContext *paramlisttail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamlisttailContext* paramlisttail();

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
    antlr4::tree::TerminalNode *ID();
    IdstatContext *idstat();
    CondstatContext *condstat();
    antlr4::tree::TerminalNode *WHILE();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *DO();
    StatseqContext *statseq();
    antlr4::tree::TerminalNode *ENDDO();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *RET();
    antlr4::tree::TerminalNode *LET();
    DeclarationsegmentContext *declarationsegment();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatContext* stat();

  class  IdstatContext : public antlr4::ParserRuleContext {
  public:
    IdstatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignstatContext *assignstat();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    Idstat2Context *idstat2();
    antlr4::tree::TerminalNode *OPENBRACKET();
    ExprlistContext *exprlist();
    antlr4::tree::TerminalNode *CLOSEBRACKET();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdstatContext* idstat();

  class  Idstat2Context : public antlr4::ParserRuleContext {
  public:
    Idstat2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Idstat2Context* idstat2();

  class  CondstatContext : public antlr4::ParserRuleContext {
  public:
    CondstatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    antlr4::tree::TerminalNode *THEN();
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
    antlr4::tree::TerminalNode *ENDIF();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *ELSE();
    StatseqContext *statseq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondstattailContext* condstattail();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logicoperation1Context *logicoperation1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  Logicoperation1Context : public antlr4::ParserRuleContext {
  public:
    Logicoperation1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Logicoperation2Context *logicoperation2();
    Logicoperationtail1Context *logicoperationtail1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logicoperation1Context* logicoperation1();

  class  Logicoperationtail1Context : public antlr4::ParserRuleContext {
  public:
    Logicoperationtail1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    Logicoperation1Context *logicoperation1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logicoperationtail1Context* logicoperationtail1();

  class  Logicoperation2Context : public antlr4::ParserRuleContext {
  public:
    Logicoperation2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compoperation1Context *compoperation1();
    Logicoperationtail2Context *logicoperationtail2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logicoperation2Context* logicoperation2();

  class  Logicoperationtail2Context : public antlr4::ParserRuleContext {
  public:
    Logicoperationtail2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    Logicoperation2Context *logicoperation2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Logicoperationtail2Context* logicoperationtail2();

  class  Compoperation1Context : public antlr4::ParserRuleContext {
  public:
    Compoperation1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compoperation2Context *compoperation2();
    Compoperationtail1Context *compoperationtail1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperation1Context* compoperation1();

  class  Compoperationtail1Context : public antlr4::ParserRuleContext {
  public:
    Compoperationtail1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESSEQUAL();
    Compoperation1Context *compoperation1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperationtail1Context* compoperationtail1();

  class  Compoperation2Context : public antlr4::ParserRuleContext {
  public:
    Compoperation2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compoperation3Context *compoperation3();
    Compoperationtail2Context *compoperationtail2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperation2Context* compoperation2();

  class  Compoperationtail2Context : public antlr4::ParserRuleContext {
  public:
    Compoperationtail2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GREATEQUAL();
    Compoperation2Context *compoperation2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperationtail2Context* compoperationtail2();

  class  Compoperation3Context : public antlr4::ParserRuleContext {
  public:
    Compoperation3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compoperation4Context *compoperation4();
    Compoperationtail3Context *compoperationtail3();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperation3Context* compoperation3();

  class  Compoperationtail3Context : public antlr4::ParserRuleContext {
  public:
    Compoperationtail3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LESS();
    Compoperation3Context *compoperation3();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperationtail3Context* compoperationtail3();

  class  Compoperation4Context : public antlr4::ParserRuleContext {
  public:
    Compoperation4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compoperation5Context *compoperation5();
    Compoperationtail4Context *compoperationtail4();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperation4Context* compoperation4();

  class  Compoperationtail4Context : public antlr4::ParserRuleContext {
  public:
    Compoperationtail4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GREAT();
    Compoperation4Context *compoperation4();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperationtail4Context* compoperationtail4();

  class  Compoperation5Context : public antlr4::ParserRuleContext {
  public:
    Compoperation5Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compoperation6Context *compoperation6();
    Compoperationtail5Context *compoperationtail5();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperation5Context* compoperation5();

  class  Compoperationtail5Context : public antlr4::ParserRuleContext {
  public:
    Compoperationtail5Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOTEQUAL();
    Compoperation5Context *compoperation5();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperationtail5Context* compoperationtail5();

  class  Compoperation6Context : public antlr4::ParserRuleContext {
  public:
    Compoperation6Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sumoperation1Context *sumoperation1();
    Compoperationtail6Context *compoperationtail6();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperation6Context* compoperation6();

  class  Compoperationtail6Context : public antlr4::ParserRuleContext {
  public:
    Compoperationtail6Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    Compoperation6Context *compoperation6();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compoperationtail6Context* compoperationtail6();

  class  Sumoperation1Context : public antlr4::ParserRuleContext {
  public:
    Sumoperation1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sumoperation2Context *sumoperation2();
    Sumoperationtail1Context *sumoperationtail1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sumoperation1Context* sumoperation1();

  class  Sumoperationtail1Context : public antlr4::ParserRuleContext {
  public:
    Sumoperationtail1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SUB();
    Sumoperation1Context *sumoperation1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sumoperationtail1Context* sumoperationtail1();

  class  Sumoperation2Context : public antlr4::ParserRuleContext {
  public:
    Sumoperation2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Multoperation1Context *multoperation1();
    Sumoperationtail2Context *sumoperationtail2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sumoperation2Context* sumoperation2();

  class  Sumoperationtail2Context : public antlr4::ParserRuleContext {
  public:
    Sumoperationtail2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    Sumoperation2Context *sumoperation2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sumoperationtail2Context* sumoperationtail2();

  class  Multoperation1Context : public antlr4::ParserRuleContext {
  public:
    Multoperation1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Multoperation2Context *multoperation2();
    Multoperationtail1Context *multoperationtail1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multoperation1Context* multoperation1();

  class  Multoperationtail1Context : public antlr4::ParserRuleContext {
  public:
    Multoperationtail1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIV();
    Multoperation1Context *multoperation1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multoperationtail1Context* multoperationtail1();

  class  Multoperation2Context : public antlr4::ParserRuleContext {
  public:
    Multoperation2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TermContext *term();
    Multoperationtail2Context *multoperationtail2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multoperation2Context* multoperation2();

  class  Multoperationtail2Context : public antlr4::ParserRuleContext {
  public:
    Multoperationtail2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULT();
    Multoperation2Context *multoperation2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multoperationtail2Context* multoperationtail2();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTLIT();
    antlr4::tree::TerminalNode *ID();
    LvaluetailContext *lvaluetail();
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
    ExprContext *expr();
    ExprlisttailContext *exprlisttail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprlistContext* exprlist();

  class  ExprlisttailContext : public antlr4::ParserRuleContext {
  public:
    ExprlisttailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    ExprContext *expr();
    ExprlisttailContext *exprlisttail();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprlisttailContext* exprlisttail();

  class  LvaluetailContext : public antlr4::ParserRuleContext {
  public:
    LvaluetailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENSQBRACKET();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSESQBRACKET();
    antlr4::tree::TerminalNode *OPENBRACKET();
    ExprlistContext *exprlist();
    antlr4::tree::TerminalNode *CLOSEBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LvaluetailContext* lvaluetail();

  class  AssignstatContext : public antlr4::ParserRuleContext {
  public:
    AssignstatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENSQBRACKET();
    ExprContext *expr();
    antlr4::tree::TerminalNode *CLOSESQBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignstatContext* assignstat();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcppgrim
