
// Generated from grimoire.g4 by ANTLR 4.10.1


#include "grimoireLexer.h"


using namespace antlr4;

using namespace antlrcppgrim;


using namespace antlr4;

namespace {

struct GrimoireLexerStaticData final {
  GrimoireLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrimoireLexerStaticData(const GrimoireLexerStaticData&) = delete;
  GrimoireLexerStaticData(GrimoireLexerStaticData&&) = delete;
  GrimoireLexerStaticData& operator=(const GrimoireLexerStaticData&) = delete;
  GrimoireLexerStaticData& operator=(GrimoireLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

std::once_flag grimoirelexerLexerOnceFlag;
GrimoireLexerStaticData *grimoirelexerLexerStaticData = nullptr;

void grimoirelexerLexerInitialize() {
  assert(grimoirelexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<GrimoireLexerStaticData>(
    std::vector<std::string>{
      "DIGIT", "LETTERS", "WORDS", "WHITESPACE", "NEWLINE", "COMMENT", "MAIN", 
      "ARRAY", "BREAK", "DO", "IF", "ELSE", "FOR", "FUNC", "LET", "IN", 
      "OF", "THEN", "TO", "VAR", "WHILE", "ENDIF", "BEGIN", "END", "ENDDO", 
      "RET", "INT", "FLOAT", "ID", "INTLIT", "FLOATLIT", "COMMA", "COLON", 
      "SEMICOLON", "OPENBRACKET", "CLOSEBRACKET", "OPENSQBRACKET", "CLOSESQBRACKET", 
      "ADD", "SUB", "MULT", "DIV", "EQUAL", "NOTEQUAL", "LESS", "GREAT", 
      "LESSEQUAL", "GREATEQUAL", "AND", "OR", "ASSIGNMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "'main'", "'array'", "'break'", "'do'", "'if'", "'else'", 
      "'for'", "'function'", "'let'", "'in'", "'of'", "'then'", "'to'", 
      "'var'", "'while'", "'endif'", "'begin'", "'end'", "'enddo'", "'return'", 
      "'int'", "'float'", "", "", "", "','", "':'", "';'", "'('", "')'", 
      "'['", "']'", "'+'", "'-'", "'*'", "'/'", "'='", "'<>'", "'<'", "'>'", 
      "'<='", "'>='", "'&'", "'|'", "':='"
    },
    std::vector<std::string>{
      "", "WHITESPACE", "NEWLINE", "COMMENT", "MAIN", "ARRAY", "BREAK", 
      "DO", "IF", "ELSE", "FOR", "FUNC", "LET", "IN", "OF", "THEN", "TO", 
      "VAR", "WHILE", "ENDIF", "BEGIN", "END", "ENDDO", "RET", "INT", "FLOAT", 
      "ID", "INTLIT", "FLOATLIT", "COMMA", "COLON", "SEMICOLON", "OPENBRACKET", 
      "CLOSEBRACKET", "OPENSQBRACKET", "CLOSESQBRACKET", "ADD", "SUB", "MULT", 
      "DIV", "EQUAL", "NOTEQUAL", "LESS", "GREAT", "LESSEQUAL", "GREATEQUAL", 
      "AND", "OR", "ASSIGNMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,48,319,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,1,0,1,0,1,1,1,1,1,2,1,2,1,3,4,3,111,8,3,11,3,12,3,112,
  	1,3,1,3,1,4,3,4,118,8,4,1,4,1,4,4,4,122,8,4,11,4,12,4,123,1,4,1,4,1,5,
  	1,5,1,5,1,5,5,5,132,8,5,10,5,12,5,135,9,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,
  	1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,
  	9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,
  	15,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,
  	19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,
  	22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,
  	24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,27,1,
  	27,1,27,1,27,1,27,1,27,1,28,1,28,5,28,252,8,28,10,28,12,28,255,9,28,1,
  	29,4,29,258,8,29,11,29,12,29,259,1,30,4,30,263,8,30,11,30,12,30,264,1,
  	30,1,30,5,30,269,8,30,10,30,12,30,272,9,30,3,30,274,8,30,1,31,1,31,1,
  	32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,36,1,36,1,37,1,37,1,38,1,38,1,
  	39,1,39,1,40,1,40,1,41,1,41,1,42,1,42,1,43,1,43,1,43,1,44,1,44,1,45,1,
  	45,1,46,1,46,1,46,1,47,1,47,1,47,1,48,1,48,1,49,1,49,1,50,1,50,1,50,1,
  	133,0,51,1,0,3,0,5,0,7,1,9,2,11,3,13,4,15,5,17,6,19,7,21,8,23,9,25,10,
  	27,11,29,12,31,13,33,14,35,15,37,16,39,17,41,18,43,19,45,20,47,21,49,
  	22,51,23,53,24,55,25,57,26,59,27,61,28,63,29,65,30,67,31,69,32,71,33,
  	73,34,75,35,77,36,79,37,81,38,83,39,85,40,87,41,89,42,91,43,93,44,95,
  	45,97,46,99,47,101,48,1,0,4,1,0,48,57,2,0,65,90,97,122,4,0,48,57,65,90,
  	95,95,97,122,2,0,9,9,32,32,325,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,
  	13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,
  	0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,
  	0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,
  	45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,
  	0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,
  	0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,
  	77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,
  	0,0,0,0,89,1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,
  	0,0,99,1,0,0,0,0,101,1,0,0,0,1,103,1,0,0,0,3,105,1,0,0,0,5,107,1,0,0,
  	0,7,110,1,0,0,0,9,121,1,0,0,0,11,127,1,0,0,0,13,141,1,0,0,0,15,146,1,
  	0,0,0,17,152,1,0,0,0,19,158,1,0,0,0,21,161,1,0,0,0,23,164,1,0,0,0,25,
  	169,1,0,0,0,27,173,1,0,0,0,29,182,1,0,0,0,31,186,1,0,0,0,33,189,1,0,0,
  	0,35,192,1,0,0,0,37,197,1,0,0,0,39,200,1,0,0,0,41,204,1,0,0,0,43,210,
  	1,0,0,0,45,216,1,0,0,0,47,222,1,0,0,0,49,226,1,0,0,0,51,232,1,0,0,0,53,
  	239,1,0,0,0,55,243,1,0,0,0,57,249,1,0,0,0,59,257,1,0,0,0,61,262,1,0,0,
  	0,63,275,1,0,0,0,65,277,1,0,0,0,67,279,1,0,0,0,69,281,1,0,0,0,71,283,
  	1,0,0,0,73,285,1,0,0,0,75,287,1,0,0,0,77,289,1,0,0,0,79,291,1,0,0,0,81,
  	293,1,0,0,0,83,295,1,0,0,0,85,297,1,0,0,0,87,299,1,0,0,0,89,302,1,0,0,
  	0,91,304,1,0,0,0,93,306,1,0,0,0,95,309,1,0,0,0,97,312,1,0,0,0,99,314,
  	1,0,0,0,101,316,1,0,0,0,103,104,7,0,0,0,104,2,1,0,0,0,105,106,7,1,0,0,
  	106,4,1,0,0,0,107,108,7,2,0,0,108,6,1,0,0,0,109,111,7,3,0,0,110,109,1,
  	0,0,0,111,112,1,0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,114,1,0,0,0,
  	114,115,6,3,0,0,115,8,1,0,0,0,116,118,5,13,0,0,117,116,1,0,0,0,117,118,
  	1,0,0,0,118,119,1,0,0,0,119,122,5,10,0,0,120,122,5,13,0,0,121,117,1,0,
  	0,0,121,120,1,0,0,0,122,123,1,0,0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,
  	125,1,0,0,0,125,126,6,4,0,0,126,10,1,0,0,0,127,128,5,47,0,0,128,129,5,
  	42,0,0,129,133,1,0,0,0,130,132,9,0,0,0,131,130,1,0,0,0,132,135,1,0,0,
  	0,133,134,1,0,0,0,133,131,1,0,0,0,134,136,1,0,0,0,135,133,1,0,0,0,136,
  	137,5,42,0,0,137,138,5,47,0,0,138,139,1,0,0,0,139,140,6,5,0,0,140,12,
  	1,0,0,0,141,142,5,109,0,0,142,143,5,97,0,0,143,144,5,105,0,0,144,145,
  	5,110,0,0,145,14,1,0,0,0,146,147,5,97,0,0,147,148,5,114,0,0,148,149,5,
  	114,0,0,149,150,5,97,0,0,150,151,5,121,0,0,151,16,1,0,0,0,152,153,5,98,
  	0,0,153,154,5,114,0,0,154,155,5,101,0,0,155,156,5,97,0,0,156,157,5,107,
  	0,0,157,18,1,0,0,0,158,159,5,100,0,0,159,160,5,111,0,0,160,20,1,0,0,0,
  	161,162,5,105,0,0,162,163,5,102,0,0,163,22,1,0,0,0,164,165,5,101,0,0,
  	165,166,5,108,0,0,166,167,5,115,0,0,167,168,5,101,0,0,168,24,1,0,0,0,
  	169,170,5,102,0,0,170,171,5,111,0,0,171,172,5,114,0,0,172,26,1,0,0,0,
  	173,174,5,102,0,0,174,175,5,117,0,0,175,176,5,110,0,0,176,177,5,99,0,
  	0,177,178,5,116,0,0,178,179,5,105,0,0,179,180,5,111,0,0,180,181,5,110,
  	0,0,181,28,1,0,0,0,182,183,5,108,0,0,183,184,5,101,0,0,184,185,5,116,
  	0,0,185,30,1,0,0,0,186,187,5,105,0,0,187,188,5,110,0,0,188,32,1,0,0,0,
  	189,190,5,111,0,0,190,191,5,102,0,0,191,34,1,0,0,0,192,193,5,116,0,0,
  	193,194,5,104,0,0,194,195,5,101,0,0,195,196,5,110,0,0,196,36,1,0,0,0,
  	197,198,5,116,0,0,198,199,5,111,0,0,199,38,1,0,0,0,200,201,5,118,0,0,
  	201,202,5,97,0,0,202,203,5,114,0,0,203,40,1,0,0,0,204,205,5,119,0,0,205,
  	206,5,104,0,0,206,207,5,105,0,0,207,208,5,108,0,0,208,209,5,101,0,0,209,
  	42,1,0,0,0,210,211,5,101,0,0,211,212,5,110,0,0,212,213,5,100,0,0,213,
  	214,5,105,0,0,214,215,5,102,0,0,215,44,1,0,0,0,216,217,5,98,0,0,217,218,
  	5,101,0,0,218,219,5,103,0,0,219,220,5,105,0,0,220,221,5,110,0,0,221,46,
  	1,0,0,0,222,223,5,101,0,0,223,224,5,110,0,0,224,225,5,100,0,0,225,48,
  	1,0,0,0,226,227,5,101,0,0,227,228,5,110,0,0,228,229,5,100,0,0,229,230,
  	5,100,0,0,230,231,5,111,0,0,231,50,1,0,0,0,232,233,5,114,0,0,233,234,
  	5,101,0,0,234,235,5,116,0,0,235,236,5,117,0,0,236,237,5,114,0,0,237,238,
  	5,110,0,0,238,52,1,0,0,0,239,240,5,105,0,0,240,241,5,110,0,0,241,242,
  	5,116,0,0,242,54,1,0,0,0,243,244,5,102,0,0,244,245,5,108,0,0,245,246,
  	5,111,0,0,246,247,5,97,0,0,247,248,5,116,0,0,248,56,1,0,0,0,249,253,3,
  	3,1,0,250,252,3,5,2,0,251,250,1,0,0,0,252,255,1,0,0,0,253,251,1,0,0,0,
  	253,254,1,0,0,0,254,58,1,0,0,0,255,253,1,0,0,0,256,258,3,1,0,0,257,256,
  	1,0,0,0,258,259,1,0,0,0,259,257,1,0,0,0,259,260,1,0,0,0,260,60,1,0,0,
  	0,261,263,3,1,0,0,262,261,1,0,0,0,263,264,1,0,0,0,264,262,1,0,0,0,264,
  	265,1,0,0,0,265,273,1,0,0,0,266,270,5,46,0,0,267,269,3,1,0,0,268,267,
  	1,0,0,0,269,272,1,0,0,0,270,268,1,0,0,0,270,271,1,0,0,0,271,274,1,0,0,
  	0,272,270,1,0,0,0,273,266,1,0,0,0,273,274,1,0,0,0,274,62,1,0,0,0,275,
  	276,5,44,0,0,276,64,1,0,0,0,277,278,5,58,0,0,278,66,1,0,0,0,279,280,5,
  	59,0,0,280,68,1,0,0,0,281,282,5,40,0,0,282,70,1,0,0,0,283,284,5,41,0,
  	0,284,72,1,0,0,0,285,286,5,91,0,0,286,74,1,0,0,0,287,288,5,93,0,0,288,
  	76,1,0,0,0,289,290,5,43,0,0,290,78,1,0,0,0,291,292,5,45,0,0,292,80,1,
  	0,0,0,293,294,5,42,0,0,294,82,1,0,0,0,295,296,5,47,0,0,296,84,1,0,0,0,
  	297,298,5,61,0,0,298,86,1,0,0,0,299,300,5,60,0,0,300,301,5,62,0,0,301,
  	88,1,0,0,0,302,303,5,60,0,0,303,90,1,0,0,0,304,305,5,62,0,0,305,92,1,
  	0,0,0,306,307,5,60,0,0,307,308,5,61,0,0,308,94,1,0,0,0,309,310,5,62,0,
  	0,310,311,5,61,0,0,311,96,1,0,0,0,312,313,5,38,0,0,313,98,1,0,0,0,314,
  	315,5,124,0,0,315,100,1,0,0,0,316,317,5,58,0,0,317,318,5,61,0,0,318,102,
  	1,0,0,0,11,0,112,117,121,123,133,253,259,264,270,273,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grimoirelexerLexerStaticData = staticData.release();
}

}

grimoireLexer::grimoireLexer(CharStream *input) : Lexer(input) {
  grimoireLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *grimoirelexerLexerStaticData->atn, grimoirelexerLexerStaticData->decisionToDFA, grimoirelexerLexerStaticData->sharedContextCache);
}

grimoireLexer::~grimoireLexer() {
  delete _interpreter;
}

std::string grimoireLexer::getGrammarFileName() const {
  return "grimoire.g4";
}

const std::vector<std::string>& grimoireLexer::getRuleNames() const {
  return grimoirelexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& grimoireLexer::getChannelNames() const {
  return grimoirelexerLexerStaticData->channelNames;
}

const std::vector<std::string>& grimoireLexer::getModeNames() const {
  return grimoirelexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& grimoireLexer::getVocabulary() const {
  return grimoirelexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView grimoireLexer::getSerializedATN() const {
  return grimoirelexerLexerStaticData->serializedATN;
}

const atn::ATN& grimoireLexer::getATN() const {
  return *grimoirelexerLexerStaticData->atn;
}




void grimoireLexer::initialize() {
  std::call_once(grimoirelexerLexerOnceFlag, grimoirelexerLexerInitialize);
}
