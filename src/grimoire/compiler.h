#pragma once

#include "antlr4-runtime.h"
#include "antlr-generated/grimoireLexer.h"
#include "antlr-generated/grimoireParser.h"
#include "antlr-generated/grimoireBaseVisitor.h"
#include "symtab.h"

class Compiler {

public:
    Compiler() {
        this->ast = std::make_shared<AST>();
        this->symbolTable = std::make_shared<SymbolTable>();
    }

    int compile(void);
    void addSource(const char* filename);
    void readSource(const std::string  &filename,std::string &file_contents);

    std::string getFilename(const std::string filename) {
        size_t i = filename.rfind('/', filename.length());
        if (i != std::string::npos) {
            return filename.substr(i+1, filename.length() - i);
        }
        return filename;
    }
private:
    std::list<std::string> sources;             /* List of source filenames to compile */
    std::shared_ptr<SymbolTable> symbolTable;   /* Symbol Table */
    std::shared_ptr<AST> ast;                   /* Abstract Syntax Tree */

    friend class grimoireDeclarationVisitor;
    friend class grimoireCodeVisitor;
    friend class grimoireCompilerVisitor;
};

class grimoireCompilerVisitor : public antlrcppgrim::grimoireBaseVisitor {
public:

    grimoireCompilerVisitor(const std::string filename, const Compiler *compiler) : filename(filename), compiler(compiler) { }

    std::shared_ptr<Expression> parseExpression(antlrcppgrim::grimoireParser::ExprContext *ctx) {
        
        if (ctx->MULT() || ctx->DIV() || ctx->ADD() || ctx->SUB())
        {
            std::string op = ctx->ADD() ? ctx->ADD()->getText() :
                            ctx->SUB() ? ctx->SUB()->getText() :
                            ctx->MULT() ? ctx->MULT()->getText() :
                            ctx->DIV() ? ctx->DIV()->getText() : "";

            std::shared_ptr<Expression> left_sub_exp = parseExpression(ctx->term());
            std::shared_ptr<Expression> right_sub_exp = parseExpression(ctx->expr());
            return MathExpression::create(left_sub_exp, op, right_sub_exp, ctx->getStart()->getLine());
        } else if (ctx->EQUAL() || ctx->NOTEQUAL() || ctx->GREAT() || ctx->LESS() || ctx->GREATEQUAL() || ctx->LESSEQUAL())
        {
            std::string op = ctx->EQUAL() ? ctx->EQUAL()->getText() :
                            ctx->NOTEQUAL() ? ctx->NOTEQUAL()->getText() :
                            ctx->GREAT() ? ctx->GREAT()->getText() :
                            ctx->LESS() ? ctx->LESS()->getText() : 
                            ctx->GREATEQUAL() ? ctx->GREATEQUAL()->getText() : 
                            ctx->LESSEQUAL() ? ctx->LESSEQUAL()->getText() : "";

            std::shared_ptr<Expression> left_sub_exp = parseExpression(ctx->term());
            std::shared_ptr<Expression> right_sub_exp = parseExpression(ctx->expr());
            return ComparisonExpression::create(left_sub_exp, op, right_sub_exp, ctx->getStart()->getLine());
        } else if (ctx->AND() || ctx->OR())
        {
            std::string op = ctx->AND() ? ctx->AND()->getText() :
                            ctx->OR() ? ctx->OR()->getText() : "";

            std::shared_ptr<Expression> left_sub_exp = parseExpression(ctx->term());
            std::shared_ptr<Expression> right_sub_exp = parseExpression(ctx->expr());
            return LogicalExpression::create(left_sub_exp, op, right_sub_exp, ctx->getStart()->getLine());
        } else if (ctx->NOT())
        {
            std::string op = ctx->NOT() ? ctx->NOT()->getText() : "";
            std::shared_ptr<Expression> target = parseExpression(ctx->expr());
            return UnaryExpression::create(target, op, ctx->getStart()->getLine());
        } else
        {
            
            return parseExpression(ctx->term());
            
        }
        
        
    }

    std::shared_ptr<Expression> parseExpression(antlrcppgrim::grimoireParser::TermContext *ctx) {
        if (ctx->INTLIT())
        {
            return IntegerLiteral::create(ctx->INTLIT()->getText(), ctx->getStart()->getLine());
        } else if (ctx->ID())
        {
            if (ctx->lvaluetail()->OPENSQBRACKET())
            {
                std::string name = ctx->ID()->getText();
                std::shared_ptr<Symbol> symbol =  this->compiler->symbolTable->get(name);
                if (symbol)
                {
                    std::shared_ptr<Identifier> var = Identifier::create(name, ctx->getStart()->getLine());
                    std::shared_ptr<Expression> index = parseExpression(ctx->lvaluetail()->expr());
                    return ArrayIdentifier::create(var, index, ctx->getStart()->getLine());
                } else {
                    std::cout << "UNIDENTIFIED SYMBOL: " << name;
                    exit(-1);
                    return nullptr;
                }
            } else {
                std::string name = ctx->ID()->getText();
                std::shared_ptr<Symbol> symbol =  this->compiler->symbolTable->get(name);
                if (symbol)
                {
                    return Identifier::create(name, ctx->getStart()->getLine());
                } else {
                    std::cout << "UNIDENTIFIED SYMBOL: " << name;
                    exit(-1);
                    return nullptr;
                }
            }   
        } else if (ctx->funcexpr())
        {
            std::vector<std::shared_ptr<Expression>> args;
            if (! ctx->funcexpr()->exprlist()->expr().empty())
            {
                
                for ( auto expr_context : ctx->funcexpr()->exprlist()->expr())
                {
                    args.push_back(grimoireCompilerVisitor::parseExpression(expr_context));
                    
                    // call->add(arg);
                    // std::cout << "Processing Arg: " << call->getArgs().size() <<std::endl;
                }
                
            }
            return FunctionCall::create(trim(ctx->funcexpr()->ID()->getText()), args, ctx->getStart()->getLine());
        }  else
        {
            return parseExpression(ctx->expr());
        }


    }
    
protected:
    const Compiler* compiler;
    const std::string filename;

    
    inline std::string &ltrim(std::string &s)
    {
        auto it = std::find_if(s.begin(), s.end(),
                        [](char c) {
                            return !std::isspace(c);
                        });
        s.erase(s.begin(), it);
        return s;
    }
    
    inline std::string &rtrim(std::string &s)
    {
        auto it = std::find_if(s.rbegin(), s.rend(),
                        [](char c) {
                            return !std::isspace(c);
                        });
        s.erase(it.base(), s.end());
        return s;
    }
    
    inline std::string &trim(std::string &s) {
        return ltrim(rtrim(s));
    }

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
