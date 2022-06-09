#pragma once

#include <list>
#include "antlr4-runtime.h"
#include "antlr-generated/grimoireLexer.h"
#include "antlr-generated/grimoireParser.h"
#include "antlr-generated/grimoireBaseVisitor.h"

#include "symtab.h"
#include "compiler.h"


class grimoireSymbolFactory {
public:
    grimoireSymbolFactory(const Compiler *compiler) : compiler(compiler) {}

public:
    std::shared_ptr<Symbol> create(antlrcppgrim::grimoireParser::VardeclarationContext* ctx);
    std::shared_ptr<Symbol> create(antlrcppgrim::grimoireParser::FunctdeclarationContext* ctx);
    std::shared_ptr<Symbol> create(antlrcppgrim::grimoireParser::LocaldeclarationContext* ctx);

    static std::string replace(std::string str, const std::string& from, const std::string& to) {
        size_t start_pos = 0;
        while((start_pos = str.find(from, start_pos)) != std::string::npos) {
            str.replace(start_pos, from.length(), to);
            start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
        }
        return str;
    }
private:
    const Compiler* compiler;
    bool is_number(const std::string& s)
    {
        return !s.empty() && std::find_if(s.begin(),
                                          s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
    }
};


class grimoireDeclarationVisitor : public grimoireCompilerVisitor {

public:
    grimoireDeclarationVisitor(const std::string &filename, const Compiler *compiler);

    antlrcpp::Any visitVardeclaration(antlrcppgrim::grimoireParser::VardeclarationContext *ctx) override;
    antlrcpp::Any visitFunctdeclaration(antlrcppgrim::grimoireParser::FunctdeclarationContext *ctx) override;

private:
    std::shared_ptr<grimoireSymbolFactory> symbolFactory;

    std::shared_ptr<Symbol> parseSymbol(antlrcppgrim::grimoireParser::VardeclarationContext *ctx);
    std::shared_ptr<Symbol> parseSubroutine(antlrcppgrim::grimoireParser::FunctdeclarationContext* ctx);

};