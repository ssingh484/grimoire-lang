
// Generated from grimoire.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcppgrim {


class  grimoireLexer : public antlr4::Lexer {
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

  explicit grimoireLexer(antlr4::CharStream *input);

  ~grimoireLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace antlrcppgrim
