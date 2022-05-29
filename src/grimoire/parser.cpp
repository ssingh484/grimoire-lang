#include "antlr4-runtime.h"
#include "antlr-generated/grimoireParser.h"
#include "parser.h"



grimoireCodeVisitor::grimoireCodeVisitor(const std::string &filename, const Compiler *compiler) : grimoireCompilerVisitor(
        filename, compiler) {}

/**
 * Parse the compilation unit
 * Pushes the main function in the scopeStack
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireCodeVisitor::visitGrimoire(antlrcppgrim::grimoireParser::GrimoireContext *ctx) {
    std::cout << "----- Processing code statements -----";
    std::shared_ptr<FunctionDeclaration> subroutine = FunctionDeclaration::create("main");
    scopeStack.push(subroutine);

    return antlrcppgrim::grimoireBaseVisitor::visitGrimoire(ctx);
}

/**
 * Parse a function call
 * Adds a FunctionCall node to the AST
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireCodeVisitor::visitFunccall(antlrcppgrim::grimoireParser::FunccallContext *ctx) {
    /* Function Name */
    std::string name = ctx->ID() ? ctx->ID()->getText() : "";
    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : FUNC_CALL " << trim(name);

    std::shared_ptr<FunctionCall> call =  FunctionCall::create(trim(name),ctx->getStart()->getLine());

    if (! ctx->exprlist()->expr().empty())
    {
        for ( auto expr_context : ctx->exprlist()->expr())
        {
            std::shared_ptr<Expression> arg = grimoireCompilerVisitor::parseExpression(expr_context);
            call->add(arg);
        }
        
    }
    

    addNode(call);

    return antlrcppgrim::grimoireBaseVisitor::visitFunccall(ctx);
}

/**
 * Parse an begin function statement (beginfunc)
 * Adds a FunctionDeclaration instance to the scopeStack
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireCodeVisitor::visitBeginfunc(antlrcppgrim::grimoireParser::BeginfuncContext *ctx) {
    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : BEGIN_FUNCTION " <<  ctx->ID()->getText();

    std::shared_ptr<Node> main = scopeStack.top();
    scopeStack.pop();
    addNode(main);

    /* Function Name */
    std::string name =  ctx->ID()->getText();

    std::shared_ptr<FunctionDeclaration> subroutine = FunctionDeclaration::create(name,ctx->getStart()->getLine());
    scopeStack.push(subroutine);

    return antlrcppgrim::grimoireBaseVisitor::visitBeginfunc(ctx);
}
/**
 * Parse the end function statement (endfunc)
 * Adds  FunctionDeclaration node to the AST
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireCodeVisitor::visitEndfunc(antlrcppgrim::grimoireParser::EndfuncContext *ctx) {
    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : END_FUNCTION ";

    if(scopeStack.size() > 0) {
        std::shared_ptr<Node> fun = scopeStack.top();
        scopeStack.pop();
        addNode(fun);
    }
    return antlrcppgrim::grimoireBaseVisitor::visitEndfunc(ctx);
}

/**
 * Parse an assigment statement (assignstat)
 * Adds  AssignmentStatement node to the AST
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireCodeVisitor::visitAssignstat(antlrcppgrim::grimoireParser::AssignstatContext *ctx) {
    std::string rvalue = ctx->expr() ? ctx->expr()->getText() : "";
    std::string lvalue = ctx->lvaluetail()->OPENSQBRACKET() ? ctx->ID()->getText()+"["+ctx->expr()->getText()+"]" : ctx->ID()->getText();
    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ") : ASSIGN " << lvalue << " = " << rvalue;

    if(ctx->ID()) {

        std::string var_name = ctx->ID()->getText();
        std::shared_ptr<Symbol> symbol =  this->compiler->symbolTable->get(var_name);
        if(!symbol) {
            std::cout << " UNDEFINED identifier: " << var_name;
            return nullptr;
        }

        if (ctx->lvaluetail()->OPENSQBRACKET())
        {
            std::string name = ctx->ID()->getText();
            std::shared_ptr<Symbol> symbol =  this->compiler->symbolTable->get(name);
            if (symbol)
            {
                std::shared_ptr<Identifier> var = Identifier::create(name, ctx->getStart()->getLine());
                std::shared_ptr<Expression> index = grimoireCompilerVisitor::parseExpression(ctx->lvaluetail()->expr());
                std::shared_ptr<Expression> target = ArrayIdentifier::create(var, index, ctx->getStart()->getLine());

                std::shared_ptr<Expression> expression = grimoireCompilerVisitor::parseExpression(ctx->expr());

                std::shared_ptr<AssignmentStatement> assignment = AssignmentStatement::create(target, expression, ctx->getStart()->getLine());
                addNode(assignment);
            } else {
                std::cout << "UNIDENTIFIED SYMBOL: " << name;
                return nullptr;
            }
        } else {
            std::string name = ctx->ID()->getText();
            std::shared_ptr<Symbol> symbol =  this->compiler->symbolTable->get(name);
            if (symbol)
            {
                std::shared_ptr<Expression> target = Identifier::create(name, ctx->getStart()->getLine());

                std::shared_ptr<Expression> expression = grimoireCompilerVisitor::parseExpression(ctx->expr());

                std::shared_ptr<AssignmentStatement> assignment = AssignmentStatement::create(target, expression, ctx->getStart()->getLine());
                addNode(assignment);
            } else {
                std::cout << "UNIDENTIFIED SYMBOL: " << name;
                return nullptr;
            }
        } 

        // std::shared_ptr<Expression> target;

        // std::shared_ptr<Expression> expression = grimoireCompilerVisitor::parseExpression(ctx->expr());

        // std::shared_ptr<AssignmentStatement> assignment = AssignmentStatement::create(target_exp, expression, ctx->getStart()->getLine());
        // addNode(assignment);
    }

    return antlrcppgrim::grimoireBaseVisitor::visitAssignstat(ctx);
}

/**
 * Parse a conditional statement (condstat)
 * Pushes  the ConditionalClause into the scopeStack
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireCodeVisitor::visitCondstat(antlrcppgrim::grimoireParser::CondstatContext *ctx) {
    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : CONDITIONAL ";

    std::shared_ptr<ConditionalClause> cond_node = ConditionalClause::create(ctx->getStart()->getLine());
    scopeStack.push(cond_node);
    return antlrcppgrim::grimoireBaseVisitor::visitCondstat(ctx);

}
/**
 * Parse an when condition (WHEN)
 * Add the IfClause to the current ConditionalClause
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireCodeVisitor::visitIfcond(antlrcppgrim::grimoireParser::IfcondContext *ctx) {
    std::string cond = ctx->expr() ? ctx->expr()->getText() : "";
    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : IF " <<  cond ;

    std::shared_ptr<Expression> expression = grimoireCompilerVisitor::parseExpression(ctx->expr());
    std::shared_ptr<IfClause> if_node = IfClause::create(expression, ctx->expr()->getStart()->getLine());

    /* Get the conditional clause from the scopeStack stack and add the if_node condition */
    if(ConditionalClause* cond_node = dynamic_cast<ConditionalClause*>(scopeStack.top().get())) {
        cond_node->add(if_node);
        scopeStack.push(if_node);
    }

    return antlrcppgrim::grimoireBaseVisitor::visitIfcond(ctx);
}

/**
 * Parse an else condition
 * Add the ElseClause to the current ConditionalClause
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireCodeVisitor::visitElsecond(antlrcppgrim::grimoireParser::ElsecondContext *ctx) {
    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : ELSE ";

    std::shared_ptr<ElseClause> else_node = ElseClause::create(ctx->getStart()->getLine());

    /* Removes the last if so that the conditional clause is at top of the stack */
    if(IfClause* v = dynamic_cast<IfClause*>(scopeStack.top().get())) {
        scopeStack.pop();
    }
    /* Get the conditional clause from the scopeStack stack and add the else condition to it*/
    if(ConditionalClause* cond_node = dynamic_cast<ConditionalClause*>(scopeStack.top().get())) {
        cond_node->setOther(else_node);
        scopeStack.push(else_node);
    }

    return antlrcppgrim::grimoireBaseVisitor::visitElsecond(ctx);
}

/**
 * Process the endcondstat ending this conditional
 * Adds the current ConditionalClause to the AST
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireCodeVisitor::visitEndcondstat(antlrcppgrim::grimoireParser::EndcondstatContext *ctx) {
    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : END_CONDITIONAL ";

    /* Get the if statement from the scopeStack stack or the else condition */
    if(dynamic_cast<IfClause*>(scopeStack.top().get()) || dynamic_cast<ElseClause*>(scopeStack.top().get())) {
        scopeStack.pop();
    }

    if(scopeStack.size() > 0) {
        std::shared_ptr<Node> cond_node = scopeStack.top();
        scopeStack.pop();
        addNode(cond_node);
    }
    return antlrcppgrim::grimoireBaseVisitor::visitEndcondstat(ctx);
}


/**
 * Parse the for loop statement (FOR)
 *
 * @param ctx
 * @return
 */
antlrcpp::Any grimoireCodeVisitor::visitForstat(antlrcppgrim::grimoireParser::ForstatContext *ctx) {
    std::string start  =  ctx->expr(0) ? ctx->expr(0)->getText() : "";
    std::string stop  =  ctx->expr(1) ? ctx->expr(1)->getText() : "";

    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ") : FOR " << start << "TO" << stop;

    std::shared_ptr<Expression> start_exp = grimoireCompilerVisitor::parseExpression(ctx->expr(0));
    std::shared_ptr<Expression> stop_exp = grimoireCompilerVisitor::parseExpression(ctx->expr(1));
        
    if(ctx->ID()) {

        // std::shared_ptr<Expression> target;
        std::string name = ctx->ID()->getText();
        std::shared_ptr<Symbol> symbol =  this->compiler->symbolTable->get(name);
        if (symbol)
        {
            std::shared_ptr<Expression> target = Identifier::create(name, ctx->getStart()->getLine());

            std::shared_ptr<AssignmentStatement> start_assign = AssignmentStatement::create(target, start_exp, ctx->getStart()->getLine());

            std::shared_ptr<Expression> end = ComparisonExpression::create(target, "<=", stop_exp, ctx->getStart()->getLine());
        

            std::shared_ptr<ForStatement> loop = ForStatement::create(start_assign, end, ctx->getStart()->getLine());
            scopeStack.push(loop);
        } else {
            std::cout << "UNIDENTIFIED SYMBOL: " << name;
            return nullptr;
        }

        // std::shared_ptr<AssignmentStatement> start_assign = AssignmentStatement::create(target, start_exp, ctx->getStart()->getLine());

        // std::shared_ptr<Expression> end = ComparisonExpression::create(target, "<=", stop_exp, ctx->getStart()->getLine());
    

        // std::shared_ptr<ForStatement> loop = ForStatement::create(start_assign, end, ctx->getStart()->getLine());
        // scopeStack.push(loop);
    }

    return antlrcppgrim::grimoireBaseVisitor::visitForstat(ctx);
}

/**
 * ENDFOR
 * @param ctx
 * @return
 */

antlrcpp::Any grimoireCodeVisitor::visitEndfor(antlrcppgrim::grimoireParser::EndforContext *ctx) {
    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ")" << " : END_FOR";
    if(scopeStack.size() > 0) {
        std::shared_ptr<Node> loop = scopeStack.top();
        scopeStack.pop();
        addNode(loop);
    }
    return antlrcppgrim::grimoireBaseVisitor::visitEndfor(ctx);
}

/**
* Return Statement
* @param ctx
* @return
*/

antlrcpp::Any grimoireCodeVisitor::visitRetstat(antlrcppgrim::grimoireParser::RetstatContext *ctx) {

    std::cout << this->filename << "(" << ctx->getStart()->getLine() << ")" <<  " : RETURN " << ctx->expr()->getText();

    std::shared_ptr<Expression> ret_var = grimoireCompilerVisitor::parseExpression(ctx->expr());
    
    std::shared_ptr<ReturnStatement> ret_statement =  ReturnStatement::create(ret_var,ctx->getStart()->getLine());

    addNode(ret_statement);

    return antlrcppgrim::grimoireBaseVisitor::visitRetstat(ctx);
    
}