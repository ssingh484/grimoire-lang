
// Generated from grimoire.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcppgrim {


class  grimoireLexer : public antlr4::Lexer {
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
