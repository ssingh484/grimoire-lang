
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
      "functdeclarationlist", "functdeclaration", "type", "optionalinit", 
      "paramlist", "paramlisttail", "rettype", "param", "statseq", "stattail", 
      "stat", "idstat", "idstat2", "condstat", "condstattail", "expr", "logicoperation1", 
      "logicoperationtail1", "logicoperation2", "logicoperationtail2", "compoperation1", 
      "compoperationtail1", "compoperation2", "compoperationtail2", "compoperation3", 
      "compoperationtail3", "compoperation4", "compoperationtail4", "compoperation5", 
      "compoperationtail5", "compoperation6", "compoperationtail6", "sumoperation1", 
      "sumoperationtail1", "sumoperation2", "sumoperationtail2", "multoperation1", 
      "multoperationtail1", "multoperation2", "multoperationtail2", "term", 
      "exprlist", "exprlisttail", "lvaluetail", "assignstat"
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
  	4,1,48,384,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,1,0,1,
  	0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,3,2,114,8,2,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,3,4,127,8,4,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,146,8,6,1,7,1,7,
  	1,7,3,7,151,8,7,1,8,1,8,1,8,1,8,3,8,157,8,8,1,9,1,9,1,9,1,9,1,9,3,9,164,
  	8,9,1,10,1,10,1,10,3,10,169,8,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,
  	13,1,13,3,13,180,8,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,215,8,14,1,15,1,
  	15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,226,8,15,1,16,1,16,1,16,1,
  	17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,244,
  	8,18,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,3,21,254,8,21,1,22,1,22,
  	1,22,1,23,1,23,1,23,3,23,262,8,23,1,24,1,24,1,24,1,25,1,25,1,25,3,25,
  	270,8,25,1,26,1,26,1,26,1,27,1,27,1,27,3,27,278,8,27,1,28,1,28,1,28,1,
  	29,1,29,1,29,3,29,286,8,29,1,30,1,30,1,30,1,31,1,31,1,31,3,31,294,8,31,
  	1,32,1,32,1,32,1,33,1,33,1,33,3,33,302,8,33,1,34,1,34,1,34,1,35,1,35,
  	1,35,3,35,310,8,35,1,36,1,36,1,36,1,37,1,37,1,37,3,37,318,8,37,1,38,1,
  	38,1,38,1,39,1,39,1,39,3,39,326,8,39,1,40,1,40,1,40,1,41,1,41,1,41,3,
  	41,334,8,41,1,42,1,42,1,42,1,43,1,43,1,43,3,43,342,8,43,1,44,1,44,1,44,
  	1,44,1,44,1,44,1,44,3,44,351,8,44,1,45,1,45,1,45,1,45,3,45,357,8,45,1,
  	46,1,46,1,46,1,46,1,46,3,46,364,8,46,1,47,1,47,1,47,1,47,1,47,1,47,1,
  	47,1,47,1,47,3,47,375,8,47,1,48,1,48,1,48,1,48,1,48,3,48,382,8,48,1,48,
  	0,0,49,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,
  	92,94,96,0,0,369,0,98,1,0,0,0,2,106,1,0,0,0,4,113,1,0,0,0,6,115,1,0,0,
  	0,8,126,1,0,0,0,10,128,1,0,0,0,12,145,1,0,0,0,14,150,1,0,0,0,16,156,1,
  	0,0,0,18,163,1,0,0,0,20,168,1,0,0,0,22,170,1,0,0,0,24,174,1,0,0,0,26,
  	179,1,0,0,0,28,214,1,0,0,0,30,225,1,0,0,0,32,227,1,0,0,0,34,230,1,0,0,
  	0,36,243,1,0,0,0,38,245,1,0,0,0,40,247,1,0,0,0,42,253,1,0,0,0,44,255,
  	1,0,0,0,46,261,1,0,0,0,48,263,1,0,0,0,50,269,1,0,0,0,52,271,1,0,0,0,54,
  	277,1,0,0,0,56,279,1,0,0,0,58,285,1,0,0,0,60,287,1,0,0,0,62,293,1,0,0,
  	0,64,295,1,0,0,0,66,301,1,0,0,0,68,303,1,0,0,0,70,309,1,0,0,0,72,311,
  	1,0,0,0,74,317,1,0,0,0,76,319,1,0,0,0,78,325,1,0,0,0,80,327,1,0,0,0,82,
  	333,1,0,0,0,84,335,1,0,0,0,86,341,1,0,0,0,88,350,1,0,0,0,90,356,1,0,0,
  	0,92,363,1,0,0,0,94,374,1,0,0,0,96,381,1,0,0,0,98,99,5,4,0,0,99,100,5,
  	12,0,0,100,101,3,2,1,0,101,102,5,13,0,0,102,103,5,20,0,0,103,104,3,24,
  	12,0,104,105,5,21,0,0,105,1,1,0,0,0,106,107,3,4,2,0,107,108,3,8,4,0,108,
  	3,1,0,0,0,109,114,1,0,0,0,110,111,3,6,3,0,111,112,3,4,2,0,112,114,1,0,
  	0,0,113,109,1,0,0,0,113,110,1,0,0,0,114,5,1,0,0,0,115,116,5,17,0,0,116,
  	117,5,26,0,0,117,118,5,30,0,0,118,119,3,12,6,0,119,120,3,14,7,0,120,121,
  	5,31,0,0,121,7,1,0,0,0,122,127,1,0,0,0,123,124,3,10,5,0,124,125,3,8,4,
  	0,125,127,1,0,0,0,126,122,1,0,0,0,126,123,1,0,0,0,127,9,1,0,0,0,128,129,
  	5,11,0,0,129,130,5,26,0,0,130,131,5,32,0,0,131,132,3,16,8,0,132,133,5,
  	33,0,0,133,134,3,20,10,0,134,135,5,20,0,0,135,136,3,24,12,0,136,137,5,
  	21,0,0,137,11,1,0,0,0,138,146,5,24,0,0,139,140,5,5,0,0,140,141,5,34,0,
  	0,141,142,5,27,0,0,142,143,5,35,0,0,143,144,5,14,0,0,144,146,5,24,0,0,
  	145,138,1,0,0,0,145,139,1,0,0,0,146,13,1,0,0,0,147,151,1,0,0,0,148,149,
  	5,48,0,0,149,151,5,27,0,0,150,147,1,0,0,0,150,148,1,0,0,0,151,15,1,0,
  	0,0,152,157,1,0,0,0,153,154,3,22,11,0,154,155,3,18,9,0,155,157,1,0,0,
  	0,156,152,1,0,0,0,156,153,1,0,0,0,157,17,1,0,0,0,158,164,1,0,0,0,159,
  	160,5,29,0,0,160,161,3,22,11,0,161,162,3,18,9,0,162,164,1,0,0,0,163,158,
  	1,0,0,0,163,159,1,0,0,0,164,19,1,0,0,0,165,169,1,0,0,0,166,167,5,30,0,
  	0,167,169,3,12,6,0,168,165,1,0,0,0,168,166,1,0,0,0,169,21,1,0,0,0,170,
  	171,5,26,0,0,171,172,5,30,0,0,172,173,3,12,6,0,173,23,1,0,0,0,174,175,
  	3,28,14,0,175,176,3,26,13,0,176,25,1,0,0,0,177,180,1,0,0,0,178,180,3,
  	24,12,0,179,177,1,0,0,0,179,178,1,0,0,0,180,27,1,0,0,0,181,182,5,26,0,
  	0,182,215,3,30,15,0,183,215,3,34,17,0,184,185,5,18,0,0,185,186,3,38,19,
  	0,186,187,5,7,0,0,187,188,3,24,12,0,188,189,5,22,0,0,189,190,5,31,0,0,
  	190,215,1,0,0,0,191,192,5,10,0,0,192,193,5,26,0,0,193,194,5,48,0,0,194,
  	195,3,38,19,0,195,196,5,16,0,0,196,197,3,38,19,0,197,198,5,7,0,0,198,
  	199,3,24,12,0,199,200,5,22,0,0,200,201,5,31,0,0,201,215,1,0,0,0,202,203,
  	5,6,0,0,203,215,5,31,0,0,204,205,5,23,0,0,205,206,3,38,19,0,206,207,5,
  	31,0,0,207,215,1,0,0,0,208,209,5,12,0,0,209,210,3,2,1,0,210,211,5,13,
  	0,0,211,212,3,24,12,0,212,213,5,21,0,0,213,215,1,0,0,0,214,181,1,0,0,
  	0,214,183,1,0,0,0,214,184,1,0,0,0,214,191,1,0,0,0,214,202,1,0,0,0,214,
  	204,1,0,0,0,214,208,1,0,0,0,215,29,1,0,0,0,216,217,3,96,48,0,217,218,
  	5,48,0,0,218,219,3,32,16,0,219,226,1,0,0,0,220,221,5,32,0,0,221,222,3,
  	90,45,0,222,223,5,33,0,0,223,224,5,31,0,0,224,226,1,0,0,0,225,216,1,0,
  	0,0,225,220,1,0,0,0,226,31,1,0,0,0,227,228,3,38,19,0,228,229,5,31,0,0,
  	229,33,1,0,0,0,230,231,5,8,0,0,231,232,3,38,19,0,232,233,5,15,0,0,233,
  	234,3,24,12,0,234,235,3,36,18,0,235,35,1,0,0,0,236,237,5,19,0,0,237,244,
  	5,31,0,0,238,239,5,9,0,0,239,240,3,24,12,0,240,241,5,19,0,0,241,242,5,
  	31,0,0,242,244,1,0,0,0,243,236,1,0,0,0,243,238,1,0,0,0,244,37,1,0,0,0,
  	245,246,3,40,20,0,246,39,1,0,0,0,247,248,3,44,22,0,248,249,3,42,21,0,
  	249,41,1,0,0,0,250,251,5,47,0,0,251,254,3,40,20,0,252,254,1,0,0,0,253,
  	250,1,0,0,0,253,252,1,0,0,0,254,43,1,0,0,0,255,256,3,48,24,0,256,257,
  	3,46,23,0,257,45,1,0,0,0,258,259,5,46,0,0,259,262,3,44,22,0,260,262,1,
  	0,0,0,261,258,1,0,0,0,261,260,1,0,0,0,262,47,1,0,0,0,263,264,3,52,26,
  	0,264,265,3,50,25,0,265,49,1,0,0,0,266,267,5,44,0,0,267,270,3,48,24,0,
  	268,270,1,0,0,0,269,266,1,0,0,0,269,268,1,0,0,0,270,51,1,0,0,0,271,272,
  	3,56,28,0,272,273,3,54,27,0,273,53,1,0,0,0,274,275,5,45,0,0,275,278,3,
  	52,26,0,276,278,1,0,0,0,277,274,1,0,0,0,277,276,1,0,0,0,278,55,1,0,0,
  	0,279,280,3,60,30,0,280,281,3,58,29,0,281,57,1,0,0,0,282,283,5,42,0,0,
  	283,286,3,56,28,0,284,286,1,0,0,0,285,282,1,0,0,0,285,284,1,0,0,0,286,
  	59,1,0,0,0,287,288,3,64,32,0,288,289,3,62,31,0,289,61,1,0,0,0,290,291,
  	5,43,0,0,291,294,3,60,30,0,292,294,1,0,0,0,293,290,1,0,0,0,293,292,1,
  	0,0,0,294,63,1,0,0,0,295,296,3,68,34,0,296,297,3,66,33,0,297,65,1,0,0,
  	0,298,299,5,41,0,0,299,302,3,64,32,0,300,302,1,0,0,0,301,298,1,0,0,0,
  	301,300,1,0,0,0,302,67,1,0,0,0,303,304,3,72,36,0,304,305,3,70,35,0,305,
  	69,1,0,0,0,306,307,5,40,0,0,307,310,3,68,34,0,308,310,1,0,0,0,309,306,
  	1,0,0,0,309,308,1,0,0,0,310,71,1,0,0,0,311,312,3,76,38,0,312,313,3,74,
  	37,0,313,73,1,0,0,0,314,315,5,37,0,0,315,318,3,72,36,0,316,318,1,0,0,
  	0,317,314,1,0,0,0,317,316,1,0,0,0,318,75,1,0,0,0,319,320,3,80,40,0,320,
  	321,3,78,39,0,321,77,1,0,0,0,322,323,5,36,0,0,323,326,3,76,38,0,324,326,
  	1,0,0,0,325,322,1,0,0,0,325,324,1,0,0,0,326,79,1,0,0,0,327,328,3,84,42,
  	0,328,329,3,82,41,0,329,81,1,0,0,0,330,331,5,39,0,0,331,334,3,80,40,0,
  	332,334,1,0,0,0,333,330,1,0,0,0,333,332,1,0,0,0,334,83,1,0,0,0,335,336,
  	3,88,44,0,336,337,3,86,43,0,337,85,1,0,0,0,338,339,5,38,0,0,339,342,3,
  	84,42,0,340,342,1,0,0,0,341,338,1,0,0,0,341,340,1,0,0,0,342,87,1,0,0,
  	0,343,351,5,27,0,0,344,345,5,26,0,0,345,351,3,94,47,0,346,347,5,32,0,
  	0,347,348,3,38,19,0,348,349,5,33,0,0,349,351,1,0,0,0,350,343,1,0,0,0,
  	350,344,1,0,0,0,350,346,1,0,0,0,351,89,1,0,0,0,352,357,1,0,0,0,353,354,
  	3,38,19,0,354,355,3,92,46,0,355,357,1,0,0,0,356,352,1,0,0,0,356,353,1,
  	0,0,0,357,91,1,0,0,0,358,359,5,29,0,0,359,360,3,38,19,0,360,361,3,92,
  	46,0,361,364,1,0,0,0,362,364,1,0,0,0,363,358,1,0,0,0,363,362,1,0,0,0,
  	364,93,1,0,0,0,365,366,5,34,0,0,366,367,3,38,19,0,367,368,5,35,0,0,368,
  	375,1,0,0,0,369,370,5,32,0,0,370,371,3,90,45,0,371,372,5,33,0,0,372,375,
  	1,0,0,0,373,375,1,0,0,0,374,365,1,0,0,0,374,369,1,0,0,0,374,373,1,0,0,
  	0,375,95,1,0,0,0,376,377,5,34,0,0,377,378,3,38,19,0,378,379,5,35,0,0,
  	379,382,1,0,0,0,380,382,1,0,0,0,381,376,1,0,0,0,381,380,1,0,0,0,382,97,
  	1,0,0,0,28,113,126,145,150,156,163,168,179,214,225,243,253,261,269,277,
  	285,293,301,309,317,325,333,341,350,356,363,374,381
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
    setState(98);
    match(grimoireParser::MAIN);
    setState(99);
    match(grimoireParser::LET);
    setState(100);
    declarationsegment();
    setState(101);
    match(grimoireParser::IN);
    setState(102);
    match(grimoireParser::BEGIN);
    setState(103);
    statseq();
    setState(104);
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
    setState(106);
    vardeclarationlist();
    setState(107);
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
    setState(113);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::FUNC:
      case grimoireParser::IN: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::VAR: {
        enterOuterAlt(_localctx, 2);
        setState(110);
        vardeclaration();
        setState(111);
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
    setState(115);
    match(grimoireParser::VAR);
    setState(116);
    match(grimoireParser::ID);
    setState(117);
    match(grimoireParser::COLON);
    setState(118);
    type();
    setState(119);
    optionalinit();
    setState(120);
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
    setState(126);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::IN: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::FUNC: {
        enterOuterAlt(_localctx, 2);
        setState(123);
        functdeclaration();
        setState(124);
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

tree::TerminalNode* grimoireParser::FunctdeclarationContext::FUNC() {
  return getToken(grimoireParser::FUNC, 0);
}

tree::TerminalNode* grimoireParser::FunctdeclarationContext::ID() {
  return getToken(grimoireParser::ID, 0);
}

tree::TerminalNode* grimoireParser::FunctdeclarationContext::OPENBRACKET() {
  return getToken(grimoireParser::OPENBRACKET, 0);
}

grimoireParser::ParamlistContext* grimoireParser::FunctdeclarationContext::paramlist() {
  return getRuleContext<grimoireParser::ParamlistContext>(0);
}

tree::TerminalNode* grimoireParser::FunctdeclarationContext::CLOSEBRACKET() {
  return getToken(grimoireParser::CLOSEBRACKET, 0);
}

grimoireParser::RettypeContext* grimoireParser::FunctdeclarationContext::rettype() {
  return getRuleContext<grimoireParser::RettypeContext>(0);
}

tree::TerminalNode* grimoireParser::FunctdeclarationContext::BEGIN() {
  return getToken(grimoireParser::BEGIN, 0);
}

grimoireParser::StatseqContext* grimoireParser::FunctdeclarationContext::statseq() {
  return getRuleContext<grimoireParser::StatseqContext>(0);
}

tree::TerminalNode* grimoireParser::FunctdeclarationContext::END() {
  return getToken(grimoireParser::END, 0);
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
    setState(128);
    match(grimoireParser::FUNC);
    setState(129);
    match(grimoireParser::ID);
    setState(130);
    match(grimoireParser::OPENBRACKET);
    setState(131);
    paramlist();
    setState(132);
    match(grimoireParser::CLOSEBRACKET);
    setState(133);
    rettype();
    setState(134);
    match(grimoireParser::BEGIN);
    setState(135);
    statseq();
    setState(136);
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
  enterRule(_localctx, 12, grimoireParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(145);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(138);
        match(grimoireParser::INT);
        break;
      }

      case grimoireParser::ARRAY: {
        enterOuterAlt(_localctx, 2);
        setState(139);
        match(grimoireParser::ARRAY);
        setState(140);
        match(grimoireParser::OPENSQBRACKET);
        setState(141);
        match(grimoireParser::INTLIT);
        setState(142);
        match(grimoireParser::CLOSESQBRACKET);
        setState(143);
        match(grimoireParser::OF);
        setState(144);
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
  enterRule(_localctx, 14, grimoireParser::RuleOptionalinit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::SEMICOLON: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::ASSIGNMENT: {
        enterOuterAlt(_localctx, 2);
        setState(148);
        match(grimoireParser::ASSIGNMENT);
        setState(149);
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

grimoireParser::ParamContext* grimoireParser::ParamlistContext::param() {
  return getRuleContext<grimoireParser::ParamContext>(0);
}

grimoireParser::ParamlisttailContext* grimoireParser::ParamlistContext::paramlisttail() {
  return getRuleContext<grimoireParser::ParamlisttailContext>(0);
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
  enterRule(_localctx, 16, grimoireParser::RuleParamlist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(156);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::CLOSEBRACKET: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(153);
        param();
        setState(154);
        paramlisttail();
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

//----------------- ParamlisttailContext ------------------------------------------------------------------

grimoireParser::ParamlisttailContext::ParamlisttailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::ParamlisttailContext::COMMA() {
  return getToken(grimoireParser::COMMA, 0);
}

grimoireParser::ParamContext* grimoireParser::ParamlisttailContext::param() {
  return getRuleContext<grimoireParser::ParamContext>(0);
}

grimoireParser::ParamlisttailContext* grimoireParser::ParamlisttailContext::paramlisttail() {
  return getRuleContext<grimoireParser::ParamlisttailContext>(0);
}


size_t grimoireParser::ParamlisttailContext::getRuleIndex() const {
  return grimoireParser::RuleParamlisttail;
}

void grimoireParser::ParamlisttailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamlisttail(this);
}

void grimoireParser::ParamlisttailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamlisttail(this);
}


std::any grimoireParser::ParamlisttailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitParamlisttail(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::ParamlisttailContext* grimoireParser::paramlisttail() {
  ParamlisttailContext *_localctx = _tracker.createInstance<ParamlisttailContext>(_ctx, getState());
  enterRule(_localctx, 18, grimoireParser::RuleParamlisttail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(163);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::CLOSEBRACKET: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::COMMA: {
        enterOuterAlt(_localctx, 2);
        setState(159);
        match(grimoireParser::COMMA);
        setState(160);
        param();
        setState(161);
        paramlisttail();
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
  enterRule(_localctx, 20, grimoireParser::RuleRettype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(168);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::BEGIN: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::COLON: {
        enterOuterAlt(_localctx, 2);
        setState(166);
        match(grimoireParser::COLON);
        setState(167);
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
  enterRule(_localctx, 22, grimoireParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(grimoireParser::ID);
    setState(171);
    match(grimoireParser::COLON);
    setState(172);
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
  enterRule(_localctx, 24, grimoireParser::RuleStatseq);

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
    stat();
    setState(175);
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
  enterRule(_localctx, 26, grimoireParser::RuleStattail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::ELSE:
      case grimoireParser::ENDIF:
      case grimoireParser::END:
      case grimoireParser::ENDDO: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::BREAK:
      case grimoireParser::IF:
      case grimoireParser::FOR:
      case grimoireParser::LET:
      case grimoireParser::WHILE:
      case grimoireParser::RET:
      case grimoireParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(178);
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

tree::TerminalNode* grimoireParser::StatContext::ID() {
  return getToken(grimoireParser::ID, 0);
}

grimoireParser::IdstatContext* grimoireParser::StatContext::idstat() {
  return getRuleContext<grimoireParser::IdstatContext>(0);
}

grimoireParser::CondstatContext* grimoireParser::StatContext::condstat() {
  return getRuleContext<grimoireParser::CondstatContext>(0);
}

tree::TerminalNode* grimoireParser::StatContext::WHILE() {
  return getToken(grimoireParser::WHILE, 0);
}

std::vector<grimoireParser::ExprContext *> grimoireParser::StatContext::expr() {
  return getRuleContexts<grimoireParser::ExprContext>();
}

grimoireParser::ExprContext* grimoireParser::StatContext::expr(size_t i) {
  return getRuleContext<grimoireParser::ExprContext>(i);
}

tree::TerminalNode* grimoireParser::StatContext::DO() {
  return getToken(grimoireParser::DO, 0);
}

grimoireParser::StatseqContext* grimoireParser::StatContext::statseq() {
  return getRuleContext<grimoireParser::StatseqContext>(0);
}

tree::TerminalNode* grimoireParser::StatContext::ENDDO() {
  return getToken(grimoireParser::ENDDO, 0);
}

tree::TerminalNode* grimoireParser::StatContext::SEMICOLON() {
  return getToken(grimoireParser::SEMICOLON, 0);
}

tree::TerminalNode* grimoireParser::StatContext::FOR() {
  return getToken(grimoireParser::FOR, 0);
}

tree::TerminalNode* grimoireParser::StatContext::ASSIGNMENT() {
  return getToken(grimoireParser::ASSIGNMENT, 0);
}

tree::TerminalNode* grimoireParser::StatContext::TO() {
  return getToken(grimoireParser::TO, 0);
}

tree::TerminalNode* grimoireParser::StatContext::BREAK() {
  return getToken(grimoireParser::BREAK, 0);
}

tree::TerminalNode* grimoireParser::StatContext::RET() {
  return getToken(grimoireParser::RET, 0);
}

tree::TerminalNode* grimoireParser::StatContext::LET() {
  return getToken(grimoireParser::LET, 0);
}

grimoireParser::DeclarationsegmentContext* grimoireParser::StatContext::declarationsegment() {
  return getRuleContext<grimoireParser::DeclarationsegmentContext>(0);
}

tree::TerminalNode* grimoireParser::StatContext::IN() {
  return getToken(grimoireParser::IN, 0);
}

tree::TerminalNode* grimoireParser::StatContext::END() {
  return getToken(grimoireParser::END, 0);
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
  enterRule(_localctx, 28, grimoireParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(214);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::ID: {
        enterOuterAlt(_localctx, 1);
        setState(181);
        match(grimoireParser::ID);
        setState(182);
        idstat();
        break;
      }

      case grimoireParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(183);
        condstat();
        break;
      }

      case grimoireParser::WHILE: {
        enterOuterAlt(_localctx, 3);
        setState(184);
        match(grimoireParser::WHILE);
        setState(185);
        expr();
        setState(186);
        match(grimoireParser::DO);
        setState(187);
        statseq();
        setState(188);
        match(grimoireParser::ENDDO);
        setState(189);
        match(grimoireParser::SEMICOLON);
        break;
      }

      case grimoireParser::FOR: {
        enterOuterAlt(_localctx, 4);
        setState(191);
        match(grimoireParser::FOR);
        setState(192);
        match(grimoireParser::ID);
        setState(193);
        match(grimoireParser::ASSIGNMENT);
        setState(194);
        expr();
        setState(195);
        match(grimoireParser::TO);
        setState(196);
        expr();
        setState(197);
        match(grimoireParser::DO);
        setState(198);
        statseq();
        setState(199);
        match(grimoireParser::ENDDO);
        setState(200);
        match(grimoireParser::SEMICOLON);
        break;
      }

      case grimoireParser::BREAK: {
        enterOuterAlt(_localctx, 5);
        setState(202);
        match(grimoireParser::BREAK);
        setState(203);
        match(grimoireParser::SEMICOLON);
        break;
      }

      case grimoireParser::RET: {
        enterOuterAlt(_localctx, 6);
        setState(204);
        match(grimoireParser::RET);
        setState(205);
        expr();
        setState(206);
        match(grimoireParser::SEMICOLON);
        break;
      }

      case grimoireParser::LET: {
        enterOuterAlt(_localctx, 7);
        setState(208);
        match(grimoireParser::LET);
        setState(209);
        declarationsegment();
        setState(210);
        match(grimoireParser::IN);
        setState(211);
        statseq();
        setState(212);
        match(grimoireParser::END);
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

//----------------- IdstatContext ------------------------------------------------------------------

grimoireParser::IdstatContext::IdstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::AssignstatContext* grimoireParser::IdstatContext::assignstat() {
  return getRuleContext<grimoireParser::AssignstatContext>(0);
}

tree::TerminalNode* grimoireParser::IdstatContext::ASSIGNMENT() {
  return getToken(grimoireParser::ASSIGNMENT, 0);
}

grimoireParser::Idstat2Context* grimoireParser::IdstatContext::idstat2() {
  return getRuleContext<grimoireParser::Idstat2Context>(0);
}

tree::TerminalNode* grimoireParser::IdstatContext::OPENBRACKET() {
  return getToken(grimoireParser::OPENBRACKET, 0);
}

grimoireParser::ExprlistContext* grimoireParser::IdstatContext::exprlist() {
  return getRuleContext<grimoireParser::ExprlistContext>(0);
}

tree::TerminalNode* grimoireParser::IdstatContext::CLOSEBRACKET() {
  return getToken(grimoireParser::CLOSEBRACKET, 0);
}

tree::TerminalNode* grimoireParser::IdstatContext::SEMICOLON() {
  return getToken(grimoireParser::SEMICOLON, 0);
}


size_t grimoireParser::IdstatContext::getRuleIndex() const {
  return grimoireParser::RuleIdstat;
}

void grimoireParser::IdstatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdstat(this);
}

void grimoireParser::IdstatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdstat(this);
}


std::any grimoireParser::IdstatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitIdstat(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::IdstatContext* grimoireParser::idstat() {
  IdstatContext *_localctx = _tracker.createInstance<IdstatContext>(_ctx, getState());
  enterRule(_localctx, 30, grimoireParser::RuleIdstat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::OPENSQBRACKET:
      case grimoireParser::ASSIGNMENT: {
        enterOuterAlt(_localctx, 1);
        setState(216);
        assignstat();
        setState(217);
        match(grimoireParser::ASSIGNMENT);
        setState(218);
        idstat2();
        break;
      }

      case grimoireParser::OPENBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(220);
        match(grimoireParser::OPENBRACKET);
        setState(221);
        exprlist();
        setState(222);
        match(grimoireParser::CLOSEBRACKET);
        setState(223);
        match(grimoireParser::SEMICOLON);
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

//----------------- Idstat2Context ------------------------------------------------------------------

grimoireParser::Idstat2Context::Idstat2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::ExprContext* grimoireParser::Idstat2Context::expr() {
  return getRuleContext<grimoireParser::ExprContext>(0);
}

tree::TerminalNode* grimoireParser::Idstat2Context::SEMICOLON() {
  return getToken(grimoireParser::SEMICOLON, 0);
}


size_t grimoireParser::Idstat2Context::getRuleIndex() const {
  return grimoireParser::RuleIdstat2;
}

void grimoireParser::Idstat2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdstat2(this);
}

void grimoireParser::Idstat2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdstat2(this);
}


std::any grimoireParser::Idstat2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitIdstat2(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Idstat2Context* grimoireParser::idstat2() {
  Idstat2Context *_localctx = _tracker.createInstance<Idstat2Context>(_ctx, getState());
  enterRule(_localctx, 32, grimoireParser::RuleIdstat2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    expr();
    setState(228);
    match(grimoireParser::SEMICOLON);
   
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

tree::TerminalNode* grimoireParser::CondstatContext::IF() {
  return getToken(grimoireParser::IF, 0);
}

grimoireParser::ExprContext* grimoireParser::CondstatContext::expr() {
  return getRuleContext<grimoireParser::ExprContext>(0);
}

tree::TerminalNode* grimoireParser::CondstatContext::THEN() {
  return getToken(grimoireParser::THEN, 0);
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
  enterRule(_localctx, 34, grimoireParser::RuleCondstat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    match(grimoireParser::IF);
    setState(231);
    expr();
    setState(232);
    match(grimoireParser::THEN);
    setState(233);
    statseq();
    setState(234);
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

tree::TerminalNode* grimoireParser::CondstattailContext::ENDIF() {
  return getToken(grimoireParser::ENDIF, 0);
}

tree::TerminalNode* grimoireParser::CondstattailContext::SEMICOLON() {
  return getToken(grimoireParser::SEMICOLON, 0);
}

tree::TerminalNode* grimoireParser::CondstattailContext::ELSE() {
  return getToken(grimoireParser::ELSE, 0);
}

grimoireParser::StatseqContext* grimoireParser::CondstattailContext::statseq() {
  return getRuleContext<grimoireParser::StatseqContext>(0);
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
  enterRule(_localctx, 36, grimoireParser::RuleCondstattail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(243);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::ENDIF: {
        enterOuterAlt(_localctx, 1);
        setState(236);
        match(grimoireParser::ENDIF);
        setState(237);
        match(grimoireParser::SEMICOLON);
        break;
      }

      case grimoireParser::ELSE: {
        enterOuterAlt(_localctx, 2);
        setState(238);
        match(grimoireParser::ELSE);
        setState(239);
        statseq();
        setState(240);
        match(grimoireParser::ENDIF);
        setState(241);
        match(grimoireParser::SEMICOLON);
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

//----------------- ExprContext ------------------------------------------------------------------

grimoireParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Logicoperation1Context* grimoireParser::ExprContext::logicoperation1() {
  return getRuleContext<grimoireParser::Logicoperation1Context>(0);
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
  enterRule(_localctx, 38, grimoireParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    logicoperation1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logicoperation1Context ------------------------------------------------------------------

grimoireParser::Logicoperation1Context::Logicoperation1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Logicoperation2Context* grimoireParser::Logicoperation1Context::logicoperation2() {
  return getRuleContext<grimoireParser::Logicoperation2Context>(0);
}

grimoireParser::Logicoperationtail1Context* grimoireParser::Logicoperation1Context::logicoperationtail1() {
  return getRuleContext<grimoireParser::Logicoperationtail1Context>(0);
}


size_t grimoireParser::Logicoperation1Context::getRuleIndex() const {
  return grimoireParser::RuleLogicoperation1;
}

void grimoireParser::Logicoperation1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicoperation1(this);
}

void grimoireParser::Logicoperation1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicoperation1(this);
}


std::any grimoireParser::Logicoperation1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitLogicoperation1(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Logicoperation1Context* grimoireParser::logicoperation1() {
  Logicoperation1Context *_localctx = _tracker.createInstance<Logicoperation1Context>(_ctx, getState());
  enterRule(_localctx, 40, grimoireParser::RuleLogicoperation1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    logicoperation2();
    setState(248);
    logicoperationtail1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logicoperationtail1Context ------------------------------------------------------------------

grimoireParser::Logicoperationtail1Context::Logicoperationtail1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Logicoperationtail1Context::OR() {
  return getToken(grimoireParser::OR, 0);
}

grimoireParser::Logicoperation1Context* grimoireParser::Logicoperationtail1Context::logicoperation1() {
  return getRuleContext<grimoireParser::Logicoperation1Context>(0);
}


size_t grimoireParser::Logicoperationtail1Context::getRuleIndex() const {
  return grimoireParser::RuleLogicoperationtail1;
}

void grimoireParser::Logicoperationtail1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicoperationtail1(this);
}

void grimoireParser::Logicoperationtail1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicoperationtail1(this);
}


std::any grimoireParser::Logicoperationtail1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitLogicoperationtail1(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Logicoperationtail1Context* grimoireParser::logicoperationtail1() {
  Logicoperationtail1Context *_localctx = _tracker.createInstance<Logicoperationtail1Context>(_ctx, getState());
  enterRule(_localctx, 42, grimoireParser::RuleLogicoperationtail1);

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
    switch (_input->LA(1)) {
      case grimoireParser::OR: {
        enterOuterAlt(_localctx, 1);
        setState(250);
        match(grimoireParser::OR);
        setState(251);
        logicoperation1();
        break;
      }

      case grimoireParser::DO:
      case grimoireParser::THEN:
      case grimoireParser::TO:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET: {
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

//----------------- Logicoperation2Context ------------------------------------------------------------------

grimoireParser::Logicoperation2Context::Logicoperation2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Compoperation1Context* grimoireParser::Logicoperation2Context::compoperation1() {
  return getRuleContext<grimoireParser::Compoperation1Context>(0);
}

grimoireParser::Logicoperationtail2Context* grimoireParser::Logicoperation2Context::logicoperationtail2() {
  return getRuleContext<grimoireParser::Logicoperationtail2Context>(0);
}


size_t grimoireParser::Logicoperation2Context::getRuleIndex() const {
  return grimoireParser::RuleLogicoperation2;
}

void grimoireParser::Logicoperation2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicoperation2(this);
}

void grimoireParser::Logicoperation2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicoperation2(this);
}


std::any grimoireParser::Logicoperation2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitLogicoperation2(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Logicoperation2Context* grimoireParser::logicoperation2() {
  Logicoperation2Context *_localctx = _tracker.createInstance<Logicoperation2Context>(_ctx, getState());
  enterRule(_localctx, 44, grimoireParser::RuleLogicoperation2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    compoperation1();
    setState(256);
    logicoperationtail2();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Logicoperationtail2Context ------------------------------------------------------------------

grimoireParser::Logicoperationtail2Context::Logicoperationtail2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Logicoperationtail2Context::AND() {
  return getToken(grimoireParser::AND, 0);
}

grimoireParser::Logicoperation2Context* grimoireParser::Logicoperationtail2Context::logicoperation2() {
  return getRuleContext<grimoireParser::Logicoperation2Context>(0);
}


size_t grimoireParser::Logicoperationtail2Context::getRuleIndex() const {
  return grimoireParser::RuleLogicoperationtail2;
}

void grimoireParser::Logicoperationtail2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicoperationtail2(this);
}

void grimoireParser::Logicoperationtail2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicoperationtail2(this);
}


std::any grimoireParser::Logicoperationtail2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitLogicoperationtail2(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Logicoperationtail2Context* grimoireParser::logicoperationtail2() {
  Logicoperationtail2Context *_localctx = _tracker.createInstance<Logicoperationtail2Context>(_ctx, getState());
  enterRule(_localctx, 46, grimoireParser::RuleLogicoperationtail2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(261);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::AND: {
        enterOuterAlt(_localctx, 1);
        setState(258);
        match(grimoireParser::AND);
        setState(259);
        logicoperation2();
        break;
      }

      case grimoireParser::DO:
      case grimoireParser::THEN:
      case grimoireParser::TO:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET:
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

//----------------- Compoperation1Context ------------------------------------------------------------------

grimoireParser::Compoperation1Context::Compoperation1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Compoperation2Context* grimoireParser::Compoperation1Context::compoperation2() {
  return getRuleContext<grimoireParser::Compoperation2Context>(0);
}

grimoireParser::Compoperationtail1Context* grimoireParser::Compoperation1Context::compoperationtail1() {
  return getRuleContext<grimoireParser::Compoperationtail1Context>(0);
}


size_t grimoireParser::Compoperation1Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperation1;
}

void grimoireParser::Compoperation1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperation1(this);
}

void grimoireParser::Compoperation1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperation1(this);
}


std::any grimoireParser::Compoperation1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperation1(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperation1Context* grimoireParser::compoperation1() {
  Compoperation1Context *_localctx = _tracker.createInstance<Compoperation1Context>(_ctx, getState());
  enterRule(_localctx, 48, grimoireParser::RuleCompoperation1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    compoperation2();
    setState(264);
    compoperationtail1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compoperationtail1Context ------------------------------------------------------------------

grimoireParser::Compoperationtail1Context::Compoperationtail1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Compoperationtail1Context::LESSEQUAL() {
  return getToken(grimoireParser::LESSEQUAL, 0);
}

grimoireParser::Compoperation1Context* grimoireParser::Compoperationtail1Context::compoperation1() {
  return getRuleContext<grimoireParser::Compoperation1Context>(0);
}


size_t grimoireParser::Compoperationtail1Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperationtail1;
}

void grimoireParser::Compoperationtail1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperationtail1(this);
}

void grimoireParser::Compoperationtail1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperationtail1(this);
}


std::any grimoireParser::Compoperationtail1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperationtail1(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperationtail1Context* grimoireParser::compoperationtail1() {
  Compoperationtail1Context *_localctx = _tracker.createInstance<Compoperationtail1Context>(_ctx, getState());
  enterRule(_localctx, 50, grimoireParser::RuleCompoperationtail1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(269);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::LESSEQUAL: {
        enterOuterAlt(_localctx, 1);
        setState(266);
        match(grimoireParser::LESSEQUAL);
        setState(267);
        compoperation1();
        break;
      }

      case grimoireParser::DO:
      case grimoireParser::THEN:
      case grimoireParser::TO:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET:
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

//----------------- Compoperation2Context ------------------------------------------------------------------

grimoireParser::Compoperation2Context::Compoperation2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Compoperation3Context* grimoireParser::Compoperation2Context::compoperation3() {
  return getRuleContext<grimoireParser::Compoperation3Context>(0);
}

grimoireParser::Compoperationtail2Context* grimoireParser::Compoperation2Context::compoperationtail2() {
  return getRuleContext<grimoireParser::Compoperationtail2Context>(0);
}


size_t grimoireParser::Compoperation2Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperation2;
}

void grimoireParser::Compoperation2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperation2(this);
}

void grimoireParser::Compoperation2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperation2(this);
}


std::any grimoireParser::Compoperation2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperation2(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperation2Context* grimoireParser::compoperation2() {
  Compoperation2Context *_localctx = _tracker.createInstance<Compoperation2Context>(_ctx, getState());
  enterRule(_localctx, 52, grimoireParser::RuleCompoperation2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    compoperation3();
    setState(272);
    compoperationtail2();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compoperationtail2Context ------------------------------------------------------------------

grimoireParser::Compoperationtail2Context::Compoperationtail2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Compoperationtail2Context::GREATEQUAL() {
  return getToken(grimoireParser::GREATEQUAL, 0);
}

grimoireParser::Compoperation2Context* grimoireParser::Compoperationtail2Context::compoperation2() {
  return getRuleContext<grimoireParser::Compoperation2Context>(0);
}


size_t grimoireParser::Compoperationtail2Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperationtail2;
}

void grimoireParser::Compoperationtail2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperationtail2(this);
}

void grimoireParser::Compoperationtail2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperationtail2(this);
}


std::any grimoireParser::Compoperationtail2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperationtail2(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperationtail2Context* grimoireParser::compoperationtail2() {
  Compoperationtail2Context *_localctx = _tracker.createInstance<Compoperationtail2Context>(_ctx, getState());
  enterRule(_localctx, 54, grimoireParser::RuleCompoperationtail2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(277);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::GREATEQUAL: {
        enterOuterAlt(_localctx, 1);
        setState(274);
        match(grimoireParser::GREATEQUAL);
        setState(275);
        compoperation2();
        break;
      }

      case grimoireParser::DO:
      case grimoireParser::THEN:
      case grimoireParser::TO:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET:
      case grimoireParser::LESSEQUAL:
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

//----------------- Compoperation3Context ------------------------------------------------------------------

grimoireParser::Compoperation3Context::Compoperation3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Compoperation4Context* grimoireParser::Compoperation3Context::compoperation4() {
  return getRuleContext<grimoireParser::Compoperation4Context>(0);
}

grimoireParser::Compoperationtail3Context* grimoireParser::Compoperation3Context::compoperationtail3() {
  return getRuleContext<grimoireParser::Compoperationtail3Context>(0);
}


size_t grimoireParser::Compoperation3Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperation3;
}

void grimoireParser::Compoperation3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperation3(this);
}

void grimoireParser::Compoperation3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperation3(this);
}


std::any grimoireParser::Compoperation3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperation3(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperation3Context* grimoireParser::compoperation3() {
  Compoperation3Context *_localctx = _tracker.createInstance<Compoperation3Context>(_ctx, getState());
  enterRule(_localctx, 56, grimoireParser::RuleCompoperation3);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    compoperation4();
    setState(280);
    compoperationtail3();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compoperationtail3Context ------------------------------------------------------------------

grimoireParser::Compoperationtail3Context::Compoperationtail3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Compoperationtail3Context::LESS() {
  return getToken(grimoireParser::LESS, 0);
}

grimoireParser::Compoperation3Context* grimoireParser::Compoperationtail3Context::compoperation3() {
  return getRuleContext<grimoireParser::Compoperation3Context>(0);
}


size_t grimoireParser::Compoperationtail3Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperationtail3;
}

void grimoireParser::Compoperationtail3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperationtail3(this);
}

void grimoireParser::Compoperationtail3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperationtail3(this);
}


std::any grimoireParser::Compoperationtail3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperationtail3(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperationtail3Context* grimoireParser::compoperationtail3() {
  Compoperationtail3Context *_localctx = _tracker.createInstance<Compoperationtail3Context>(_ctx, getState());
  enterRule(_localctx, 58, grimoireParser::RuleCompoperationtail3);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(285);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::LESS: {
        enterOuterAlt(_localctx, 1);
        setState(282);
        match(grimoireParser::LESS);
        setState(283);
        compoperation3();
        break;
      }

      case grimoireParser::DO:
      case grimoireParser::THEN:
      case grimoireParser::TO:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET:
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

//----------------- Compoperation4Context ------------------------------------------------------------------

grimoireParser::Compoperation4Context::Compoperation4Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Compoperation5Context* grimoireParser::Compoperation4Context::compoperation5() {
  return getRuleContext<grimoireParser::Compoperation5Context>(0);
}

grimoireParser::Compoperationtail4Context* grimoireParser::Compoperation4Context::compoperationtail4() {
  return getRuleContext<grimoireParser::Compoperationtail4Context>(0);
}


size_t grimoireParser::Compoperation4Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperation4;
}

void grimoireParser::Compoperation4Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperation4(this);
}

void grimoireParser::Compoperation4Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperation4(this);
}


std::any grimoireParser::Compoperation4Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperation4(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperation4Context* grimoireParser::compoperation4() {
  Compoperation4Context *_localctx = _tracker.createInstance<Compoperation4Context>(_ctx, getState());
  enterRule(_localctx, 60, grimoireParser::RuleCompoperation4);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    compoperation5();
    setState(288);
    compoperationtail4();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compoperationtail4Context ------------------------------------------------------------------

grimoireParser::Compoperationtail4Context::Compoperationtail4Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Compoperationtail4Context::GREAT() {
  return getToken(grimoireParser::GREAT, 0);
}

grimoireParser::Compoperation4Context* grimoireParser::Compoperationtail4Context::compoperation4() {
  return getRuleContext<grimoireParser::Compoperation4Context>(0);
}


size_t grimoireParser::Compoperationtail4Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperationtail4;
}

void grimoireParser::Compoperationtail4Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperationtail4(this);
}

void grimoireParser::Compoperationtail4Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperationtail4(this);
}


std::any grimoireParser::Compoperationtail4Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperationtail4(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperationtail4Context* grimoireParser::compoperationtail4() {
  Compoperationtail4Context *_localctx = _tracker.createInstance<Compoperationtail4Context>(_ctx, getState());
  enterRule(_localctx, 62, grimoireParser::RuleCompoperationtail4);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(293);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::GREAT: {
        enterOuterAlt(_localctx, 1);
        setState(290);
        match(grimoireParser::GREAT);
        setState(291);
        compoperation4();
        break;
      }

      case grimoireParser::DO:
      case grimoireParser::THEN:
      case grimoireParser::TO:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET:
      case grimoireParser::LESS:
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

//----------------- Compoperation5Context ------------------------------------------------------------------

grimoireParser::Compoperation5Context::Compoperation5Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Compoperation6Context* grimoireParser::Compoperation5Context::compoperation6() {
  return getRuleContext<grimoireParser::Compoperation6Context>(0);
}

grimoireParser::Compoperationtail5Context* grimoireParser::Compoperation5Context::compoperationtail5() {
  return getRuleContext<grimoireParser::Compoperationtail5Context>(0);
}


size_t grimoireParser::Compoperation5Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperation5;
}

void grimoireParser::Compoperation5Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperation5(this);
}

void grimoireParser::Compoperation5Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperation5(this);
}


std::any grimoireParser::Compoperation5Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperation5(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperation5Context* grimoireParser::compoperation5() {
  Compoperation5Context *_localctx = _tracker.createInstance<Compoperation5Context>(_ctx, getState());
  enterRule(_localctx, 64, grimoireParser::RuleCompoperation5);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    compoperation6();
    setState(296);
    compoperationtail5();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compoperationtail5Context ------------------------------------------------------------------

grimoireParser::Compoperationtail5Context::Compoperationtail5Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Compoperationtail5Context::NOTEQUAL() {
  return getToken(grimoireParser::NOTEQUAL, 0);
}

grimoireParser::Compoperation5Context* grimoireParser::Compoperationtail5Context::compoperation5() {
  return getRuleContext<grimoireParser::Compoperation5Context>(0);
}


size_t grimoireParser::Compoperationtail5Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperationtail5;
}

void grimoireParser::Compoperationtail5Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperationtail5(this);
}

void grimoireParser::Compoperationtail5Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperationtail5(this);
}


std::any grimoireParser::Compoperationtail5Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperationtail5(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperationtail5Context* grimoireParser::compoperationtail5() {
  Compoperationtail5Context *_localctx = _tracker.createInstance<Compoperationtail5Context>(_ctx, getState());
  enterRule(_localctx, 66, grimoireParser::RuleCompoperationtail5);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(301);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::NOTEQUAL: {
        enterOuterAlt(_localctx, 1);
        setState(298);
        match(grimoireParser::NOTEQUAL);
        setState(299);
        compoperation5();
        break;
      }

      case grimoireParser::DO:
      case grimoireParser::THEN:
      case grimoireParser::TO:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET:
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

//----------------- Compoperation6Context ------------------------------------------------------------------

grimoireParser::Compoperation6Context::Compoperation6Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Sumoperation1Context* grimoireParser::Compoperation6Context::sumoperation1() {
  return getRuleContext<grimoireParser::Sumoperation1Context>(0);
}

grimoireParser::Compoperationtail6Context* grimoireParser::Compoperation6Context::compoperationtail6() {
  return getRuleContext<grimoireParser::Compoperationtail6Context>(0);
}


size_t grimoireParser::Compoperation6Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperation6;
}

void grimoireParser::Compoperation6Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperation6(this);
}

void grimoireParser::Compoperation6Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperation6(this);
}


std::any grimoireParser::Compoperation6Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperation6(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperation6Context* grimoireParser::compoperation6() {
  Compoperation6Context *_localctx = _tracker.createInstance<Compoperation6Context>(_ctx, getState());
  enterRule(_localctx, 68, grimoireParser::RuleCompoperation6);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    sumoperation1();
    setState(304);
    compoperationtail6();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compoperationtail6Context ------------------------------------------------------------------

grimoireParser::Compoperationtail6Context::Compoperationtail6Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Compoperationtail6Context::EQUAL() {
  return getToken(grimoireParser::EQUAL, 0);
}

grimoireParser::Compoperation6Context* grimoireParser::Compoperationtail6Context::compoperation6() {
  return getRuleContext<grimoireParser::Compoperation6Context>(0);
}


size_t grimoireParser::Compoperationtail6Context::getRuleIndex() const {
  return grimoireParser::RuleCompoperationtail6;
}

void grimoireParser::Compoperationtail6Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoperationtail6(this);
}

void grimoireParser::Compoperationtail6Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoperationtail6(this);
}


std::any grimoireParser::Compoperationtail6Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitCompoperationtail6(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Compoperationtail6Context* grimoireParser::compoperationtail6() {
  Compoperationtail6Context *_localctx = _tracker.createInstance<Compoperationtail6Context>(_ctx, getState());
  enterRule(_localctx, 70, grimoireParser::RuleCompoperationtail6);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(309);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::EQUAL: {
        enterOuterAlt(_localctx, 1);
        setState(306);
        match(grimoireParser::EQUAL);
        setState(307);
        compoperation6();
        break;
      }

      case grimoireParser::DO:
      case grimoireParser::THEN:
      case grimoireParser::TO:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET:
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

//----------------- Sumoperation1Context ------------------------------------------------------------------

grimoireParser::Sumoperation1Context::Sumoperation1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Sumoperation2Context* grimoireParser::Sumoperation1Context::sumoperation2() {
  return getRuleContext<grimoireParser::Sumoperation2Context>(0);
}

grimoireParser::Sumoperationtail1Context* grimoireParser::Sumoperation1Context::sumoperationtail1() {
  return getRuleContext<grimoireParser::Sumoperationtail1Context>(0);
}


size_t grimoireParser::Sumoperation1Context::getRuleIndex() const {
  return grimoireParser::RuleSumoperation1;
}

void grimoireParser::Sumoperation1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSumoperation1(this);
}

void grimoireParser::Sumoperation1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSumoperation1(this);
}


std::any grimoireParser::Sumoperation1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitSumoperation1(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Sumoperation1Context* grimoireParser::sumoperation1() {
  Sumoperation1Context *_localctx = _tracker.createInstance<Sumoperation1Context>(_ctx, getState());
  enterRule(_localctx, 72, grimoireParser::RuleSumoperation1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    sumoperation2();
    setState(312);
    sumoperationtail1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sumoperationtail1Context ------------------------------------------------------------------

grimoireParser::Sumoperationtail1Context::Sumoperationtail1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Sumoperationtail1Context::SUB() {
  return getToken(grimoireParser::SUB, 0);
}

grimoireParser::Sumoperation1Context* grimoireParser::Sumoperationtail1Context::sumoperation1() {
  return getRuleContext<grimoireParser::Sumoperation1Context>(0);
}


size_t grimoireParser::Sumoperationtail1Context::getRuleIndex() const {
  return grimoireParser::RuleSumoperationtail1;
}

void grimoireParser::Sumoperationtail1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSumoperationtail1(this);
}

void grimoireParser::Sumoperationtail1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSumoperationtail1(this);
}


std::any grimoireParser::Sumoperationtail1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitSumoperationtail1(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Sumoperationtail1Context* grimoireParser::sumoperationtail1() {
  Sumoperationtail1Context *_localctx = _tracker.createInstance<Sumoperationtail1Context>(_ctx, getState());
  enterRule(_localctx, 74, grimoireParser::RuleSumoperationtail1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(317);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::SUB: {
        enterOuterAlt(_localctx, 1);
        setState(314);
        match(grimoireParser::SUB);
        setState(315);
        sumoperation1();
        break;
      }

      case grimoireParser::DO:
      case grimoireParser::THEN:
      case grimoireParser::TO:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET:
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

//----------------- Sumoperation2Context ------------------------------------------------------------------

grimoireParser::Sumoperation2Context::Sumoperation2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Multoperation1Context* grimoireParser::Sumoperation2Context::multoperation1() {
  return getRuleContext<grimoireParser::Multoperation1Context>(0);
}

grimoireParser::Sumoperationtail2Context* grimoireParser::Sumoperation2Context::sumoperationtail2() {
  return getRuleContext<grimoireParser::Sumoperationtail2Context>(0);
}


size_t grimoireParser::Sumoperation2Context::getRuleIndex() const {
  return grimoireParser::RuleSumoperation2;
}

void grimoireParser::Sumoperation2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSumoperation2(this);
}

void grimoireParser::Sumoperation2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSumoperation2(this);
}


std::any grimoireParser::Sumoperation2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitSumoperation2(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Sumoperation2Context* grimoireParser::sumoperation2() {
  Sumoperation2Context *_localctx = _tracker.createInstance<Sumoperation2Context>(_ctx, getState());
  enterRule(_localctx, 76, grimoireParser::RuleSumoperation2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
    multoperation1();
    setState(320);
    sumoperationtail2();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sumoperationtail2Context ------------------------------------------------------------------

grimoireParser::Sumoperationtail2Context::Sumoperationtail2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Sumoperationtail2Context::ADD() {
  return getToken(grimoireParser::ADD, 0);
}

grimoireParser::Sumoperation2Context* grimoireParser::Sumoperationtail2Context::sumoperation2() {
  return getRuleContext<grimoireParser::Sumoperation2Context>(0);
}


size_t grimoireParser::Sumoperationtail2Context::getRuleIndex() const {
  return grimoireParser::RuleSumoperationtail2;
}

void grimoireParser::Sumoperationtail2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSumoperationtail2(this);
}

void grimoireParser::Sumoperationtail2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSumoperationtail2(this);
}


std::any grimoireParser::Sumoperationtail2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitSumoperationtail2(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Sumoperationtail2Context* grimoireParser::sumoperationtail2() {
  Sumoperationtail2Context *_localctx = _tracker.createInstance<Sumoperationtail2Context>(_ctx, getState());
  enterRule(_localctx, 78, grimoireParser::RuleSumoperationtail2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(325);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::ADD: {
        enterOuterAlt(_localctx, 1);
        setState(322);
        match(grimoireParser::ADD);
        setState(323);
        sumoperation2();
        break;
      }

      case grimoireParser::DO:
      case grimoireParser::THEN:
      case grimoireParser::TO:
      case grimoireParser::COMMA:
      case grimoireParser::SEMICOLON:
      case grimoireParser::CLOSEBRACKET:
      case grimoireParser::CLOSESQBRACKET:
      case grimoireParser::SUB:
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

//----------------- Multoperation1Context ------------------------------------------------------------------

grimoireParser::Multoperation1Context::Multoperation1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::Multoperation2Context* grimoireParser::Multoperation1Context::multoperation2() {
  return getRuleContext<grimoireParser::Multoperation2Context>(0);
}

grimoireParser::Multoperationtail1Context* grimoireParser::Multoperation1Context::multoperationtail1() {
  return getRuleContext<grimoireParser::Multoperationtail1Context>(0);
}


size_t grimoireParser::Multoperation1Context::getRuleIndex() const {
  return grimoireParser::RuleMultoperation1;
}

void grimoireParser::Multoperation1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultoperation1(this);
}

void grimoireParser::Multoperation1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultoperation1(this);
}


std::any grimoireParser::Multoperation1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitMultoperation1(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Multoperation1Context* grimoireParser::multoperation1() {
  Multoperation1Context *_localctx = _tracker.createInstance<Multoperation1Context>(_ctx, getState());
  enterRule(_localctx, 80, grimoireParser::RuleMultoperation1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    multoperation2();
    setState(328);
    multoperationtail1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multoperationtail1Context ------------------------------------------------------------------

grimoireParser::Multoperationtail1Context::Multoperationtail1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Multoperationtail1Context::DIV() {
  return getToken(grimoireParser::DIV, 0);
}

grimoireParser::Multoperation1Context* grimoireParser::Multoperationtail1Context::multoperation1() {
  return getRuleContext<grimoireParser::Multoperation1Context>(0);
}


size_t grimoireParser::Multoperationtail1Context::getRuleIndex() const {
  return grimoireParser::RuleMultoperationtail1;
}

void grimoireParser::Multoperationtail1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultoperationtail1(this);
}

void grimoireParser::Multoperationtail1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultoperationtail1(this);
}


std::any grimoireParser::Multoperationtail1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitMultoperationtail1(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Multoperationtail1Context* grimoireParser::multoperationtail1() {
  Multoperationtail1Context *_localctx = _tracker.createInstance<Multoperationtail1Context>(_ctx, getState());
  enterRule(_localctx, 82, grimoireParser::RuleMultoperationtail1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(333);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::DIV: {
        enterOuterAlt(_localctx, 1);
        setState(330);
        match(grimoireParser::DIV);
        setState(331);
        multoperation1();
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

//----------------- Multoperation2Context ------------------------------------------------------------------

grimoireParser::Multoperation2Context::Multoperation2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::TermContext* grimoireParser::Multoperation2Context::term() {
  return getRuleContext<grimoireParser::TermContext>(0);
}

grimoireParser::Multoperationtail2Context* grimoireParser::Multoperation2Context::multoperationtail2() {
  return getRuleContext<grimoireParser::Multoperationtail2Context>(0);
}


size_t grimoireParser::Multoperation2Context::getRuleIndex() const {
  return grimoireParser::RuleMultoperation2;
}

void grimoireParser::Multoperation2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultoperation2(this);
}

void grimoireParser::Multoperation2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultoperation2(this);
}


std::any grimoireParser::Multoperation2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitMultoperation2(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Multoperation2Context* grimoireParser::multoperation2() {
  Multoperation2Context *_localctx = _tracker.createInstance<Multoperation2Context>(_ctx, getState());
  enterRule(_localctx, 84, grimoireParser::RuleMultoperation2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    term();
    setState(336);
    multoperationtail2();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multoperationtail2Context ------------------------------------------------------------------

grimoireParser::Multoperationtail2Context::Multoperationtail2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::Multoperationtail2Context::MULT() {
  return getToken(grimoireParser::MULT, 0);
}

grimoireParser::Multoperation2Context* grimoireParser::Multoperationtail2Context::multoperation2() {
  return getRuleContext<grimoireParser::Multoperation2Context>(0);
}


size_t grimoireParser::Multoperationtail2Context::getRuleIndex() const {
  return grimoireParser::RuleMultoperationtail2;
}

void grimoireParser::Multoperationtail2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultoperationtail2(this);
}

void grimoireParser::Multoperationtail2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultoperationtail2(this);
}


std::any grimoireParser::Multoperationtail2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitMultoperationtail2(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::Multoperationtail2Context* grimoireParser::multoperationtail2() {
  Multoperationtail2Context *_localctx = _tracker.createInstance<Multoperationtail2Context>(_ctx, getState());
  enterRule(_localctx, 86, grimoireParser::RuleMultoperationtail2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(341);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::MULT: {
        enterOuterAlt(_localctx, 1);
        setState(338);
        match(grimoireParser::MULT);
        setState(339);
        multoperation2();
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
  enterRule(_localctx, 88, grimoireParser::RuleTerm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(350);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::INTLIT: {
        enterOuterAlt(_localctx, 1);
        setState(343);
        match(grimoireParser::INTLIT);
        break;
      }

      case grimoireParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(344);
        match(grimoireParser::ID);
        setState(345);
        lvaluetail();
        break;
      }

      case grimoireParser::OPENBRACKET: {
        enterOuterAlt(_localctx, 3);
        setState(346);
        match(grimoireParser::OPENBRACKET);
        setState(347);
        expr();
        setState(348);
        match(grimoireParser::CLOSEBRACKET);
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

//----------------- ExprlistContext ------------------------------------------------------------------

grimoireParser::ExprlistContext::ExprlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

grimoireParser::ExprContext* grimoireParser::ExprlistContext::expr() {
  return getRuleContext<grimoireParser::ExprContext>(0);
}

grimoireParser::ExprlisttailContext* grimoireParser::ExprlistContext::exprlisttail() {
  return getRuleContext<grimoireParser::ExprlisttailContext>(0);
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
  enterRule(_localctx, 90, grimoireParser::RuleExprlist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(356);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::CLOSEBRACKET: {
        enterOuterAlt(_localctx, 1);

        break;
      }

      case grimoireParser::ID:
      case grimoireParser::INTLIT:
      case grimoireParser::OPENBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(353);
        expr();
        setState(354);
        exprlisttail();
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

//----------------- ExprlisttailContext ------------------------------------------------------------------

grimoireParser::ExprlisttailContext::ExprlisttailContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::ExprlisttailContext::COMMA() {
  return getToken(grimoireParser::COMMA, 0);
}

grimoireParser::ExprContext* grimoireParser::ExprlisttailContext::expr() {
  return getRuleContext<grimoireParser::ExprContext>(0);
}

grimoireParser::ExprlisttailContext* grimoireParser::ExprlisttailContext::exprlisttail() {
  return getRuleContext<grimoireParser::ExprlisttailContext>(0);
}


size_t grimoireParser::ExprlisttailContext::getRuleIndex() const {
  return grimoireParser::RuleExprlisttail;
}

void grimoireParser::ExprlisttailContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprlisttail(this);
}

void grimoireParser::ExprlisttailContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<grimoireListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprlisttail(this);
}


std::any grimoireParser::ExprlisttailContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<grimoireVisitor*>(visitor))
    return parserVisitor->visitExprlisttail(this);
  else
    return visitor->visitChildren(this);
}

grimoireParser::ExprlisttailContext* grimoireParser::exprlisttail() {
  ExprlisttailContext *_localctx = _tracker.createInstance<ExprlisttailContext>(_ctx, getState());
  enterRule(_localctx, 92, grimoireParser::RuleExprlisttail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(363);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::COMMA: {
        enterOuterAlt(_localctx, 1);
        setState(358);
        match(grimoireParser::COMMA);
        setState(359);
        expr();
        setState(360);
        exprlisttail();
        break;
      }

      case grimoireParser::CLOSEBRACKET: {
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

tree::TerminalNode* grimoireParser::LvaluetailContext::OPENBRACKET() {
  return getToken(grimoireParser::OPENBRACKET, 0);
}

grimoireParser::ExprlistContext* grimoireParser::LvaluetailContext::exprlist() {
  return getRuleContext<grimoireParser::ExprlistContext>(0);
}

tree::TerminalNode* grimoireParser::LvaluetailContext::CLOSEBRACKET() {
  return getToken(grimoireParser::CLOSEBRACKET, 0);
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
  enterRule(_localctx, 94, grimoireParser::RuleLvaluetail);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(374);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::OPENSQBRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(365);
        match(grimoireParser::OPENSQBRACKET);
        setState(366);
        expr();
        setState(367);
        match(grimoireParser::CLOSESQBRACKET);
        break;
      }

      case grimoireParser::OPENBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(369);
        match(grimoireParser::OPENBRACKET);
        setState(370);
        exprlist();
        setState(371);
        match(grimoireParser::CLOSEBRACKET);
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
      case grimoireParser::OR: {
        enterOuterAlt(_localctx, 3);

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

//----------------- AssignstatContext ------------------------------------------------------------------

grimoireParser::AssignstatContext::AssignstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* grimoireParser::AssignstatContext::OPENSQBRACKET() {
  return getToken(grimoireParser::OPENSQBRACKET, 0);
}

grimoireParser::ExprContext* grimoireParser::AssignstatContext::expr() {
  return getRuleContext<grimoireParser::ExprContext>(0);
}

tree::TerminalNode* grimoireParser::AssignstatContext::CLOSESQBRACKET() {
  return getToken(grimoireParser::CLOSESQBRACKET, 0);
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
  enterRule(_localctx, 96, grimoireParser::RuleAssignstat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(381);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case grimoireParser::OPENSQBRACKET: {
        enterOuterAlt(_localctx, 1);
        setState(376);
        match(grimoireParser::OPENSQBRACKET);
        setState(377);
        expr();
        setState(378);
        match(grimoireParser::CLOSESQBRACKET);
        break;
      }

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
