
// Generated from grimoire.g4 by ANTLR 4.10.1


#include "grimoireListener.h"
#include "grimoireVisitor.h"

#include "grimoireParser.h"


using namespace antlrcpp;
using namespace antlrcppgrim;

using namespace antlr4;

namespace {

struct GrimoireParserStaticData final {
  GrimoireParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrimoireParserStaticData(const GrimoireParserStaticData&) = delete;
  GrimoireParserStaticData(GrimoireParserStaticData&&) = delete;
  GrimoireParserStaticData& operator=(const GrimoireParserStaticData&) = delete;
  GrimoireParserStaticData& operator=(GrimoireParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag grimoireParserOnceFlag;
GrimoireParserStaticData *grimoireParserStaticData = nullptr;

void grimoireParserInitialize() {
  assert(grimoireParserStaticData == nullptr);
  auto staticData = std::make_unique<GrimoireParserStaticData>(
    std::vector<std::string>{
      "grimoire", "declarationsegment", "vardeclarationlist", "vardeclaration", 
      "functdeclarationlist", "functdeclaration", "beginfunc", "endfunc", 
      "type", "optionalinit", "paramlist", "rettype", "param", "statseq", 
      "stattail", "stat", "assignstat", "funccall", "funcexpr", "condstat", 
      "condstattail", "ifcond", "elsecond", "endcondstat", "forstat", "endfor", 
      "retstat", "expr", "term", "exprlist", "lvaluetail"
    },
    std::vector<std::string>{
      "", "", "", "", "'array'", "'break'", "'do'", "'if'", "'else'", "'for'", 
      "'spell'", "'let'", "'in'", "'of'", "'then'", "'to'", "'from'", "'summon'", 
      "'while'", "'endif'", "'begin'", "'end'", "'enddo'", "'return'", "'int'", 
      "'float'", "'embodies'", "'becomes'", "", "", "", "','", "':'", "';'", 
      "'('", "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", 
      "'=='", "'=/='", "'<'", "'>'", "'<='", "'>='", "'&'", "'|'", "'~'"
    },
    std::vector<std::string>{
      "", "WHITESPACE", "NEWLINE", "COMMENT", "ARRAY", "BREAK", "DO", "IF", 
      "ELSE", "FOR", "FUNC", "LET", "IN", "OF", "THEN", "TO", "FROM", "SUMMON", 
      "WHILE", "ENDIF", "BEGIN", "END", "ENDDO", "RET", "INT", "FLOAT", 
      "EMBODIES", "ASSIGNMENT", "ID", "INTLIT", "FLOATLIT", "COMMA", "COLON", 
      "SEMICOLON", "OPENBRACKET", "CLOSEBRACKET", "OPENSQBRACKET", "CLOSESQBRACKET", 
      "OPENBLOCK", "CLOSEBLOCK", "ADD", "SUB", "MULT", "DIV", "EQUAL", "NOTEQUAL", 
      "LESS", "GREAT", "LESSEQUAL", "GREATEQUAL", "AND", "OR", "NOT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,52,283,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,3,2,72,8,2,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,3,4,85,8,4,1,5,1,5,1,5,1,
  	5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,
  	3,8,108,8,8,1,9,1,9,1,9,3,9,113,8,9,1,10,1,10,1,10,5,10,118,8,10,10,10,
  	12,10,121,9,10,3,10,123,8,10,1,11,1,11,1,11,3,11,128,8,11,1,12,1,12,1,
  	12,1,12,1,13,1,13,1,13,1,14,1,14,3,14,139,8,14,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,3,15,148,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,
  	17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,20,1,20,1,
  	20,1,20,1,20,3,20,175,8,20,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,
  	23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,
  	26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,
  	27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,
  	27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,
  	27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,3,27,254,
  	8,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,264,8,28,1,29,1,29,
  	1,29,5,29,269,8,29,10,29,12,29,272,9,29,3,29,274,8,29,1,30,1,30,1,30,
  	1,30,1,30,3,30,281,8,30,1,30,0,0,31,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,0,0,283,0,62,1,
  	0,0,0,2,64,1,0,0,0,4,71,1,0,0,0,6,73,1,0,0,0,8,84,1,0,0,0,10,86,1,0,0,
  	0,12,90,1,0,0,0,14,98,1,0,0,0,16,107,1,0,0,0,18,112,1,0,0,0,20,122,1,
  	0,0,0,22,127,1,0,0,0,24,129,1,0,0,0,26,133,1,0,0,0,28,138,1,0,0,0,30,
  	147,1,0,0,0,32,149,1,0,0,0,34,155,1,0,0,0,36,160,1,0,0,0,38,165,1,0,0,
  	0,40,174,1,0,0,0,42,176,1,0,0,0,44,180,1,0,0,0,46,184,1,0,0,0,48,186,
  	1,0,0,0,50,196,1,0,0,0,52,198,1,0,0,0,54,253,1,0,0,0,56,263,1,0,0,0,58,
  	273,1,0,0,0,60,280,1,0,0,0,62,63,3,2,1,0,63,1,1,0,0,0,64,65,3,4,2,0,65,
  	66,3,8,4,0,66,3,1,0,0,0,67,72,1,0,0,0,68,69,3,6,3,0,69,70,3,4,2,0,70,
  	72,1,0,0,0,71,67,1,0,0,0,71,68,1,0,0,0,72,5,1,0,0,0,73,74,5,17,0,0,74,
  	75,5,28,0,0,75,76,5,16,0,0,76,77,3,16,8,0,77,78,3,18,9,0,78,79,5,33,0,
  	0,79,7,1,0,0,0,80,85,1,0,0,0,81,82,3,10,5,0,82,83,3,8,4,0,83,85,1,0,0,
  	0,84,80,1,0,0,0,84,81,1,0,0,0,85,9,1,0,0,0,86,87,3,12,6,0,87,88,3,26,
  	13,0,88,89,3,14,7,0,89,11,1,0,0,0,90,91,5,10,0,0,91,92,5,28,0,0,92,93,
  	5,34,0,0,93,94,3,20,10,0,94,95,5,35,0,0,95,96,3,22,11,0,96,97,5,38,0,
  	0,97,13,1,0,0,0,98,99,5,39,0,0,99,15,1,0,0,0,100,108,5,24,0,0,101,102,
  	5,4,0,0,102,103,5,36,0,0,103,104,5,29,0,0,104,105,5,37,0,0,105,106,5,
  	13,0,0,106,108,5,24,0,0,107,100,1,0,0,0,107,101,1,0,0,0,108,17,1,0,0,
  	0,109,113,1,0,0,0,110,111,5,26,0,0,111,113,5,29,0,0,112,109,1,0,0,0,112,
  	110,1,0,0,0,113,19,1,0,0,0,114,119,3,24,12,0,115,116,5,31,0,0,116,118,
  	3,24,12,0,117,115,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,
  	0,0,120,123,1,0,0,0,121,119,1,0,0,0,122,114,1,0,0,0,122,123,1,0,0,0,123,
  	21,1,0,0,0,124,128,1,0,0,0,125,126,5,16,0,0,126,128,3,16,8,0,127,124,
  	1,0,0,0,127,125,1,0,0,0,128,23,1,0,0,0,129,130,5,28,0,0,130,131,5,16,
  	0,0,131,132,3,16,8,0,132,25,1,0,0,0,133,134,3,30,15,0,134,135,3,28,14,
  	0,135,27,1,0,0,0,136,139,1,0,0,0,137,139,3,26,13,0,138,136,1,0,0,0,138,
  	137,1,0,0,0,139,29,1,0,0,0,140,148,3,32,16,0,141,142,3,34,17,0,142,143,
  	5,33,0,0,143,148,1,0,0,0,144,148,3,38,19,0,145,148,3,48,24,0,146,148,
  	3,52,26,0,147,140,1,0,0,0,147,141,1,0,0,0,147,144,1,0,0,0,147,145,1,0,
  	0,0,147,146,1,0,0,0,148,31,1,0,0,0,149,150,5,28,0,0,150,151,3,60,30,0,
  	151,152,5,27,0,0,152,153,3,54,27,0,153,154,5,33,0,0,154,33,1,0,0,0,155,
  	156,5,28,0,0,156,157,5,34,0,0,157,158,3,58,29,0,158,159,5,35,0,0,159,
  	35,1,0,0,0,160,161,5,28,0,0,161,162,5,34,0,0,162,163,3,58,29,0,163,164,
  	5,35,0,0,164,37,1,0,0,0,165,166,3,42,21,0,166,167,3,26,13,0,167,168,3,
  	40,20,0,168,39,1,0,0,0,169,175,3,46,23,0,170,171,5,39,0,0,171,172,3,44,
  	22,0,172,173,3,46,23,0,173,175,1,0,0,0,174,169,1,0,0,0,174,170,1,0,0,
  	0,175,41,1,0,0,0,176,177,5,7,0,0,177,178,3,54,27,0,178,179,5,38,0,0,179,
  	43,1,0,0,0,180,181,5,8,0,0,181,182,5,38,0,0,182,183,3,26,13,0,183,45,
  	1,0,0,0,184,185,5,39,0,0,185,47,1,0,0,0,186,187,5,9,0,0,187,188,5,28,
  	0,0,188,189,5,27,0,0,189,190,3,54,27,0,190,191,5,15,0,0,191,192,3,54,
  	27,0,192,193,5,38,0,0,193,194,3,26,13,0,194,195,3,50,25,0,195,49,1,0,
  	0,0,196,197,5,39,0,0,197,51,1,0,0,0,198,199,5,23,0,0,199,200,3,54,27,
  	0,200,201,5,33,0,0,201,53,1,0,0,0,202,203,3,56,28,0,203,204,5,42,0,0,
  	204,205,3,54,27,0,205,254,1,0,0,0,206,207,3,56,28,0,207,208,5,43,0,0,
  	208,209,3,54,27,0,209,254,1,0,0,0,210,211,3,56,28,0,211,212,5,40,0,0,
  	212,213,3,54,27,0,213,254,1,0,0,0,214,215,3,56,28,0,215,216,5,41,0,0,
  	216,217,3,54,27,0,217,254,1,0,0,0,218,219,3,56,28,0,219,220,5,44,0,0,
  	220,221,3,54,27,0,221,254,1,0,0,0,222,223,3,56,28,0,223,224,5,45,0,0,
  	224,225,3,54,27,0,225,254,1,0,0,0,226,227,3,56,28,0,227,228,5,47,0,0,
  	228,229,3,54,27,0,229,254,1,0,0,0,230,231,3,56,28,0,231,232,5,46,0,0,
  	232,233,3,54,27,0,233,254,1,0,0,0,234,235,3,56,28,0,235,236,5,49,0,0,
  	236,237,3,54,27,0,237,254,1,0,0,0,238,239,3,56,28,0,239,240,5,48,0,0,
  	240,241,3,54,27,0,241,254,1,0,0,0,242,243,3,56,28,0,243,244,5,50,0,0,
  	244,245,3,54,27,0,245,254,1,0,0,0,246,247,3,56,28,0,247,248,5,51,0,0,
  	248,249,3,54,27,0,249,254,1,0,0,0,250,251,5,52,0,0,251,254,3,54,27,0,
  	252,254,3,56,28,0,253,202,1,0,0,0,253,206,1,0,0,0,253,210,1,0,0,0,253,
  	214,1,0,0,0,253,218,1,0,0,0,253,222,1,0,0,0,253,226,1,0,0,0,253,230,1,
  	0,0,0,253,234,1,0,0,0,253,238,1,0,0,0,253,242,1,0,0,0,253,246,1,0,0,0,
  	253,250,1,0,0,0,253,252,1,0,0,0,254,55,1,0,0,0,255,264,5,29,0,0,256,257,
  	5,28,0,0,257,264,3,60,30,0,258,264,3,36,18,0,259,260,5,34,0,0,260,261,
  	3,54,27,0,261,262,5,35,0,0,262,264,1,0,0,0,263,255,1,0,0,0,263,256,1,
  	0,0,0,263,258,1,0,0,0,263,259,1,0,0,0,264,57,1,0,0,0,265,270,3,54,27,
  	0,266,267,5,31,0,0,267,269,3,54,27,0,268,266,1,0,0,0,269,272,1,0,0,0,
  	270,268,1,0,0,0,270,271,1,0,0,0,271,274,1,0,0,0,272,270,1,0,0,0,273,265,
  	1,0,0,0,273,274,1,0,0,0,274,59,1,0,0,0,275,276,5,36,0,0,276,277,3,54,
  	27,0,277,278,5,37,0,0,278,281,1,0,0,0,279,281,1,0,0,0,280,275,1,0,0,0,
  	280,279,1,0,0,0,281,61,1,0,0,0,15,71,84,107,112,119,122,127,138,147,174,
  	253,263,270,273,280
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grimoireParserStaticData = staticData.release();
}

}

grimoireParser::grimoireParser(TokenStream *input) : grimoireParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

grimoireParser::grimoireParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  grimoireParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *grimoireParserStaticData->atn, grimoireParserStaticData->decisionToDFA, grimoireParserStaticData->sharedContextCache, options);
}

grimoireParser::~grimoireParser() {
  delete _interpreter;
}

const atn::ATN& grimoireParser::getATN() const {
  return *grimoireParserStaticData->atn;
}

std::string grimoireParser::getGrammarFileName() const {
  return "grimoire.g4";
}

const std::vector<std::string>& grimoireParser::getRuleNames() const {
  return grimoireParserStaticData->ruleNames;
}

const dfa::Vocabulary& grimoireParser::getVocabulary() const {
  return grimoireParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView grimoireParser::getSerializedATN() const {
  return grimoireParserStaticData->serializedATN;
}


//----------------- GrimoireContext ------------------------------------------------------------------

grimoireParser::GrimoireContext::GrimoireContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::DeclarationsegmentContext* grimoireParser::GrimoireContext::declarationsegment() {
  return getRuleContext<grimoireParser::DeclarationsegmentContext>(0);
}


size_t grimoireParser::GrimoireContext::getRuleIndex() const {
  return grimoireParser::RuleGrimoire;
}

void grimoireParser::GrimoireContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGrimoire(this);
}

void grimoireParser::GrimoireContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGrimoire(this);
}


std::any grimoireParser::GrimoireContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitGrimoire(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::GrimoireContext* grimoireParser::grimoire() {
  GrimoireContext *_localctx = _tracker.createInstance<GrimoireContext>(_ctx, getState());
  enterRule(_localctx, 0, grimoireParser::RuleGrimoire);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    declarationsegment();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsegmentContext ------------------------------------------------------------------

grimoireParser::DeclarationsegmentContext::DeclarationsegmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::VardeclarationlistContext* grimoireParser::DeclarationsegmentContext::vardeclarationlist() {
  return getRuleContext<grimoireParser::VardeclarationlistContext>(0);
}

grimoireParser::FunctdeclarationlistContext* grimoireParser::DeclarationsegmentContext::functdeclarationlist() {
  return getRuleContext<grimoireParser::FunctdeclarationlistContext>(0);
}


size_t grimoireParser::DeclarationsegmentContext::getRuleIndex() const {
  return grimoireParser::RuleDeclarationsegment;
}

void grimoireParser::DeclarationsegmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationsegment(this);
}

void grimoireParser::DeclarationsegmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationsegment(this);
}


std::any grimoireParser::DeclarationsegmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitDeclarationsegment(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::DeclarationsegmentContext* grimoireParser::declarationsegment() {
  DeclarationsegmentContext *_localctx = _tracker.createInstance<DeclarationsegmentContext>(_ctx, getState());
  enterRule(_localctx, 2, grimoireParser::RuleDeclarationsegment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    vardeclarationlist();
    setState(65);
    functdeclarationlist();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VardeclarationlistContext ------------------------------------------------------------------

grimoireParser::VardeclarationlistContext::VardeclarationlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::VardeclarationContext* grimoireParser::VardeclarationlistContext::vardeclaration() {
  return getRuleContext<grimoireParser::VardeclarationContext>(0);
}

grimoireParser::VardeclarationlistContext* grimoireParser::VardeclarationlistContext::vardeclarationlist() {
  return getRuleContext<grimoireParser::VardeclarationlistContext>(0);
}


size_t grimoireParser::VardeclarationlistContext::getRuleIndex() const {
  return grimoireParser::RuleVardeclarationlist;
}

void grimoireParser::VardeclarationlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVardeclarationlist(this);
}

void grimoireParser::VardeclarationlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVardeclarationlist(this);
}


std::any grimoireParser::VardeclarationlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitVardeclarationlist(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::VardeclarationlistContext* grimoireParser::vardeclarationlist() {
  VardeclarationlistContext *_localctx = _tracker.createInstance<VardeclarationlistContext>(_ctx, getState());
  enterRule(_localctx, 4, grimoireParser::RuleVardeclarationlist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::EOF:
      case grimoireParser::FUNC: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::SUMMON: {
        enterOuterAlt(_localctx, 2);
        setState(68);
        vardeclaration();
        setState(69);
        vardeclarationlist();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VardeclarationContext ------------------------------------------------------------------

grimoireParser::VardeclarationContext::VardeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::VardeclarationContext::SUMMON() {
  return getToken(grimoireParser::SUMMON, 0);
}

tree::TerminalNode* grimoireParser::VardeclarationContext::ID() {
  return getToken(grimoireParser::ID, 0);
}

tree::TerminalNode* grimoireParser::VardeclarationContext::FROM() {
  return getToken(grimoireParser::FROM, 0);
}

grimoireParser::TypeContext* grimoireParser::VardeclarationContext::type() {
  return getRuleContext<grimoireParser::TypeContext>(0);
}

grimoireParser::OptionalinitContext* grimoireParser::VardeclarationContext::optionalinit() {
  return getRuleContext<grimoireParser::OptionalinitContext>(0);
}

tree::TerminalNode* grimoireParser::VardeclarationContext::SEMICOLON() {
  return getToken(grimoireParser::SEMICOLON, 0);
}


size_t grimoireParser::VardeclarationContext::getRuleIndex() const {
  return grimoireParser::RuleVardeclaration;
}

void grimoireParser::VardeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVardeclaration(this);
}

void grimoireParser::VardeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVardeclaration(this);
}


std::any grimoireParser::VardeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitVardeclaration(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::VardeclarationContext* grimoireParser::vardeclaration() {
  VardeclarationContext *_localctx = _tracker.createInstance<VardeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, grimoireParser::RuleVardeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(grimoireParser::SUMMON);
    setState(74);
    match(grimoireParser::ID);
    setState(75);
    match(grimoireParser::FROM);
    setState(76);
    type();
    setState(77);
    optionalinit();
    setState(78);
    match(grimoireParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctdeclarationlistContext ------------------------------------------------------------------

grimoireParser::FunctdeclarationlistContext::FunctdeclarationlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::FunctdeclarationContext* grimoireParser::FunctdeclarationlistContext::functdeclaration() {
  return getRuleContext<grimoireParser::FunctdeclarationContext>(0);
}

grimoireParser::FunctdeclarationlistContext* grimoireParser::FunctdeclarationlistContext::functdeclarationlist() {
  return getRuleContext<grimoireParser::FunctdeclarationlistContext>(0);
}


size_t grimoireParser::FunctdeclarationlistContext::getRuleIndex() const {
  return grimoireParser::RuleFunctdeclarationlist;
}

void grimoireParser::FunctdeclarationlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctdeclarationlist(this);
}

void grimoireParser::FunctdeclarationlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctdeclarationlist(this);
}


std::any grimoireParser::FunctdeclarationlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitFunctdeclarationlist(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::FunctdeclarationlistContext* grimoireParser::functdeclarationlist() {
  FunctdeclarationlistContext *_localctx = _tracker.createInstance<FunctdeclarationlistContext>(_ctx, getState());
  enterRule(_localctx, 8, grimoireParser::RuleFunctdeclarationlist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::EOF: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::FUNC: {
        enterOuterAlt(_localctx, 2);
        setState(81);
        functdeclaration();
        setState(82);
        functdeclarationlist();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctdeclarationContext ------------------------------------------------------------------

grimoireParser::FunctdeclarationContext::FunctdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::BeginfuncContext* grimoireParser::FunctdeclarationContext::beginfunc() {
  return getRuleContext<grimoireParser::BeginfuncContext>(0);
}

grimoireParser::StatseqContext* grimoireParser::FunctdeclarationContext::statseq() {
  return getRuleContext<grimoireParser::StatseqContext>(0);
}

grimoireParser::EndfuncContext* grimoireParser::FunctdeclarationContext::endfunc() {
  return getRuleContext<grimoireParser::EndfuncContext>(0);
}


size_t grimoireParser::FunctdeclarationContext::getRuleIndex() const {
  return grimoireParser::RuleFunctdeclaration;
}

void grimoireParser::FunctdeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctdeclaration(this);
}

void grimoireParser::FunctdeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctdeclaration(this);
}


std::any grimoireParser::FunctdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitFunctdeclaration(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::FunctdeclarationContext* grimoireParser::functdeclaration() {
  FunctdeclarationContext *_localctx = _tracker.createInstance<FunctdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, grimoireParser::RuleFunctdeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    beginfunc();
    setState(87);
    statseq();
    setState(88);
    endfunc();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BeginfuncContext ------------------------------------------------------------------

grimoireParser::BeginfuncContext::BeginfuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::BeginfuncContext::FUNC() {
  return getToken(grimoireParser::FUNC, 0);
}

tree::TerminalNode* grimoireParser::BeginfuncContext::ID() {
  return getToken(grimoireParser::ID, 0);
}

tree::TerminalNode* grimoireParser::BeginfuncContext::OPENBRACKET() {
  return getToken(grimoireParser::OPENBRACKET, 0);
}

grimoireParser::ParamlistContext* grimoireParser::BeginfuncContext::paramlist() {
  return getRuleContext<grimoireParser::ParamlistContext>(0);
}

tree::TerminalNode* grimoireParser::BeginfuncContext::CLOSEBRACKET() {
  return getToken(grimoireParser::CLOSEBRACKET, 0);
}

grimoireParser::RettypeContext* grimoireParser::BeginfuncContext::rettype() {
  return getRuleContext<grimoireParser::RettypeContext>(0);
}

tree::TerminalNode* grimoireParser::BeginfuncContext::OPENBLOCK() {
  return getToken(grimoireParser::OPENBLOCK, 0);
}


size_t grimoireParser::BeginfuncContext::getRuleIndex() const {
  return grimoireParser::RuleBeginfunc;
}

void grimoireParser::BeginfuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBeginfunc(this);
}

void grimoireParser::BeginfuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBeginfunc(this);
}


std::any grimoireParser::BeginfuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitBeginfunc(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::BeginfuncContext* grimoireParser::beginfunc() {
  BeginfuncContext *_localctx = _tracker.createInstance<BeginfuncContext>(_ctx, getState());
  enterRule(_localctx, 12, grimoireParser::RuleBeginfunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(grimoireParser::FUNC);
    setState(91);
    match(grimoireParser::ID);
    setState(92);
    match(grimoireParser::OPENBRACKET);
    setState(93);
    paramlist();
    setState(94);
    match(grimoireParser::CLOSEBRACKET);
    setState(95);
    rettype();
    setState(96);
    match(grimoireParser::OPENBLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndfuncContext ------------------------------------------------------------------

grimoireParser::EndfuncContext::EndfuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::EndfuncContext::CLOSEBLOCK() {
  return getToken(grimoireParser::CLOSEBLOCK, 0);
}


size_t grimoireParser::EndfuncContext::getRuleIndex() const {
  return grimoireParser::RuleEndfunc;
}

void grimoireParser::EndfuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndfunc(this);
}

void grimoireParser::EndfuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndfunc(this);
}


std::any grimoireParser::EndfuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitEndfunc(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::EndfuncContext* grimoireParser::endfunc() {
  EndfuncContext *_localctx = _tracker.createInstance<EndfuncContext>(_ctx, getState());
  enterRule(_localctx, 14, grimoireParser::RuleEndfunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(grimoireParser::CLOSEBLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

grimoireParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::TypeContext::INT() {
  return getToken(grimoireParser::INT, 0);
}

tree::TerminalNode* grimoireParser::TypeContext::ARRAY() {
  return getToken(grimoireParser::ARRAY, 0);
}

tree::TerminalNode* grimoireParser::TypeContext::OPENSQBRACKET() {
  return getToken(grimoireParser::OPENSQBRACKET, 0);
}

tree::TerminalNode* grimoireParser::TypeContext::INTLIT() {
  return getToken(grimoireParser::INTLIT, 0);
}

tree::TerminalNode* grimoireParser::TypeContext::CLOSESQBRACKET() {
  return getToken(grimoireParser::CLOSESQBRACKET, 0);
}

tree::TerminalNode* grimoireParser::TypeContext::OF() {
  return getToken(grimoireParser::OF, 0);
}


size_t grimoireParser::TypeContext::getRuleIndex() const {
  return grimoireParser::RuleType;
}

void grimoireParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void grimoireParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any grimoireParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::TypeContext* grimoireParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 16, grimoireParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(100);
        match(grimoireParser::INT);
        break;
      }

      case grimoireParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(101);
        match(grimoireParser::ARRAY);
        setState(102);
        match(grimoireParser::OPENSQBRACKET);
        setState(103);
        match(grimoireParser::INTLIT);
        setState(104);
        match(grimoireParser::CLOSESQBRACKET);
        setState(105);
        match(grimoireParser::OF);
        setState(106);
        match(grimoireParser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionalinitContext ------------------------------------------------------------------

grimoireParser::OptionalinitContext::OptionalinitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::OptionalinitContext::EMBODIES() {
  return getToken(grimoireParser::EMBODIES, 0);
}

tree::TerminalNode* grimoireParser::OptionalinitContext::INTLIT() {
  return getToken(grimoireParser::INTLIT, 0);
}


size_t grimoireParser::OptionalinitContext::getRuleIndex() const {
  return grimoireParser::RuleOptionalinit;
}

void grimoireParser::OptionalinitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionalinit(this);
}

void grimoireParser::OptionalinitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionalinit(this);
}


std::any grimoireParser::OptionalinitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitOptionalinit(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::OptionalinitContext* grimoireParser::optionalinit() {
  OptionalinitContext *_localctx = _tracker.createInstance<OptionalinitContext>(_ctx, getState());
  enterRule(_localctx, 18, grimoireParser::RuleOptionalinit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::SEMICOLON: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::EMBODIES: {
        enterOuterAlt(_localctx, 2);
        setState(110);
        match(grimoireParser::EMBODIES);
        setState(111);
        match(grimoireParser::INTLIT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamlistContext ------------------------------------------------------------------

grimoireParser::ParamlistContext::ParamlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<grimoireParser::ParamContext *> grimoireParser::ParamlistContext::param() {
  return getRuleContexts<grimoireParser::ParamContext>();
}

grimoireParser::ParamContext* grimoireParser::ParamlistContext::param(size_t i) {
  return getRuleContext<grimoireParser::ParamContext>(i);
}

std::vector<tree::TerminalNode *> grimoireParser::ParamlistContext::COMMA() {
  return getTokens(grimoireParser::COMMA);
}

tree::TerminalNode* grimoireParser::ParamlistContext::COMMA(size_t i) {
  return getToken(grimoireParser::COMMA, i);
}


size_t grimoireParser::ParamlistContext::getRuleIndex() const {
  return grimoireParser::RuleParamlist;
}

void grimoireParser::ParamlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamlist(this);
}

void grimoireParser::ParamlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamlist(this);
}


std::any grimoireParser::ParamlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitParamlist(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::ParamlistContext* grimoireParser::paramlist() {
  ParamlistContext *_localctx = _tracker.createInstance<ParamlistContext>(_ctx, getState());
  enterRule(_localctx, 20, grimoireParser::RuleParamlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == grimoireParser::ID) {
      setState(114);
      param();
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == grimoireParser::COMMA) {
        setState(115);
        match(grimoireParser::COMMA);
        setState(116);
        param();
        setState(121);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RettypeContext ------------------------------------------------------------------

grimoireParser::RettypeContext::RettypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::RettypeContext::FROM() {
  return getToken(grimoireParser::FROM, 0);
}

grimoireParser::TypeContext* grimoireParser::RettypeContext::type() {
  return getRuleContext<grimoireParser::TypeContext>(0);
}


size_t grimoireParser::RettypeContext::getRuleIndex() const {
  return grimoireParser::RuleRettype;
}

void grimoireParser::RettypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRettype(this);
}

void grimoireParser::RettypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRettype(this);
}


std::any grimoireParser::RettypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitRettype(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::RettypeContext* grimoireParser::rettype() {
  RettypeContext *_localctx = _tracker.createInstance<RettypeContext>(_ctx, getState());
  enterRule(_localctx, 22, grimoireParser::RuleRettype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::OPENBLOCK: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::FROM: {
        enterOuterAlt(_localctx, 2);
        setState(125);
        match(grimoireParser::FROM);
        setState(126);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

grimoireParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::ParamContext::ID() {
  return getToken(grimoireParser::ID, 0);
}

tree::TerminalNode* grimoireParser::ParamContext::FROM() {
  return getToken(grimoireParser::FROM, 0);
}

grimoireParser::TypeContext* grimoireParser::ParamContext::type() {
  return getRuleContext<grimoireParser::TypeContext>(0);
}


size_t grimoireParser::ParamContext::getRuleIndex() const {
  return grimoireParser::RuleParam;
}

void grimoireParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void grimoireParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}


std::any grimoireParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::ParamContext* grimoireParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 24, grimoireParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(grimoireParser::ID);
    setState(130);
    match(grimoireParser::FROM);
    setState(131);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatseqContext ------------------------------------------------------------------

grimoireParser::StatseqContext::StatseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::StatContext* grimoireParser::StatseqContext::stat() {
  return getRuleContext<grimoireParser::StatContext>(0);
}

grimoireParser::StattailContext* grimoireParser::StatseqContext::stattail() {
  return getRuleContext<grimoireParser::StattailContext>(0);
}


size_t grimoireParser::StatseqContext::getRuleIndex() const {
  return grimoireParser::RuleStatseq;
}

void grimoireParser::StatseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatseq(this);
}

void grimoireParser::StatseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatseq(this);
}


std::any grimoireParser::StatseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitStatseq(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::StatseqContext* grimoireParser::statseq() {
  StatseqContext *_localctx = _tracker.createInstance<StatseqContext>(_ctx, getState());
  enterRule(_localctx, 26, grimoireParser::RuleStatseq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    stat();
    setState(134);
    stattail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StattailContext ------------------------------------------------------------------

grimoireParser::StattailContext::StattailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::StatseqContext* grimoireParser::StattailContext::statseq() {
  return getRuleContext<grimoireParser::StatseqContext>(0);
}


size_t grimoireParser::StattailContext::getRuleIndex() const {
  return grimoireParser::RuleStattail;
}

void grimoireParser::StattailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStattail(this);
}

void grimoireParser::StattailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStattail(this);
}


std::any grimoireParser::StattailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitStattail(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::StattailContext* grimoireParser::stattail() {
  StattailContext *_localctx = _tracker.createInstance<StattailContext>(_ctx, getState());
  enterRule(_localctx, 28, grimoireParser::RuleStattail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::CLOSEBLOCK: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::IF:
      case grimoireParser::FOR:
      case grimoireParser::RET:
      case grimoireParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(137);
        statseq();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

grimoireParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::AssignstatContext* grimoireParser::StatContext::assignstat() {
  return getRuleContext<grimoireParser::AssignstatContext>(0);
}

grimoireParser::FunccallContext* grimoireParser::StatContext::funccall() {
  return getRuleContext<grimoireParser::FunccallContext>(0);
}

tree::TerminalNode* grimoireParser::StatContext::SEMICOLON() {
  return getToken(grimoireParser::SEMICOLON, 0);
}

grimoireParser::CondstatContext* grimoireParser::StatContext::condstat() {
  return getRuleContext<grimoireParser::CondstatContext>(0);
}

grimoireParser::ForstatContext* grimoireParser::StatContext::forstat() {
  return getRuleContext<grimoireParser::ForstatContext>(0);
}

grimoireParser::RetstatContext* grimoireParser::StatContext::retstat() {
  return getRuleContext<grimoireParser::RetstatContext>(0);
}


size_t grimoireParser::StatContext::getRuleIndex() const {
  return grimoireParser::RuleStat;
}

void grimoireParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void grimoireParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}


std::any grimoireParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::StatContext* grimoireParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 30, grimoireParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(140);
      assignstat();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(141);
      funccall();
      setState(142);
      match(grimoireParser::SEMICOLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(144);
      condstat();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(145);
      forstat();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(146);
      retstat();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignstatContext ------------------------------------------------------------------

grimoireParser::AssignstatContext::AssignstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::AssignstatContext::ID() {
  return getToken(grimoireParser::ID, 0);
}

grimoireParser::LvaluetailContext* grimoireParser::AssignstatContext::lvaluetail() {
  return getRuleContext<grimoireParser::LvaluetailContext>(0);
}

tree::TerminalNode* grimoireParser::AssignstatContext::ASSIGNMENT() {
  return getToken(grimoireParser::ASSIGNMENT, 0);
}

grimoireParser::ExprContext* grimoireParser::AssignstatContext::expr() {
  return getRuleContext<grimoireParser::ExprContext>(0);
}

tree::TerminalNode* grimoireParser::AssignstatContext::SEMICOLON() {
  return getToken(grimoireParser::SEMICOLON, 0);
}


size_t grimoireParser::AssignstatContext::getRuleIndex() const {
  return grimoireParser::RuleAssignstat;
}

void grimoireParser::AssignstatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignstat(this);
}

void grimoireParser::AssignstatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignstat(this);
}


std::any grimoireParser::AssignstatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitAssignstat(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::AssignstatContext* grimoireParser::assignstat() {
  AssignstatContext *_localctx = _tracker.createInstance<AssignstatContext>(_ctx, getState());
  enterRule(_localctx, 32, grimoireParser::RuleAssignstat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(grimoireParser::ID);
    setState(150);
    lvaluetail();
    setState(151);
    match(grimoireParser::ASSIGNMENT);
    setState(152);
    expr();
    setState(153);
    match(grimoireParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunccallContext ------------------------------------------------------------------

grimoireParser::FunccallContext::FunccallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::FunccallContext::ID() {
  return getToken(grimoireParser::ID, 0);
}

tree::TerminalNode* grimoireParser::FunccallContext::OPENBRACKET() {
  return getToken(grimoireParser::OPENBRACKET, 0);
}

grimoireParser::ExprlistContext* grimoireParser::FunccallContext::exprlist() {
  return getRuleContext<grimoireParser::ExprlistContext>(0);
}

tree::TerminalNode* grimoireParser::FunccallContext::CLOSEBRACKET() {
  return getToken(grimoireParser::CLOSEBRACKET, 0);
}


size_t grimoireParser::FunccallContext::getRuleIndex() const {
  return grimoireParser::RuleFunccall;
}

void grimoireParser::FunccallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunccall(this);
}

void grimoireParser::FunccallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunccall(this);
}


std::any grimoireParser::FunccallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitFunccall(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::FunccallContext* grimoireParser::funccall() {
  FunccallContext *_localctx = _tracker.createInstance<FunccallContext>(_ctx, getState());
  enterRule(_localctx, 34, grimoireParser::RuleFunccall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    match(grimoireParser::ID);
    setState(156);
    match(grimoireParser::OPENBRACKET);
    setState(157);
    exprlist();
    setState(158);
    match(grimoireParser::CLOSEBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncexprContext ------------------------------------------------------------------

grimoireParser::FuncexprContext::FuncexprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::FuncexprContext::ID() {
  return getToken(grimoireParser::ID, 0);
}

tree::TerminalNode* grimoireParser::FuncexprContext::OPENBRACKET() {
  return getToken(grimoireParser::OPENBRACKET, 0);
}

grimoireParser::ExprlistContext* grimoireParser::FuncexprContext::exprlist() {
  return getRuleContext<grimoireParser::ExprlistContext>(0);
}

tree::TerminalNode* grimoireParser::FuncexprContext::CLOSEBRACKET() {
  return getToken(grimoireParser::CLOSEBRACKET, 0);
}


size_t grimoireParser::FuncexprContext::getRuleIndex() const {
  return grimoireParser::RuleFuncexpr;
}

void grimoireParser::FuncexprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncexpr(this);
}

void grimoireParser::FuncexprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncexpr(this);
}


std::any grimoireParser::FuncexprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitFuncexpr(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::FuncexprContext* grimoireParser::funcexpr() {
  FuncexprContext *_localctx = _tracker.createInstance<FuncexprContext>(_ctx, getState());
  enterRule(_localctx, 36, grimoireParser::RuleFuncexpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(grimoireParser::ID);
    setState(161);
    match(grimoireParser::OPENBRACKET);
    setState(162);
    exprlist();
    setState(163);
    match(grimoireParser::CLOSEBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondstatContext ------------------------------------------------------------------

grimoireParser::CondstatContext::CondstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::IfcondContext* grimoireParser::CondstatContext::ifcond() {
  return getRuleContext<grimoireParser::IfcondContext>(0);
}

grimoireParser::StatseqContext* grimoireParser::CondstatContext::statseq() {
  return getRuleContext<grimoireParser::StatseqContext>(0);
}

grimoireParser::CondstattailContext* grimoireParser::CondstatContext::condstattail() {
  return getRuleContext<grimoireParser::CondstattailContext>(0);
}


size_t grimoireParser::CondstatContext::getRuleIndex() const {
  return grimoireParser::RuleCondstat;
}

void grimoireParser::CondstatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondstat(this);
}

void grimoireParser::CondstatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondstat(this);
}


std::any grimoireParser::CondstatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCondstat(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::CondstatContext* grimoireParser::condstat() {
  CondstatContext *_localctx = _tracker.createInstance<CondstatContext>(_ctx, getState());
  enterRule(_localctx, 38, grimoireParser::RuleCondstat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    ifcond();
    setState(166);
    statseq();
    setState(167);
    condstattail();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondstattailContext ------------------------------------------------------------------

grimoireParser::CondstattailContext::CondstattailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::EndcondstatContext* grimoireParser::CondstattailContext::endcondstat() {
  return getRuleContext<grimoireParser::EndcondstatContext>(0);
}

tree::TerminalNode* grimoireParser::CondstattailContext::CLOSEBLOCK() {
  return getToken(grimoireParser::CLOSEBLOCK, 0);
}

grimoireParser::ElsecondContext* grimoireParser::CondstattailContext::elsecond() {
  return getRuleContext<grimoireParser::ElsecondContext>(0);
}


size_t grimoireParser::CondstattailContext::getRuleIndex() const {
  return grimoireParser::RuleCondstattail;
}

void grimoireParser::CondstattailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondstattail(this);
}

void grimoireParser::CondstattailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondstattail(this);
}


std::any grimoireParser::CondstattailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCondstattail(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::CondstattailContext* grimoireParser::condstattail() {
  CondstattailContext *_localctx = _tracker.createInstance<CondstattailContext>(_ctx, getState());
  enterRule(_localctx, 40, grimoireParser::RuleCondstattail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(174);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(169);
      endcondstat();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(170);
      match(grimoireParser::CLOSEBLOCK);
      setState(171);
      elsecond();
      setState(172);
      endcondstat();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfcondContext ------------------------------------------------------------------

grimoireParser::IfcondContext::IfcondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::IfcondContext::IF() {
  return getToken(grimoireParser::IF, 0);
}

grimoireParser::ExprContext* grimoireParser::IfcondContext::expr() {
  return getRuleContext<grimoireParser::ExprContext>(0);
}

tree::TerminalNode* grimoireParser::IfcondContext::OPENBLOCK() {
  return getToken(grimoireParser::OPENBLOCK, 0);
}


size_t grimoireParser::IfcondContext::getRuleIndex() const {
  return grimoireParser::RuleIfcond;
}

void grimoireParser::IfcondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfcond(this);
}

void grimoireParser::IfcondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfcond(this);
}


std::any grimoireParser::IfcondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitIfcond(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::IfcondContext* grimoireParser::ifcond() {
  IfcondContext *_localctx = _tracker.createInstance<IfcondContext>(_ctx, getState());
  enterRule(_localctx, 42, grimoireParser::RuleIfcond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    match(grimoireParser::IF);
    setState(177);
    expr();
    setState(178);
    match(grimoireParser::OPENBLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElsecondContext ------------------------------------------------------------------

grimoireParser::ElsecondContext::ElsecondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::ElsecondContext::ELSE() {
  return getToken(grimoireParser::ELSE, 0);
}

tree::TerminalNode* grimoireParser::ElsecondContext::OPENBLOCK() {
  return getToken(grimoireParser::OPENBLOCK, 0);
}

grimoireParser::StatseqContext* grimoireParser::ElsecondContext::statseq() {
  return getRuleContext<grimoireParser::StatseqContext>(0);
}


size_t grimoireParser::ElsecondContext::getRuleIndex() const {
  return grimoireParser::RuleElsecond;
}

void grimoireParser::ElsecondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElsecond(this);
}

void grimoireParser::ElsecondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElsecond(this);
}


std::any grimoireParser::ElsecondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitElsecond(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::ElsecondContext* grimoireParser::elsecond() {
  ElsecondContext *_localctx = _tracker.createInstance<ElsecondContext>(_ctx, getState());
  enterRule(_localctx, 44, grimoireParser::RuleElsecond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    match(grimoireParser::ELSE);
    setState(181);
    match(grimoireParser::OPENBLOCK);
    setState(182);
    statseq();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndcondstatContext ------------------------------------------------------------------

grimoireParser::EndcondstatContext::EndcondstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::EndcondstatContext::CLOSEBLOCK() {
  return getToken(grimoireParser::CLOSEBLOCK, 0);
}


size_t grimoireParser::EndcondstatContext::getRuleIndex() const {
  return grimoireParser::RuleEndcondstat;
}

void grimoireParser::EndcondstatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndcondstat(this);
}

void grimoireParser::EndcondstatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndcondstat(this);
}


std::any grimoireParser::EndcondstatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitEndcondstat(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::EndcondstatContext* grimoireParser::endcondstat() {
  EndcondstatContext *_localctx = _tracker.createInstance<EndcondstatContext>(_ctx, getState());
  enterRule(_localctx, 46, grimoireParser::RuleEndcondstat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(grimoireParser::CLOSEBLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForstatContext ------------------------------------------------------------------

grimoireParser::ForstatContext::ForstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::ForstatContext::FOR() {
  return getToken(grimoireParser::FOR, 0);
}

tree::TerminalNode* grimoireParser::ForstatContext::ID() {
  return getToken(grimoireParser::ID, 0);
}

tree::TerminalNode* grimoireParser::ForstatContext::ASSIGNMENT() {
  return getToken(grimoireParser::ASSIGNMENT, 0);
}

std::vector<grimoireParser::ExprContext *> grimoireParser::ForstatContext::expr() {
  return getRuleContexts<grimoireParser::ExprContext>();
}

grimoireParser::ExprContext* grimoireParser::ForstatContext::expr(size_t i) {
  return getRuleContext<grimoireParser::ExprContext>(i);
}

tree::TerminalNode* grimoireParser::ForstatContext::TO() {
  return getToken(grimoireParser::TO, 0);
}

tree::TerminalNode* grimoireParser::ForstatContext::OPENBLOCK() {
  return getToken(grimoireParser::OPENBLOCK, 0);
}

grimoireParser::StatseqContext* grimoireParser::ForstatContext::statseq() {
  return getRuleContext<grimoireParser::StatseqContext>(0);
}

grimoireParser::EndforContext* grimoireParser::ForstatContext::endfor() {
  return getRuleContext<grimoireParser::EndforContext>(0);
}


size_t grimoireParser::ForstatContext::getRuleIndex() const {
  return grimoireParser::RuleForstat;
}

void grimoireParser::ForstatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForstat(this);
}

void grimoireParser::ForstatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForstat(this);
}


std::any grimoireParser::ForstatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitForstat(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::ForstatContext* grimoireParser::forstat() {
  ForstatContext *_localctx = _tracker.createInstance<ForstatContext>(_ctx, getState());
  enterRule(_localctx, 48, grimoireParser::RuleForstat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(grimoireParser::FOR);
    setState(187);
    match(grimoireParser::ID);
    setState(188);
    match(grimoireParser::ASSIGNMENT);
    setState(189);
    expr();
    setState(190);
    match(grimoireParser::TO);
    setState(191);
    expr();
    setState(192);
    match(grimoireParser::OPENBLOCK);
    setState(193);
    statseq();
    setState(194);
    endfor();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndforContext ------------------------------------------------------------------

grimoireParser::EndforContext::EndforContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::EndforContext::CLOSEBLOCK() {
  return getToken(grimoireParser::CLOSEBLOCK, 0);
}


size_t grimoireParser::EndforContext::getRuleIndex() const {
  return grimoireParser::RuleEndfor;
}

void grimoireParser::EndforContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndfor(this);
}

void grimoireParser::EndforContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndfor(this);
}


std::any grimoireParser::EndforContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitEndfor(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::EndforContext* grimoireParser::endfor() {
  EndforContext *_localctx = _tracker.createInstance<EndforContext>(_ctx, getState());
  enterRule(_localctx, 50, grimoireParser::RuleEndfor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(grimoireParser::CLOSEBLOCK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetstatContext ------------------------------------------------------------------

grimoireParser::RetstatContext::RetstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::RetstatContext::RET() {
  return getToken(grimoireParser::RET, 0);
}

grimoireParser::ExprContext* grimoireParser::RetstatContext::expr() {
  return getRuleContext<grimoireParser::ExprContext>(0);
}

tree::TerminalNode* grimoireParser::RetstatContext::SEMICOLON() {
  return getToken(grimoireParser::SEMICOLON, 0);
}


size_t grimoireParser::RetstatContext::getRuleIndex() const {
  return grimoireParser::RuleRetstat;
}

void grimoireParser::RetstatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRetstat(this);
}

void grimoireParser::RetstatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRetstat(this);
}


std::any grimoireParser::RetstatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitRetstat(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::RetstatContext* grimoireParser::retstat() {
  RetstatContext *_localctx = _tracker.createInstance<RetstatContext>(_ctx, getState());
  enterRule(_localctx, 52, grimoireParser::RuleRetstat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(grimoireParser::RET);
    setState(199);
    expr();
    setState(200);
    match(grimoireParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

grimoireParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::TermContext* grimoireParser::ExprContext::term() {
  return getRuleContext<grimoireParser::TermContext>(0);
}

tree::TerminalNode* grimoireParser::ExprContext::MULT() {
  return getToken(grimoireParser::MULT, 0);
}

grimoireParser::ExprContext* grimoireParser::ExprContext::expr() {
  return getRuleContext<grimoireParser::ExprContext>(0);
}

tree::TerminalNode* grimoireParser::ExprContext::DIV() {
  return getToken(grimoireParser::DIV, 0);
}

tree::TerminalNode* grimoireParser::ExprContext::ADD() {
  return getToken(grimoireParser::ADD, 0);
}

tree::TerminalNode* grimoireParser::ExprContext::SUB() {
  return getToken(grimoireParser::SUB, 0);
}

tree::TerminalNode* grimoireParser::ExprContext::EQUAL() {
  return getToken(grimoireParser::EQUAL, 0);
}

tree::TerminalNode* grimoireParser::ExprContext::NOTEQUAL() {
  return getToken(grimoireParser::NOTEQUAL, 0);
}

tree::TerminalNode* grimoireParser::ExprContext::GREAT() {
  return getToken(grimoireParser::GREAT, 0);
}

tree::TerminalNode* grimoireParser::ExprContext::LESS() {
  return getToken(grimoireParser::LESS, 0);
}

tree::TerminalNode* grimoireParser::ExprContext::GREATEQUAL() {
  return getToken(grimoireParser::GREATEQUAL, 0);
}

tree::TerminalNode* grimoireParser::ExprContext::LESSEQUAL() {
  return getToken(grimoireParser::LESSEQUAL, 0);
}

tree::TerminalNode* grimoireParser::ExprContext::AND() {
  return getToken(grimoireParser::AND, 0);
}

tree::TerminalNode* grimoireParser::ExprContext::OR() {
  return getToken(grimoireParser::OR, 0);
}

tree::TerminalNode* grimoireParser::ExprContext::NOT() {
  return getToken(grimoireParser::NOT, 0);
}


size_t grimoireParser::ExprContext::getRuleIndex() const {
  return grimoireParser::RuleExpr;
}

void grimoireParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void grimoireParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any grimoireParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::ExprContext* grimoireParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 54, grimoireParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(253);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(202);
      term();
      setState(203);
      match(grimoireParser::MULT);
      setState(204);
      expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(206);
      term();
      setState(207);
      match(grimoireParser::DIV);
      setState(208);
      expr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(210);
      term();
      setState(211);
      match(grimoireParser::ADD);
      setState(212);
      expr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(214);
      term();
      setState(215);
      match(grimoireParser::SUB);
      setState(216);
      expr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(218);
      term();
      setState(219);
      match(grimoireParser::EQUAL);
      setState(220);
      expr();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(222);
      term();
      setState(223);
      match(grimoireParser::NOTEQUAL);
      setState(224);
      expr();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(226);
      term();
      setState(227);
      match(grimoireParser::GREAT);
      setState(228);
      expr();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(230);
      term();
      setState(231);
      match(grimoireParser::LESS);
      setState(232);
      expr();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(234);
      term();
      setState(235);
      match(grimoireParser::GREATEQUAL);
      setState(236);
      expr();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(238);
      term();
      setState(239);
      match(grimoireParser::LESSEQUAL);
      setState(240);
      expr();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(242);
      term();
      setState(243);
      match(grimoireParser::AND);
      setState(244);
      expr();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(246);
      term();
      setState(247);
      match(grimoireParser::OR);
      setState(248);
      expr();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(250);
      match(grimoireParser::NOT);
      setState(251);
      expr();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(252);
      term();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

grimoireParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::TermContext::INTLIT() {
  return getToken(grimoireParser::INTLIT, 0);
}

tree::TerminalNode* grimoireParser::TermContext::ID() {
  return getToken(grimoireParser::ID, 0);
}

grimoireParser::LvaluetailContext* grimoireParser::TermContext::lvaluetail() {
  return getRuleContext<grimoireParser::LvaluetailContext>(0);
}

grimoireParser::FuncexprContext* grimoireParser::TermContext::funcexpr() {
  return getRuleContext<grimoireParser::FuncexprContext>(0);
}

tree::TerminalNode* grimoireParser::TermContext::OPENBRACKET() {
  return getToken(grimoireParser::OPENBRACKET, 0);
}

grimoireParser::ExprContext* grimoireParser::TermContext::expr() {
  return getRuleContext<grimoireParser::ExprContext>(0);
}

tree::TerminalNode* grimoireParser::TermContext::CLOSEBRACKET() {
  return getToken(grimoireParser::CLOSEBRACKET, 0);
}


size_t grimoireParser::TermContext::getRuleIndex() const {
  return grimoireParser::RuleTerm;
}

void grimoireParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void grimoireParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


std::any grimoireParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::TermContext* grimoireParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 56, grimoireParser::RuleTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(263);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(255);
      match(grimoireParser::INTLIT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(256);
      match(grimoireParser::ID);
      setState(257);
      lvaluetail();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(258);
      funcexpr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(259);
      match(grimoireParser::OPENBRACKET);
      setState(260);
      expr();
      setState(261);
      match(grimoireParser::CLOSEBRACKET);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprlistContext ------------------------------------------------------------------

grimoireParser::ExprlistContext::ExprlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<grimoireParser::ExprContext *> grimoireParser::ExprlistContext::expr() {
  return getRuleContexts<grimoireParser::ExprContext>();
}

grimoireParser::ExprContext* grimoireParser::ExprlistContext::expr(size_t i) {
  return getRuleContext<grimoireParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> grimoireParser::ExprlistContext::COMMA() {
  return getTokens(grimoireParser::COMMA);
}

tree::TerminalNode* grimoireParser::ExprlistContext::COMMA(size_t i) {
  return getToken(grimoireParser::COMMA, i);
}


size_t grimoireParser::ExprlistContext::getRuleIndex() const {
  return grimoireParser::RuleExprlist;
}

void grimoireParser::ExprlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprlist(this);
}

void grimoireParser::ExprlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprlist(this);
}


std::any grimoireParser::ExprlistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitExprlist(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::ExprlistContext* grimoireParser::exprlist() {
  ExprlistContext *_localctx = _tracker.createInstance<ExprlistContext>(_ctx, getState());
  enterRule(_localctx, 58, grimoireParser::RuleExprlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << grimoireParser::ID)
      | (1ULL << grimoireParser::INTLIT)
      | (1ULL << grimoireParser::OPENBRACKET)
      | (1ULL << grimoireParser::NOT))) != 0)) {
      setState(265);
      expr();
      setState(270);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == grimoireParser::COMMA) {
        setState(266);
        match(grimoireParser::COMMA);
        setState(267);
        expr();
        setState(272);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LvaluetailContext ------------------------------------------------------------------

grimoireParser::LvaluetailContext::LvaluetailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::LvaluetailContext::OPENSQBRACKET() {
  return getToken(grimoireParser::OPENSQBRACKET, 0);
}

grimoireParser::ExprContext* grimoireParser::LvaluetailContext::expr() {
  return getRuleContext<grimoireParser::ExprContext>(0);
}

tree::TerminalNode* grimoireParser::LvaluetailContext::CLOSESQBRACKET() {
  return getToken(grimoireParser::CLOSESQBRACKET, 0);
}


size_t grimoireParser::LvaluetailContext::getRuleIndex() const {
  return grimoireParser::RuleLvaluetail;
}

void grimoireParser::LvaluetailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLvaluetail(this);
}

void grimoireParser::LvaluetailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLvaluetail(this);
}


std::any grimoireParser::LvaluetailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitLvaluetail(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::LvaluetailContext* grimoireParser::lvaluetail() {
  LvaluetailContext *_localctx = _tracker.createInstance<LvaluetailContext>(_ctx, getState());
  enterRule(_localctx, 60, grimoireParser::RuleLvaluetail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(280);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::OPENSQBRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(275);
        match(grimoireParser::OPENSQBRACKET);
        setState(276);
        expr();
        setState(277);
        match(grimoireParser::CLOSESQBRACKET);
        break;
      }

      case grimoireParser::TO:
      case grimoireParser::ASSIGNMENT:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET:
      case grimoireParser::OPENBLOCK:
      case grimoireParser::ADD:
      case grimoireParser::SUB:
      case grimoireParser::MULT:
      case grimoireParser::DIV:
      case grimoireParser::EQUAL:
      case grimoireParser::NOTEQUAL:
      case grimoireParser::LESS:
      case grimoireParser::GREAT:
      case grimoireParser::LESSEQUAL:
      case grimoireParser::GREATEQUAL:
      case grimoireParser::AND:
      case grimoireParser::OR: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void grimoireParser::initialize() {
  std::call_once(grimoireParserOnceFlag, grimoireParserInitialize);
}
