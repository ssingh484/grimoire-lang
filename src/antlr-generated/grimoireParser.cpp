
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
      "stattail", "stat", "assignstat", "funccall", "condstat", "condstattail", 
      "ifcond", "elsecond", "endcondstat", "forstat", "endfor", "retstat", 
      "expr", "term", "exprlist", "lvaluetail"
    },
    std::vector<std::string>{
      "", "", "", "", "'main'", "'array'", "'break'", "'do'", "'if'", "'else'", 
      "'for'", "'function'", "'let'", "'in'", "'of'", "'then'", "'to'", 
      "'var'", "'while'", "'endif'", "'begin'", "'end'", "'enddo'", "'return'", 
      "'int'", "'float'", "", "", "", "','", "':'", "';'", "'('", "')'", 
      "'['", "']'", "'+'", "'-'", "'*'", "'/'", "'='", "'<>'", "'<'", "'>'", 
      "'<='", "'>='", "'&'", "'|'", "'~'", "':='"
    },
    std::vector<std::string>{
      "", "WHITESPACE", "NEWLINE", "COMMENT", "MAIN", "ARRAY", "BREAK", 
      "DO", "IF", "ELSE", "FOR", "FUNC", "LET", "IN", "OF", "THEN", "TO", 
      "VAR", "WHILE", "ENDIF", "BEGIN", "END", "ENDDO", "RET", "INT", "FLOAT", 
      "ID", "INTLIT", "FLOATLIT", "COMMA", "COLON", "SEMICOLON", "OPENBRACKET", 
      "CLOSEBRACKET", "OPENSQBRACKET", "CLOSESQBRACKET", "ADD", "SUB", "MULT", 
      "DIV", "EQUAL", "NOTEQUAL", "LESS", "GREAT", "LESSEQUAL", "GREATEQUAL", 
      "AND", "OR", "NOT", "ASSIGNMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,49,282,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,
  	1,2,3,2,76,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,3,4,89,8,4,
  	1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,
  	8,1,8,1,8,1,8,3,8,112,8,8,1,9,1,9,1,9,3,9,117,8,9,1,10,1,10,1,10,5,10,
  	122,8,10,10,10,12,10,125,9,10,3,10,127,8,10,1,11,1,11,1,11,3,11,132,8,
  	11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,3,14,143,8,14,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,3,15,152,8,15,1,16,1,16,1,16,1,16,1,16,1,
  	16,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,3,
  	19,173,8,19,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,25,1,25,1,
  	25,1,25,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,3,26,253,8,26,1,
  	27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,3,27,263,8,27,1,28,1,28,1,28,5,
  	28,268,8,28,10,28,12,28,271,9,28,3,28,273,8,28,1,29,1,29,1,29,1,29,1,
  	29,3,29,280,8,29,1,29,0,0,30,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
  	30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,0,0,283,0,60,1,0,0,0,2,68,
  	1,0,0,0,4,75,1,0,0,0,6,77,1,0,0,0,8,88,1,0,0,0,10,90,1,0,0,0,12,94,1,
  	0,0,0,14,102,1,0,0,0,16,111,1,0,0,0,18,116,1,0,0,0,20,126,1,0,0,0,22,
  	131,1,0,0,0,24,133,1,0,0,0,26,137,1,0,0,0,28,142,1,0,0,0,30,151,1,0,0,
  	0,32,153,1,0,0,0,34,159,1,0,0,0,36,164,1,0,0,0,38,172,1,0,0,0,40,174,
  	1,0,0,0,42,178,1,0,0,0,44,181,1,0,0,0,46,184,1,0,0,0,48,194,1,0,0,0,50,
  	197,1,0,0,0,52,252,1,0,0,0,54,262,1,0,0,0,56,272,1,0,0,0,58,279,1,0,0,
  	0,60,61,5,4,0,0,61,62,5,12,0,0,62,63,3,2,1,0,63,64,5,13,0,0,64,65,5,20,
  	0,0,65,66,3,26,13,0,66,67,5,21,0,0,67,1,1,0,0,0,68,69,3,4,2,0,69,70,3,
  	8,4,0,70,3,1,0,0,0,71,76,1,0,0,0,72,73,3,6,3,0,73,74,3,4,2,0,74,76,1,
  	0,0,0,75,71,1,0,0,0,75,72,1,0,0,0,76,5,1,0,0,0,77,78,5,17,0,0,78,79,5,
  	26,0,0,79,80,5,30,0,0,80,81,3,16,8,0,81,82,3,18,9,0,82,83,5,31,0,0,83,
  	7,1,0,0,0,84,89,1,0,0,0,85,86,3,10,5,0,86,87,3,8,4,0,87,89,1,0,0,0,88,
  	84,1,0,0,0,88,85,1,0,0,0,89,9,1,0,0,0,90,91,3,12,6,0,91,92,3,26,13,0,
  	92,93,3,14,7,0,93,11,1,0,0,0,94,95,5,11,0,0,95,96,5,26,0,0,96,97,5,32,
  	0,0,97,98,3,20,10,0,98,99,5,33,0,0,99,100,3,22,11,0,100,101,5,20,0,0,
  	101,13,1,0,0,0,102,103,5,21,0,0,103,15,1,0,0,0,104,112,5,24,0,0,105,106,
  	5,5,0,0,106,107,5,34,0,0,107,108,5,27,0,0,108,109,5,35,0,0,109,110,5,
  	14,0,0,110,112,5,24,0,0,111,104,1,0,0,0,111,105,1,0,0,0,112,17,1,0,0,
  	0,113,117,1,0,0,0,114,115,5,49,0,0,115,117,5,27,0,0,116,113,1,0,0,0,116,
  	114,1,0,0,0,117,19,1,0,0,0,118,123,3,24,12,0,119,120,5,29,0,0,120,122,
  	3,24,12,0,121,119,1,0,0,0,122,125,1,0,0,0,123,121,1,0,0,0,123,124,1,0,
  	0,0,124,127,1,0,0,0,125,123,1,0,0,0,126,118,1,0,0,0,126,127,1,0,0,0,127,
  	21,1,0,0,0,128,132,1,0,0,0,129,130,5,30,0,0,130,132,3,16,8,0,131,128,
  	1,0,0,0,131,129,1,0,0,0,132,23,1,0,0,0,133,134,5,26,0,0,134,135,5,30,
  	0,0,135,136,3,16,8,0,136,25,1,0,0,0,137,138,3,30,15,0,138,139,3,28,14,
  	0,139,27,1,0,0,0,140,143,1,0,0,0,141,143,3,26,13,0,142,140,1,0,0,0,142,
  	141,1,0,0,0,143,29,1,0,0,0,144,152,3,32,16,0,145,146,3,34,17,0,146,147,
  	5,31,0,0,147,152,1,0,0,0,148,152,3,36,18,0,149,152,3,46,23,0,150,152,
  	3,50,25,0,151,144,1,0,0,0,151,145,1,0,0,0,151,148,1,0,0,0,151,149,1,0,
  	0,0,151,150,1,0,0,0,152,31,1,0,0,0,153,154,5,26,0,0,154,155,3,58,29,0,
  	155,156,5,49,0,0,156,157,3,52,26,0,157,158,5,31,0,0,158,33,1,0,0,0,159,
  	160,5,26,0,0,160,161,5,32,0,0,161,162,3,56,28,0,162,163,5,33,0,0,163,
  	35,1,0,0,0,164,165,3,40,20,0,165,166,3,26,13,0,166,167,3,38,19,0,167,
  	37,1,0,0,0,168,173,3,44,22,0,169,170,3,42,21,0,170,171,3,44,22,0,171,
  	173,1,0,0,0,172,168,1,0,0,0,172,169,1,0,0,0,173,39,1,0,0,0,174,175,5,
  	8,0,0,175,176,3,52,26,0,176,177,5,15,0,0,177,41,1,0,0,0,178,179,5,9,0,
  	0,179,180,3,26,13,0,180,43,1,0,0,0,181,182,5,19,0,0,182,183,5,31,0,0,
  	183,45,1,0,0,0,184,185,5,10,0,0,185,186,5,26,0,0,186,187,5,49,0,0,187,
  	188,3,52,26,0,188,189,5,16,0,0,189,190,3,52,26,0,190,191,5,7,0,0,191,
  	192,3,26,13,0,192,193,3,48,24,0,193,47,1,0,0,0,194,195,5,22,0,0,195,196,
  	5,31,0,0,196,49,1,0,0,0,197,198,5,23,0,0,198,199,3,52,26,0,199,200,5,
  	31,0,0,200,51,1,0,0,0,201,202,3,54,27,0,202,203,5,38,0,0,203,204,3,52,
  	26,0,204,253,1,0,0,0,205,206,3,54,27,0,206,207,5,39,0,0,207,208,3,52,
  	26,0,208,253,1,0,0,0,209,210,3,54,27,0,210,211,5,36,0,0,211,212,3,52,
  	26,0,212,253,1,0,0,0,213,214,3,54,27,0,214,215,5,37,0,0,215,216,3,52,
  	26,0,216,253,1,0,0,0,217,218,3,54,27,0,218,219,5,40,0,0,219,220,3,52,
  	26,0,220,253,1,0,0,0,221,222,3,54,27,0,222,223,5,41,0,0,223,224,3,52,
  	26,0,224,253,1,0,0,0,225,226,3,54,27,0,226,227,5,43,0,0,227,228,3,52,
  	26,0,228,253,1,0,0,0,229,230,3,54,27,0,230,231,5,42,0,0,231,232,3,52,
  	26,0,232,253,1,0,0,0,233,234,3,54,27,0,234,235,5,45,0,0,235,236,3,52,
  	26,0,236,253,1,0,0,0,237,238,3,54,27,0,238,239,5,44,0,0,239,240,3,52,
  	26,0,240,253,1,0,0,0,241,242,3,54,27,0,242,243,5,46,0,0,243,244,3,52,
  	26,0,244,253,1,0,0,0,245,246,3,54,27,0,246,247,5,47,0,0,247,248,3,52,
  	26,0,248,253,1,0,0,0,249,250,5,48,0,0,250,253,3,52,26,0,251,253,3,54,
  	27,0,252,201,1,0,0,0,252,205,1,0,0,0,252,209,1,0,0,0,252,213,1,0,0,0,
  	252,217,1,0,0,0,252,221,1,0,0,0,252,225,1,0,0,0,252,229,1,0,0,0,252,233,
  	1,0,0,0,252,237,1,0,0,0,252,241,1,0,0,0,252,245,1,0,0,0,252,249,1,0,0,
  	0,252,251,1,0,0,0,253,53,1,0,0,0,254,263,5,27,0,0,255,256,5,26,0,0,256,
  	263,3,58,29,0,257,263,3,34,17,0,258,259,5,32,0,0,259,260,3,52,26,0,260,
  	261,5,33,0,0,261,263,1,0,0,0,262,254,1,0,0,0,262,255,1,0,0,0,262,257,
  	1,0,0,0,262,258,1,0,0,0,263,55,1,0,0,0,264,269,3,52,26,0,265,266,5,29,
  	0,0,266,268,3,52,26,0,267,265,1,0,0,0,268,271,1,0,0,0,269,267,1,0,0,0,
  	269,270,1,0,0,0,270,273,1,0,0,0,271,269,1,0,0,0,272,264,1,0,0,0,272,273,
  	1,0,0,0,273,57,1,0,0,0,274,275,5,34,0,0,275,276,3,52,26,0,276,277,5,35,
  	0,0,277,280,1,0,0,0,278,280,1,0,0,0,279,274,1,0,0,0,279,278,1,0,0,0,280,
  	59,1,0,0,0,15,75,88,111,116,123,126,131,142,151,172,252,262,269,272,279
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

tree::TerminalNode* grimoireParser::GrimoireContext::MAIN() {
  return getToken(grimoireParser::MAIN, 0);
}

tree::TerminalNode* grimoireParser::GrimoireContext::LET() {
  return getToken(grimoireParser::LET, 0);
}

grimoireParser::DeclarationsegmentContext* grimoireParser::GrimoireContext::declarationsegment() {
  return getRuleContext<grimoireParser::DeclarationsegmentContext>(0);
}

tree::TerminalNode* grimoireParser::GrimoireContext::IN() {
  return getToken(grimoireParser::IN, 0);
}

tree::TerminalNode* grimoireParser::GrimoireContext::BEGIN() {
  return getToken(grimoireParser::BEGIN, 0);
}

grimoireParser::StatseqContext* grimoireParser::GrimoireContext::statseq() {
  return getRuleContext<grimoireParser::StatseqContext>(0);
}

tree::TerminalNode* grimoireParser::GrimoireContext::END() {
  return getToken(grimoireParser::END, 0);
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
    setState(60);
    match(grimoireParser::MAIN);
    setState(61);
    match(grimoireParser::LET);
    setState(62);
    declarationsegment();
    setState(63);
    match(grimoireParser::IN);
    setState(64);
    match(grimoireParser::BEGIN);
    setState(65);
    statseq();
    setState(66);
    match(grimoireParser::END);
   
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
    setState(68);
    vardeclarationlist();
    setState(69);
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
    setState(75);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::FUNC:
      case grimoireParser::IN: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::VAR: {
        enterOuterAlt(_localctx, 2);
        setState(72);
        vardeclaration();
        setState(73);
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

tree::TerminalNode* grimoireParser::VardeclarationContext::VAR() {
  return getToken(grimoireParser::VAR, 0);
}

tree::TerminalNode* grimoireParser::VardeclarationContext::ID() {
  return getToken(grimoireParser::ID, 0);
}

tree::TerminalNode* grimoireParser::VardeclarationContext::COLON() {
  return getToken(grimoireParser::COLON, 0);
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
    setState(77);
    match(grimoireParser::VAR);
    setState(78);
    match(grimoireParser::ID);
    setState(79);
    match(grimoireParser::COLON);
    setState(80);
    type();
    setState(81);
    optionalinit();
    setState(82);
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
    setState(88);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::IN: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::FUNC: {
        enterOuterAlt(_localctx, 2);
        setState(85);
        functdeclaration();
        setState(86);
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
    setState(90);
    beginfunc();
    setState(91);
    statseq();
    setState(92);
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

tree::TerminalNode* grimoireParser::BeginfuncContext::BEGIN() {
  return getToken(grimoireParser::BEGIN, 0);
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
    setState(94);
    match(grimoireParser::FUNC);
    setState(95);
    match(grimoireParser::ID);
    setState(96);
    match(grimoireParser::OPENBRACKET);
    setState(97);
    paramlist();
    setState(98);
    match(grimoireParser::CLOSEBRACKET);
    setState(99);
    rettype();
    setState(100);
    match(grimoireParser::BEGIN);
   
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

tree::TerminalNode* grimoireParser::EndfuncContext::END() {
  return getToken(grimoireParser::END, 0);
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
    setState(102);
    match(grimoireParser::END);
   
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
    setState(111);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(104);
        match(grimoireParser::INT);
        break;
      }

      case grimoireParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(105);
        match(grimoireParser::ARRAY);
        setState(106);
        match(grimoireParser::OPENSQBRACKET);
        setState(107);
        match(grimoireParser::INTLIT);
        setState(108);
        match(grimoireParser::CLOSESQBRACKET);
        setState(109);
        match(grimoireParser::OF);
        setState(110);
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

tree::TerminalNode* grimoireParser::OptionalinitContext::ASSIGNMENT() {
  return getToken(grimoireParser::ASSIGNMENT, 0);
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
    setState(116);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::SEMICOLON: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::ASSIGNMENT: {
        enterOuterAlt(_localctx, 2);
        setState(114);
        match(grimoireParser::ASSIGNMENT);
        setState(115);
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
    setState(126);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == grimoireParser::ID) {
      setState(118);
      param();
      setState(123);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == grimoireParser::COMMA) {
        setState(119);
        match(grimoireParser::COMMA);
        setState(120);
        param();
        setState(125);
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

tree::TerminalNode* grimoireParser::RettypeContext::COLON() {
  return getToken(grimoireParser::COLON, 0);
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
    setState(131);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::BEGIN: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::COLON: {
        enterOuterAlt(_localctx, 2);
        setState(129);
        match(grimoireParser::COLON);
        setState(130);
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

tree::TerminalNode* grimoireParser::ParamContext::COLON() {
  return getToken(grimoireParser::COLON, 0);
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
    setState(133);
    match(grimoireParser::ID);
    setState(134);
    match(grimoireParser::COLON);
    setState(135);
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
    setState(137);
    stat();
    setState(138);
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
    setState(142);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::ELSE:
      case grimoireParser::ENDIF:
      case grimoireParser::END:
      case grimoireParser::ENDDO: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::IF:
      case grimoireParser::FOR:
      case grimoireParser::RET:
      case grimoireParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(141);
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
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(144);
      assignstat();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(145);
      funccall();
      setState(146);
      match(grimoireParser::SEMICOLON);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(148);
      condstat();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(149);
      forstat();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(150);
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
    setState(153);
    match(grimoireParser::ID);
    setState(154);
    lvaluetail();
    setState(155);
    match(grimoireParser::ASSIGNMENT);
    setState(156);
    expr();
    setState(157);
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
    setState(159);
    match(grimoireParser::ID);
    setState(160);
    match(grimoireParser::OPENBRACKET);
    setState(161);
    exprlist();
    setState(162);
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
  enterRule(_localctx, 36, grimoireParser::RuleCondstat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    ifcond();
    setState(165);
    statseq();
    setState(166);
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
  enterRule(_localctx, 38, grimoireParser::RuleCondstattail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::ENDIF: {
        enterOuterAlt(_localctx, 1);
        setState(168);
        endcondstat();
        break;
      }

      case grimoireParser::ELSE: {
        enterOuterAlt(_localctx, 2);
        setState(169);
        elsecond();
        setState(170);
        endcondstat();
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

tree::TerminalNode* grimoireParser::IfcondContext::THEN() {
  return getToken(grimoireParser::THEN, 0);
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
  enterRule(_localctx, 40, grimoireParser::RuleIfcond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(grimoireParser::IF);
    setState(175);
    expr();
    setState(176);
    match(grimoireParser::THEN);
   
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
  enterRule(_localctx, 42, grimoireParser::RuleElsecond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(grimoireParser::ELSE);
    setState(179);
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

tree::TerminalNode* grimoireParser::EndcondstatContext::ENDIF() {
  return getToken(grimoireParser::ENDIF, 0);
}

tree::TerminalNode* grimoireParser::EndcondstatContext::SEMICOLON() {
  return getToken(grimoireParser::SEMICOLON, 0);
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
  enterRule(_localctx, 44, grimoireParser::RuleEndcondstat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
    match(grimoireParser::ENDIF);
    setState(182);
    match(grimoireParser::SEMICOLON);
   
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

tree::TerminalNode* grimoireParser::ForstatContext::DO() {
  return getToken(grimoireParser::DO, 0);
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
  enterRule(_localctx, 46, grimoireParser::RuleForstat);

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
    match(grimoireParser::FOR);
    setState(185);
    match(grimoireParser::ID);
    setState(186);
    match(grimoireParser::ASSIGNMENT);
    setState(187);
    expr();
    setState(188);
    match(grimoireParser::TO);
    setState(189);
    expr();
    setState(190);
    match(grimoireParser::DO);
    setState(191);
    statseq();
    setState(192);
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

tree::TerminalNode* grimoireParser::EndforContext::ENDDO() {
  return getToken(grimoireParser::ENDDO, 0);
}

tree::TerminalNode* grimoireParser::EndforContext::SEMICOLON() {
  return getToken(grimoireParser::SEMICOLON, 0);
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
  enterRule(_localctx, 48, grimoireParser::RuleEndfor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(grimoireParser::ENDDO);
    setState(195);
    match(grimoireParser::SEMICOLON);
   
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
  enterRule(_localctx, 50, grimoireParser::RuleRetstat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(grimoireParser::RET);
    setState(198);
    expr();
    setState(199);
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
  enterRule(_localctx, 52, grimoireParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(201);
      term();
      setState(202);
      match(grimoireParser::MULT);
      setState(203);
      expr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(205);
      term();
      setState(206);
      match(grimoireParser::DIV);
      setState(207);
      expr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(209);
      term();
      setState(210);
      match(grimoireParser::ADD);
      setState(211);
      expr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(213);
      term();
      setState(214);
      match(grimoireParser::SUB);
      setState(215);
      expr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(217);
      term();
      setState(218);
      match(grimoireParser::EQUAL);
      setState(219);
      expr();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(221);
      term();
      setState(222);
      match(grimoireParser::NOTEQUAL);
      setState(223);
      expr();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(225);
      term();
      setState(226);
      match(grimoireParser::GREAT);
      setState(227);
      expr();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(229);
      term();
      setState(230);
      match(grimoireParser::LESS);
      setState(231);
      expr();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(233);
      term();
      setState(234);
      match(grimoireParser::GREATEQUAL);
      setState(235);
      expr();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(237);
      term();
      setState(238);
      match(grimoireParser::LESSEQUAL);
      setState(239);
      expr();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(241);
      term();
      setState(242);
      match(grimoireParser::AND);
      setState(243);
      expr();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(245);
      term();
      setState(246);
      match(grimoireParser::OR);
      setState(247);
      expr();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(249);
      match(grimoireParser::NOT);
      setState(250);
      expr();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(251);
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

grimoireParser::FunccallContext* grimoireParser::TermContext::funccall() {
  return getRuleContext<grimoireParser::FunccallContext>(0);
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
  enterRule(_localctx, 54, grimoireParser::RuleTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(262);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(254);
      match(grimoireParser::INTLIT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(255);
      match(grimoireParser::ID);
      setState(256);
      lvaluetail();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(257);
      funccall();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(258);
      match(grimoireParser::OPENBRACKET);
      setState(259);
      expr();
      setState(260);
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
  enterRule(_localctx, 56, grimoireParser::RuleExprlist);
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
    setState(272);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << grimoireParser::ID)
      | (1ULL << grimoireParser::INTLIT)
      | (1ULL << grimoireParser::OPENBRACKET)
      | (1ULL << grimoireParser::NOT))) != 0)) {
      setState(264);
      expr();
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == grimoireParser::COMMA) {
        setState(265);
        match(grimoireParser::COMMA);
        setState(266);
        expr();
        setState(271);
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
  enterRule(_localctx, 58, grimoireParser::RuleLvaluetail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(279);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::OPENSQBRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(274);
        match(grimoireParser::OPENSQBRACKET);
        setState(275);
        expr();
        setState(276);
        match(grimoireParser::CLOSESQBRACKET);
        break;
      }

      case grimoireParser::DO:
      case grimoireParser::THEN:
      case grimoireParser::TO:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET:
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
      case grimoireParser::OR:
      case grimoireParser::ASSIGNMENT: {
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
