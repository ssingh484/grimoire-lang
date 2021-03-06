
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
      "DIGIT", "LETTERS", "WORDS", "WHITESPACE", "NEWLINE", "COMMENT", "ARRAY", 
      "BREAK", "DO", "IF", "ELSE", "FOR", "FUNC", "LET", "IN", "OF", "THEN", 
      "TO", "FROM", "SUMMON", "WHILE", "ENDIF", "BEGIN", "END", "ENDDO", 
      "RET", "INT", "FLOAT", "EMBODIES", "ASSIGNMENT", "ID", "INTLIT", "FLOATLIT", 
      "COMMA", "COLON", "SEMICOLON", "OPENBRACKET", "CLOSEBRACKET", "OPENSQBRACKET", 
      "CLOSESQBRACKET", "OPENBLOCK", "CLOSEBLOCK", "ADD", "SUB", "MULT", 
      "DIV", "EQUAL", "NOTEQUAL", "LESS", "GREAT", "LESSEQUAL", "GREATEQUAL", 
      "AND", "OR", "NOT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,52,349,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,4,3,119,8,3,11,3,12,3,120,1,3,1,3,1,4,3,4,126,8,4,1,4,1,
  	4,4,4,130,8,4,11,4,12,4,131,1,4,1,4,1,5,1,5,1,5,1,5,5,5,140,8,5,10,5,
  	12,5,143,9,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,
  	1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,
  	1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,
  	1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,
  	1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,
  	1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,27,1,27,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,30,1,30,5,30,277,8,30,10,30,12,30,280,9,30,1,31,4,31,283,
  	8,31,11,31,12,31,284,1,32,4,32,288,8,32,11,32,12,32,289,1,32,1,32,5,32,
  	294,8,32,10,32,12,32,297,9,32,3,32,299,8,32,1,33,1,33,1,34,1,34,1,35,
  	1,35,1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,40,1,40,1,41,1,41,1,42,
  	1,42,1,43,1,43,1,44,1,44,1,45,1,45,1,46,1,46,1,46,1,47,1,47,1,47,1,47,
  	1,48,1,48,1,49,1,49,1,50,1,50,1,50,1,51,1,51,1,51,1,52,1,52,1,53,1,53,
  	1,54,1,54,1,141,0,55,1,0,3,0,5,0,7,1,9,2,11,3,13,4,15,5,17,6,19,7,21,
  	8,23,9,25,10,27,11,29,12,31,13,33,14,35,15,37,16,39,17,41,18,43,19,45,
  	20,47,21,49,22,51,23,53,24,55,25,57,26,59,27,61,28,63,29,65,30,67,31,
  	69,32,71,33,73,34,75,35,77,36,79,37,81,38,83,39,85,40,87,41,89,42,91,
  	43,93,44,95,45,97,46,99,47,101,48,103,49,105,50,107,51,109,52,1,0,4,1,
  	0,48,57,2,0,65,90,97,122,4,0,48,57,65,90,95,95,97,122,2,0,9,9,32,32,355,
  	0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,
  	0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,
  	0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,
  	39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,
  	0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,
  	0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,
  	71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,
  	0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,0,91,1,0,0,
  	0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,0,0,99,1,0,0,0,0,101,1,0,0,0,0,
  	103,1,0,0,0,0,105,1,0,0,0,0,107,1,0,0,0,0,109,1,0,0,0,1,111,1,0,0,0,3,
  	113,1,0,0,0,5,115,1,0,0,0,7,118,1,0,0,0,9,129,1,0,0,0,11,135,1,0,0,0,
  	13,149,1,0,0,0,15,155,1,0,0,0,17,161,1,0,0,0,19,164,1,0,0,0,21,167,1,
  	0,0,0,23,172,1,0,0,0,25,176,1,0,0,0,27,182,1,0,0,0,29,186,1,0,0,0,31,
  	189,1,0,0,0,33,192,1,0,0,0,35,197,1,0,0,0,37,200,1,0,0,0,39,205,1,0,0,
  	0,41,212,1,0,0,0,43,218,1,0,0,0,45,224,1,0,0,0,47,230,1,0,0,0,49,234,
  	1,0,0,0,51,240,1,0,0,0,53,247,1,0,0,0,55,251,1,0,0,0,57,257,1,0,0,0,59,
  	266,1,0,0,0,61,274,1,0,0,0,63,282,1,0,0,0,65,287,1,0,0,0,67,300,1,0,0,
  	0,69,302,1,0,0,0,71,304,1,0,0,0,73,306,1,0,0,0,75,308,1,0,0,0,77,310,
  	1,0,0,0,79,312,1,0,0,0,81,314,1,0,0,0,83,316,1,0,0,0,85,318,1,0,0,0,87,
  	320,1,0,0,0,89,322,1,0,0,0,91,324,1,0,0,0,93,326,1,0,0,0,95,329,1,0,0,
  	0,97,333,1,0,0,0,99,335,1,0,0,0,101,337,1,0,0,0,103,340,1,0,0,0,105,343,
  	1,0,0,0,107,345,1,0,0,0,109,347,1,0,0,0,111,112,7,0,0,0,112,2,1,0,0,0,
  	113,114,7,1,0,0,114,4,1,0,0,0,115,116,7,2,0,0,116,6,1,0,0,0,117,119,7,
  	3,0,0,118,117,1,0,0,0,119,120,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,
  	121,122,1,0,0,0,122,123,6,3,0,0,123,8,1,0,0,0,124,126,5,13,0,0,125,124,
  	1,0,0,0,125,126,1,0,0,0,126,127,1,0,0,0,127,130,5,10,0,0,128,130,5,13,
  	0,0,129,125,1,0,0,0,129,128,1,0,0,0,130,131,1,0,0,0,131,129,1,0,0,0,131,
  	132,1,0,0,0,132,133,1,0,0,0,133,134,6,4,0,0,134,10,1,0,0,0,135,136,5,
  	47,0,0,136,137,5,42,0,0,137,141,1,0,0,0,138,140,9,0,0,0,139,138,1,0,0,
  	0,140,143,1,0,0,0,141,142,1,0,0,0,141,139,1,0,0,0,142,144,1,0,0,0,143,
  	141,1,0,0,0,144,145,5,42,0,0,145,146,5,47,0,0,146,147,1,0,0,0,147,148,
  	6,5,0,0,148,12,1,0,0,0,149,150,5,97,0,0,150,151,5,114,0,0,151,152,5,114,
  	0,0,152,153,5,97,0,0,153,154,5,121,0,0,154,14,1,0,0,0,155,156,5,98,0,
  	0,156,157,5,114,0,0,157,158,5,101,0,0,158,159,5,97,0,0,159,160,5,107,
  	0,0,160,16,1,0,0,0,161,162,5,100,0,0,162,163,5,111,0,0,163,18,1,0,0,0,
  	164,165,5,105,0,0,165,166,5,102,0,0,166,20,1,0,0,0,167,168,5,101,0,0,
  	168,169,5,108,0,0,169,170,5,115,0,0,170,171,5,101,0,0,171,22,1,0,0,0,
  	172,173,5,102,0,0,173,174,5,111,0,0,174,175,5,114,0,0,175,24,1,0,0,0,
  	176,177,5,115,0,0,177,178,5,112,0,0,178,179,5,101,0,0,179,180,5,108,0,
  	0,180,181,5,108,0,0,181,26,1,0,0,0,182,183,5,108,0,0,183,184,5,101,0,
  	0,184,185,5,116,0,0,185,28,1,0,0,0,186,187,5,105,0,0,187,188,5,110,0,
  	0,188,30,1,0,0,0,189,190,5,111,0,0,190,191,5,102,0,0,191,32,1,0,0,0,192,
  	193,5,116,0,0,193,194,5,104,0,0,194,195,5,101,0,0,195,196,5,110,0,0,196,
  	34,1,0,0,0,197,198,5,116,0,0,198,199,5,111,0,0,199,36,1,0,0,0,200,201,
  	5,102,0,0,201,202,5,114,0,0,202,203,5,111,0,0,203,204,5,109,0,0,204,38,
  	1,0,0,0,205,206,5,115,0,0,206,207,5,117,0,0,207,208,5,109,0,0,208,209,
  	5,109,0,0,209,210,5,111,0,0,210,211,5,110,0,0,211,40,1,0,0,0,212,213,
  	5,119,0,0,213,214,5,104,0,0,214,215,5,105,0,0,215,216,5,108,0,0,216,217,
  	5,101,0,0,217,42,1,0,0,0,218,219,5,101,0,0,219,220,5,110,0,0,220,221,
  	5,100,0,0,221,222,5,105,0,0,222,223,5,102,0,0,223,44,1,0,0,0,224,225,
  	5,98,0,0,225,226,5,101,0,0,226,227,5,103,0,0,227,228,5,105,0,0,228,229,
  	5,110,0,0,229,46,1,0,0,0,230,231,5,101,0,0,231,232,5,110,0,0,232,233,
  	5,100,0,0,233,48,1,0,0,0,234,235,5,101,0,0,235,236,5,110,0,0,236,237,
  	5,100,0,0,237,238,5,100,0,0,238,239,5,111,0,0,239,50,1,0,0,0,240,241,
  	5,114,0,0,241,242,5,101,0,0,242,243,5,116,0,0,243,244,5,117,0,0,244,245,
  	5,114,0,0,245,246,5,110,0,0,246,52,1,0,0,0,247,248,5,105,0,0,248,249,
  	5,110,0,0,249,250,5,116,0,0,250,54,1,0,0,0,251,252,5,102,0,0,252,253,
  	5,108,0,0,253,254,5,111,0,0,254,255,5,97,0,0,255,256,5,116,0,0,256,56,
  	1,0,0,0,257,258,5,101,0,0,258,259,5,109,0,0,259,260,5,98,0,0,260,261,
  	5,111,0,0,261,262,5,100,0,0,262,263,5,105,0,0,263,264,5,101,0,0,264,265,
  	5,115,0,0,265,58,1,0,0,0,266,267,5,98,0,0,267,268,5,101,0,0,268,269,5,
  	99,0,0,269,270,5,111,0,0,270,271,5,109,0,0,271,272,5,101,0,0,272,273,
  	5,115,0,0,273,60,1,0,0,0,274,278,3,3,1,0,275,277,3,5,2,0,276,275,1,0,
  	0,0,277,280,1,0,0,0,278,276,1,0,0,0,278,279,1,0,0,0,279,62,1,0,0,0,280,
  	278,1,0,0,0,281,283,3,1,0,0,282,281,1,0,0,0,283,284,1,0,0,0,284,282,1,
  	0,0,0,284,285,1,0,0,0,285,64,1,0,0,0,286,288,3,1,0,0,287,286,1,0,0,0,
  	288,289,1,0,0,0,289,287,1,0,0,0,289,290,1,0,0,0,290,298,1,0,0,0,291,295,
  	5,46,0,0,292,294,3,1,0,0,293,292,1,0,0,0,294,297,1,0,0,0,295,293,1,0,
  	0,0,295,296,1,0,0,0,296,299,1,0,0,0,297,295,1,0,0,0,298,291,1,0,0,0,298,
  	299,1,0,0,0,299,66,1,0,0,0,300,301,5,44,0,0,301,68,1,0,0,0,302,303,5,
  	58,0,0,303,70,1,0,0,0,304,305,5,59,0,0,305,72,1,0,0,0,306,307,5,40,0,
  	0,307,74,1,0,0,0,308,309,5,41,0,0,309,76,1,0,0,0,310,311,5,91,0,0,311,
  	78,1,0,0,0,312,313,5,93,0,0,313,80,1,0,0,0,314,315,5,123,0,0,315,82,1,
  	0,0,0,316,317,5,125,0,0,317,84,1,0,0,0,318,319,5,43,0,0,319,86,1,0,0,
  	0,320,321,5,45,0,0,321,88,1,0,0,0,322,323,5,42,0,0,323,90,1,0,0,0,324,
  	325,5,47,0,0,325,92,1,0,0,0,326,327,5,61,0,0,327,328,5,61,0,0,328,94,
  	1,0,0,0,329,330,5,61,0,0,330,331,5,47,0,0,331,332,5,61,0,0,332,96,1,0,
  	0,0,333,334,5,60,0,0,334,98,1,0,0,0,335,336,5,62,0,0,336,100,1,0,0,0,
  	337,338,5,60,0,0,338,339,5,61,0,0,339,102,1,0,0,0,340,341,5,62,0,0,341,
  	342,5,61,0,0,342,104,1,0,0,0,343,344,5,38,0,0,344,106,1,0,0,0,345,346,
  	5,124,0,0,346,108,1,0,0,0,347,348,5,126,0,0,348,110,1,0,0,0,11,0,120,
  	125,129,131,141,278,284,289,295,298,1,6,0,0
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
