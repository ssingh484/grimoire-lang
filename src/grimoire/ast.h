#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include <llvm/IR/Module.h>

class Symbol;
class AST;
class IntegerLiteral;
class DecimalLiteral;
class StringLiteral;
class Identifier;
class ArrayIdentifier;
class MathExpression;
class ComparisonExpression;
class LogicalExpression;
class UnaryExpression;
class Statement;
class ConditionalClause;
class ForStatement;
class FunctionDeclaration;
class FunctionCall;
class AssignmentStatement;
class DisplayStatement;


class Generator {
public:
    virtual void declare(Symbol *) = 0;
    virtual llvm::Value* visit(IntegerLiteral *integer,void *param) =0;
    // virtual llvm::Value* visit(DecimalLiteral *decimal,void *param) =0;
    // virtual llvm::Value* visit(StringLiteral *string,void *param) =0;
    virtual llvm::Value* visit(Identifier *string,void *param) =0;
    virtual llvm::Value* visit(ArrayIdentifier *string,void *param) =0;
    virtual llvm::Value* visit(MathExpression *expression,void *param) =0;
    virtual llvm::Value* visit(Statement *statement,void *param) =0;
    virtual llvm::Value* visit(ConditionalClause *select,void *param) =0;
    virtual llvm::Value* visit(ForStatement *loop,void *param) =0;
    virtual llvm::Value* visit(FunctionDeclaration *subroutine,void *param) =0;
    virtual llvm::Value* visit(FunctionCall *subroutine,void *param) =0;
    virtual llvm::Value* visit(AssignmentStatement *assignment,void *param) = 0;
    virtual llvm::Value* visit(ComparisonExpression *expression,void *param) =0;
    virtual llvm::Value *visit(LogicalExpression *expression,void *param)  = 0;
    virtual llvm::Value *visit(UnaryExpression *expression,void *param)  = 0;
};

class Token {
public:
    enum Type {
        INT,
        SYMBOL,
        ARR,
        SUBROUTINE,
        ASSIGNMENT,
        CALLS,
        SELECT,
        WHEN,
        OTHER,
        FOR,
        PLUS,MINUS,MULTIPLY,DIVIDE,
        EQUAL,LT,GT,LE,GE,NE,
        AND,OR,NOT,
        RETURN
    };

    Token(Type type, const std::string &text) : _type(type), _text(text) {}
    Type getType() const { return _type; }

    const std::string &getValue() const { return _text; }
    const std::string &toString() const { return _text; }

private:
    Type _type;
    std::string _text;
};

class Node {
public:
    Node(int line, const Token &token) : _line(line), _token(token) {}

    int getLine() const { return _line; }
    Token::Type getType() const { return _token.getType(); }
    const std::string &getValue() const { return _token.getValue(); }
    virtual  std::string toString() { return _token.toString(); }

    void addNode(std::shared_ptr<Node> node) { nodes.push_back(node); }

    const std::vector<std::shared_ptr<Node>> &getNodes() const { return nodes; }

    virtual llvm::Value *accept(Generator *v, void *param = nullptr) = 0;

private:
    int _line;
    Token _token;
    std::vector<std::shared_ptr<Node>>  nodes;

};

class Expression : public Node {
public:
    Expression(int line, const Token &token) : Node(line, token) {}
    
    llvm::Value *accept(Generator *v, void *param = nullptr) = 0;

};


class ComparisonExpression : public Expression {

public:
    ComparisonExpression(int line, const Token &token, const std::shared_ptr<Expression> left,
                    const std::shared_ptr<Expression> right) : Expression(line,
                                                                                token),
                                                                     _left(left),
                                                                     _right(right) {}

    static std::shared_ptr<ComparisonExpression> create(std::shared_ptr<Expression> left,
                                                   std::string op,
                                                   std::shared_ptr<Expression> right,
                                                   int line = 0) {
        if(op == "=") {
            Token token(Token::EQUAL,  "=" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }
        if(op == "<") {
            Token token(Token::LT,  "<" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }
        if(op == ">") {
            Token token(Token::GT,  ">" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }
        if(op == "<=") {
            Token token(Token::LE,  "<=" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }
        if(op == ">=") {
            Token token(Token::GE,  ">=" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }
         if(op == "<>") {
            Token token(Token::NE,  "<>" );
            return std::make_shared<ComparisonExpression>(line, token, left, right);
        }
        fprintf(stderr,"Invalid Comparison operation %s",op.c_str());
        return nullptr;

    }

    const std::shared_ptr<Expression> &getLeft() const {
        return _left;
    }

    const std::shared_ptr<Expression> &getRight() const {
        return _right;
    }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); }

    std::string toString() override {
        return this->_left->toString() + this->getValue() + this->_right->toString();
    }
private:
    std::shared_ptr<Expression> _left;
    std::shared_ptr<Expression> _right;
};

class MathExpression : public Expression {
public:
    MathExpression(int line, const Token &token, const std::shared_ptr<Expression> left,
                   const std::shared_ptr<Expression> right) : Expression(line,
                                                                        token),
                                                                   _left(left),
                                                                   _right(right) {
    }

    static std::shared_ptr<MathExpression> create(std::shared_ptr<Expression> left,
                                                  std::string op,
                                                  std::shared_ptr<Expression> right,
                                                  int line = 0) {

        if(op == "+") {
            Token token(Token::PLUS,  "+" );
            return std::make_shared<MathExpression>(line, token, left, right);
        }
        if(op == "-") {
            Token token(Token::MINUS,  "-" );
            return std::make_shared<MathExpression>(line, token, left, right);
        }
        if(op == "*") {
            Token token(Token::MULTIPLY,  "*" );
            return std::make_shared<MathExpression>(line, token, left, right);
        }
        if(op == "/") {
            Token token(Token::DIVIDE,  "/" );
            return std::make_shared<MathExpression>(line, token, left, right);
        }
        fprintf(stderr,"Invalid Math operation %s",op.c_str());
        return nullptr;

    }

    const std::shared_ptr<Expression> &getLeft() const {
        return _left;
    }

    const std::shared_ptr<Expression> &getRight() const {
        return _right;
    }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); }

    std::string toString() override {
        return this->_left->toString() + this->getValue() + this->_right->toString();
    }

private:
    std::shared_ptr<Expression> _left;
    std::shared_ptr<Expression> _right;
};

class LogicalExpression : public Expression {
public:
    LogicalExpression(int line, const Token &token, const std::shared_ptr<Expression> left,
                   const std::shared_ptr<Expression> right) : Expression(line,
                                                                        token),
                                                                   _left(left),
                                                                   _right(right) {
    }

    static std::shared_ptr<LogicalExpression> create(std::shared_ptr<Expression> left,
                                                  std::string op,
                                                  std::shared_ptr<Expression> right,
                                                  int line = 0) {

        if(op == "&") {
            Token token(Token::AND,  "&" );
            return std::make_shared<LogicalExpression>(line, token, left, right);
        }
        if(op == "|") {
            Token token(Token::OR,  "|" );
            return std::make_shared<LogicalExpression>(line, token, left, right);
        }
        fprintf(stderr,"Invalid Logical operation %s",op.c_str());
        return nullptr;

    }

    const std::shared_ptr<Expression> &getLeft() const {
        return _left;
    }

    const std::shared_ptr<Expression> &getRight() const {
        return _right;
    }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); }

    std::string toString() override {
        return this->_left->toString() + this->getValue() + this->_right->toString();
    }

private:
    std::shared_ptr<Expression> _left;
    std::shared_ptr<Expression> _right;
};

class UnaryExpression : public Expression {
public:
    UnaryExpression(int line, const Token &token, const std::shared_ptr<Expression> target) : Expression(line,
                                                                        token),
                                                                   _target(target) {
    }

    static std::shared_ptr<UnaryExpression> create(std::shared_ptr<Expression> target,
                                                  std::string op,
                                                  int line = 0) {

        
        if(op == "~") {
            Token token(Token::NOT,  "~" );
            return std::make_shared<UnaryExpression>(line, token, target);
        }
        fprintf(stderr,"Invalid Logical operation %s",op.c_str());
        return nullptr;

    }

    const std::shared_ptr<Expression> &getTarget() const {
        return _target;
    }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); }

    std::string toString() override {
        return this->getValue() + this->_target->toString();
    }

private:
    std::shared_ptr<Expression> _target;
};

class IntegerLiteral : public Expression {
public:
    IntegerLiteral(int line, const Token &token) : Expression(line, token) {}

    static std::shared_ptr<IntegerLiteral> create(std::string text, int line = 0) {
        Token token(Token::INT, text);
        return std::make_shared<IntegerLiteral>(line, token);
    }
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); };
private:
};

class Identifier : public Expression {
public:
    Identifier(int line, const Token &token) : Expression(line, token) {}

    static std::shared_ptr<Identifier> create(std::string name, int line = 0) {
        Token token(Token::SYMBOL, name);
        return std::make_shared<Identifier>(line, token);
    }
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); }
};

class ArrayIdentifier : public Expression {
public:
    ArrayIdentifier(int line, std::shared_ptr<Identifier> var, std::shared_ptr<Expression> index, const Token &token) : Expression(line, token), _var(var), _index(index) {}

    static std::shared_ptr<ArrayIdentifier> create(std::shared_ptr<Identifier> var, std::shared_ptr<Expression> index, int line = 0) {
        Token token(Token::ARR, var->getValue()+"["+index->getValue()+"]");
        return std::make_shared<ArrayIdentifier>(line, var, index, token);
    }
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return v->visit(this,param); }

    const std::shared_ptr<Identifier> &getVar() const {
        return _var;
    }

    const std::shared_ptr<Expression> &getIndex() const {
        return _index;
    }

    std::string toString() override {
        return this->getValue();
    }

private:
    std::shared_ptr<Identifier> _var;
    std::shared_ptr<Expression> _index;
};

class Statement : public Node {
public:
    Statement(int line, const Token &token) : Node(line, token) {}
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }
};

class FunctionDeclaration : public  Expression {
public:
    FunctionDeclaration(int line, const Token &token, const std::string &name) : Expression(line, token), _name(name){}
    static std::shared_ptr<FunctionDeclaration> create(std::string name, int line = 0) {
        Token token(Token::SUBROUTINE , name);
        return std::make_shared<FunctionDeclaration>(line, token, name);
    }
    void add(std::shared_ptr<Expression> param) {
        _params.push_back(param);
    }
    const std::string &getName() const { return _name; }
    const std::vector<std::shared_ptr<Expression>> &getParams() const { return _params; }
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }
    bool isMAIN() { return this->_name == "main"; }
private:
    std::vector<std::shared_ptr<Expression>> _params;
    std::string _name;
};

class FunctionCall : public Expression {
public:
    FunctionCall(int line, const Token &token, const std::string &name) : Expression(line, token), _name(name) {}

    static std::shared_ptr<FunctionCall> create(std::string name,int line = 0) {
        Token token(Token::CALLS , name);
        return std::make_shared<FunctionCall>(line,token,name);
    }
    void add(std::shared_ptr<Expression> arg) {
        _args.push_back(arg);
    }
    const std::string &getName() const { return _name; }
    const std::vector<std::shared_ptr<Expression>> &getArgs() const { return _args; }
    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }

    std::string toString() override {
        return this->getValue();
    }

private:
    std::vector<std::shared_ptr<Expression>> _args;
    std::string _name;
};

class AssignmentStatement : public Statement {
public:
    AssignmentStatement(int line, const Token &token, const std::shared_ptr<Expression> &target,
                        const std::shared_ptr<Expression> &expression) : Statement(line, token),
                                                                         _target(target),
                                                                         _expression(expression) {}

    static std::shared_ptr<AssignmentStatement> create(std::shared_ptr<Expression> target,std::shared_ptr<Expression> expression,int line = 0) {
        Token token(Token::ASSIGNMENT , target->getValue());
        return std::make_shared<AssignmentStatement>(line,token,target,expression);
    }

    const std::shared_ptr<Expression> &getTarget() const { return _target;}
    const std::shared_ptr<Expression> &getExpression() const { return _expression; }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }

    std::string toString() override {
        return this->_target->getValue() + " = " + _expression->toString();
    }

private:
    std::shared_ptr<Expression> _target;
    std::shared_ptr<Expression>  _expression;
};

class ReturnStatement : public Statement {
public:
    ReturnStatement(int line, const Token &token,
                        const std::shared_ptr<Expression> &expression) : Statement(line, token),
                                                                         _expression(expression) {}

    static std::shared_ptr<ReturnStatement> create(std::shared_ptr<Expression> expression,int line = 0) {
        Token token(Token::RETURN , expression->getValue());
        return std::make_shared<ReturnStatement>(line,token,expression);
    }

    const std::shared_ptr<Expression> &getExpression() const { return _expression; }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }

    std::string toString() override {
        return " RETURN " + _expression->toString();
    }

private:
    std::shared_ptr<Expression>  _expression;
};


class IfClause : public Statement {
public:
    IfClause(int line, const Token &token, const std::shared_ptr<Expression> &expression)
            : Statement(line, token), _expression(expression) {}

    static std::shared_ptr<IfClause> create(std::shared_ptr<Expression> expression, int line = 0) {
        Token token(Token::WHEN ,"WHEN");
        return std::make_shared<IfClause>(line, token, expression);
    }

    const std::shared_ptr<Expression> &getExpression() const { return _expression; }

    std::string toString() override {
        return this->_expression->toString();
    }

private:
    std::shared_ptr<Expression>  _expression;


};
class ElseClause : public Statement {
public:
    ElseClause(int line, const Token &token) : Statement(line, token) {}
    static std::shared_ptr<ElseClause> create(int line = 0) {
        Token token(Token::OTHER ,"OTHER");
        return std::make_shared<ElseClause>(line, token);
    }

};

class ConditionalClause : public Statement {
public:
    ConditionalClause(int line, const Token &token) : Statement(line, token) {}

    static std::shared_ptr<ConditionalClause> create(int line = 0) {
        Token token(Token::SELECT , "SELECT");
        return std::make_shared<ConditionalClause>(line,token);
    }
    void    add(std::shared_ptr<IfClause> when) {
        _when.push_back(when);
    }

    const std::vector<std::shared_ptr<IfClause>> &getWhen() const { return _when; }
    const std::shared_ptr<ElseClause> &getOther() const { return _other; }

    void setOther(const std::shared_ptr<ElseClause> &other) { _other = other; }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }

    std::string toString() override {
        return this->getValue();
    }

private:
    std::vector<std::shared_ptr<IfClause>>   _when;
    std::shared_ptr<ElseClause> _other;
};

class ForStatement : public Statement {
public:
    ForStatement(int line, const Token &token, const std::shared_ptr<AssignmentStatement> &start,
                               const std::shared_ptr<Expression> &end) : Statement(
            line, token), _start(start), _end(end) {

    }

    static std::shared_ptr<ForStatement> create( const std::shared_ptr<AssignmentStatement> &start,
                 const std::shared_ptr<Expression> &end, int line = 0) {

        Token token(Token::FOR,"FOR");
        return std::make_shared<ForStatement>(line,token,start,end);
    }

    const std::shared_ptr<AssignmentStatement> &getStart() const { return _start; }

    const std::shared_ptr<Expression> &getEnd() const { return _end; }

    std::string toString() override {
        return _start->toString() + " TO " + _end->toString();
    }

    llvm::Value *accept(Generator *v, void *param = nullptr) override { return  v->visit(this,param); }

private:
    std::shared_ptr<AssignmentStatement>  _start;
    std::shared_ptr<Expression>  _end;
};

class AST {
public:
    AST() {}

    void add(std::shared_ptr<Node> node) {
        nodes.push_back(node);
    }

    const std::vector<std::shared_ptr<Node>> &getNodes() const {
        return nodes;
    }

private:
    std::vector<std::shared_ptr<Node>> nodes;
};