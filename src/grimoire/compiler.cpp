#include <iostream>
#include <memory>

#include "antlr4-runtime.h"
#include "antlr-generated/grimoireLexer.h"
#include "antlr-generated/grimoireParser.h"
#include "compiler.h"
#include "declaration.h"
#include "parser.h"
#include "generator.h"

void Compiler::addSource(const char* filename) {
    this->sources.push_back(filename);
}

void Compiler::readSource(const std::string  &filename,std::string &file_contents)  {
    std::string str;
    std::ifstream stream;

    stream.open(filename);
    std::string m = filename;

    /*  read the input line by line to avoid any linux/windows/mac newline problem */
    while (getline(stream, str))
    {
       // Pad the string
       if(str.size() < 80)
           str.append( 80 - str.size(), ' ');
       file_contents += str;
       file_contents.push_back('\n');
    }

    stream.close();
}
int Compiler::compile() {
    std::string file_contents;

    for (std::string const& file: this->sources) {
        std::cout << "Compiling file:" << file << "\n";
        readSource(file,file_contents);

        antlr4::ANTLRInputStream input(file_contents);

        std::cout << "Made Input Stream" <<  "\n";

        antlrcppgrim::grimoireLexer lexer(&input);

        std::cout << "Made Lexer" <<  "\n";

        antlr4::CommonTokenStream tokens(&lexer);

        std::cout << "Made Token Stream" <<  "\n";

        antlrcppgrim::grimoireParser parser(&tokens);

        std::cout << "Made Parser" <<  "\n";

        // parser.removeErrorListeners();

        antlrcppgrim::grimoireParser::GrimoireContext *tree = parser.grimoire();
        // antlrcppgrim::grimoireParser::TermContext *tree = parser.term();

        std::cout << "Parsed into Tree" <<  "\n";

        std::cout << tree->toStringTree(&parser) << std::endl << std::endl;
        // First Pass parse declarations
        grimoireDeclarationVisitor declarationVisitor(file, this);
        declarationVisitor.visit(tree);
        symbolTable->dump();
        // symbolTable->resolve();

        // Second  Pass parse statements
        grimoireCodeVisitor codeVisitor(file, this);
        codeVisitor.visit(tree);
        codeVisitor.dump();

        // Code Generation
        GeneratorLLVM *generator =  new GeneratorLLVM(file);
        generator->process(symbolTable,ast);
        generator->dump();

    }
    return 0;

}