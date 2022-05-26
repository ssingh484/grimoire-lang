#pragma once

#include "antlr4-runtime.h"
#include "antlr-generated/grimoireLexer.h"
#include "antlr-generated/grimoireParser.h"
#include "antlr-generated/grimoireBaseVisitor.h"
#include "symtab.h"

class Compiler {

public:
    Compiler() {
        this->emitDebugInfo = false;
        this->ast = std::make_shared<AST>();
        this->symbolTable = std::make_shared<SymbolTable>();
    }

    int compile(void);
    void addSource(const char* filename);
    void readSource(const std::string  &filename,std::string &file_contents);

    void setEmitDebugInfo(bool enable) { emitDebugInfo = enable; }
    std::string getFilename(const std::string filename) {
        size_t i = filename.rfind('/', filename.length());
        if (i != std::string::npos) {
            return filename.substr(i+1, filename.length() - i);
        }
        return filename;
    }
private:
    bool emitDebugInfo;                         /* Generate debug information */
    std::list<std::string> sources;             /* List of source filenames to compile */
    std::shared_ptr<SymbolTable> symbolTable;   /* Symbol Table */
    std::shared_ptr<AST> ast;                   /* Abstract Syntax Tree */

    friend class grimoireDeclarationVisitor;
    // friend class grimoireCodeVisitor;
    friend class grimoireVisitor;
};

class grimoireCompilerVisitor : public antlrcppgrim::grimoireBaseVisitor {
public:

    grimoireCompilerVisitor(const std::string filename, const Compiler *compiler) : filename(filename), compiler(compiler) { }
    
protected:
    const Compiler* compiler;
    const std::string filename;

    // bool is_number(const std::string& s) {
    //     std::string tmp = s;
    //     tmp = trim(tmp);
    //     return !tmp.empty() && std::find_if(tmp.begin(),
    //                                         tmp.end(), [](unsigned char c) { return !std::isdigit(c); }) == tmp.end();
    // }

    // inline std::string &ltrim(std::string &s) {
    //     s.erase(s.begin(), std::find_if(s.begin(), s.end(),
    //                                     std::not1(std::ptr_fun<int, int>(std::isspace))));
    //     return s;
    // }

    // inline std::string &rtrim(std::string &s) {
    //     s.erase(std::find_if(s.rbegin(), s.rend(),
    //                          std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
    //     return s;
    // }

    // inline std::string &trim(std::string &s) {
    //     return ltrim(rtrim(s));
    // }
};
