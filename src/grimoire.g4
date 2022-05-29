grammar grimoire;

/*
*   Parser Rules
*/

//tiger : MAIN  LET  ID  IN  BEGIN  ID  END NEWLINE;
grimoire : MAIN LET declarationsegment  IN  BEGIN  statseq  END;
declarationsegment : vardeclarationlist  functdeclarationlist;
vardeclarationlist :    
                   | vardeclaration  vardeclarationlist;
vardeclaration : VAR  ID  COLON  type  optionalinit  SEMICOLON;
functdeclarationlist :
                     | functdeclaration  functdeclarationlist;
functdeclaration : beginfunc statseq endfunc;
beginfunc : FUNC ID OPENBRACKET paramlist CLOSEBRACKET rettype BEGIN ;
endfunc : END ;
type : INT
       | ARRAY OPENSQBRACKET INTLIT CLOSESQBRACKET OF INT;
optionalinit :
             | ASSIGNMENT INTLIT;
paramlist : (param (COMMA param)*)? ;
rettype :
        | COLON type;
param : ID COLON type;
statseq : stat stattail;
stattail:
        | statseq;
stat : assignstat
     | funccall SEMICOLON
     | condstat
     | forstat 
     | retstat ;
     
    //  | WHILE expr  DO statseq ENDDO SEMICOLON
    // | BREAK SEMICOLON

assignstat: ID lvaluetail ASSIGNMENT expr SEMICOLON ;

funccall : ID OPENBRACKET exprlist CLOSEBRACKET ;

condstat : ifcond statseq condstattail ;
condstattail : endcondstat
    | elsecond endcondstat ;

ifcond : IF expr THEN ;
elsecond : ELSE statseq ;
endcondstat : ENDIF SEMICOLON ;

forstat : FOR ID ASSIGNMENT expr TO expr DO statseq endfor ;
endfor : ENDDO SEMICOLON ;

retstat : RET expr  SEMICOLON ;

expr : term MULT expr
    | term DIV expr
    | term ADD expr
    | term SUB expr
    | term EQUAL expr
    | term NOTEQUAL expr
    | term GREAT expr
    | term LESS expr
    | term GREATEQUAL expr
    | term LESSEQUAL expr
    | term AND expr
    | term OR expr 
    | NOT expr
    | term ;

term : INTLIT
     | ID lvaluetail
     | funccall
     | OPENBRACKET expr CLOSEBRACKET;
exprlist : (expr (COMMA expr)*)? ;
//lvalue : ID lvaluetail;
lvaluetail : OPENSQBRACKET expr CLOSESQBRACKET
          | ;


/*
*   Lexer Rules
*/

fragment DIGIT      : [0-9];
fragment LETTERS    : [a-zA-Z];
fragment WORDS      : [0-9a-zA-Z_];

WHITESPACE          : (' ' | '\t')+ -> skip;
NEWLINE             : ('\r'? '\n' | '\r')+ -> skip;
COMMENT             : '/*'(.)*?'*/' -> skip;

MAIN                : 'main';
ARRAY               : 'array';
BREAK               : 'break';
DO                  : 'do';
IF                  : 'if';
ELSE                : 'else';
FOR                 : 'for';
FUNC                : 'function';
LET                 : 'let';
IN                  : 'in';
OF                  : 'of';
THEN                : 'then';
TO                  : 'to';
VAR                 : 'var';
WHILE               : 'while';
ENDIF               : 'endif';
BEGIN               : 'begin';
END                 : 'end';
ENDDO               : 'enddo';
RET                 : 'return';
INT                 : 'int';
FLOAT               : 'float';

ID                  : LETTERS WORDS*;

INTLIT              : DIGIT+;
FLOATLIT            : DIGIT+('.'DIGIT*)?;

COMMA               : ',';
COLON               : ':';
SEMICOLON           : ';';
OPENBRACKET         : '(';
CLOSEBRACKET        : ')';
OPENSQBRACKET       : '[';
CLOSESQBRACKET      : ']';

ADD                 : '+';
SUB                 : '-';
MULT                : '*';
DIV                 : '/';
EQUAL               : '=';
NOTEQUAL            : '<>';
LESS                : '<';
GREAT               : '>';
LESSEQUAL           : '<=';
GREATEQUAL          : '>=';
AND                 : '&';
OR                  : '|';
NOT                 : '~';


ASSIGNMENT          : ':=';


/* POTENTIAL FULLY FIXED GRAMMAR

TIGER -> main let DECLARATIONSEGMENT  in  begin  STATSEQ  end.
DECLARATIONSEGMENT -> VARDECLARATIONLIST  FUNCTDECLARATIONLIST.
VARDECLARATIONLIST ->
                   | VARDECLARATION  VARDECLARATIONLIST.
VARDECLARATION -> var  IDLIST  colon  TYPE  OPTIONALINIT  semicolon.
FUNCTDECLARATIONLIST ->
                     | FUNCTDECLARATION  FUNCTDECLARATIONLIST.
FUNCTDECLARATION -> func id openbracket PARAMLIST closebracket RETTYPE begin STATSEQ end.
TYPE -> TYPEID
       | array opensqbracket intlit closesqbracket of TYPEID.
TYPEID -> int | float.
IDLIST -> id IDTAIL.
IDTAIL ->
       | comma IDLIST.
OPTIONALINIT ->
             | assignment CONSTVAL.
PARAMLIST ->
          | PARAM PARAMLISTTAIL.
PARAMLISTTAIL ->
              | comma PARAM PARAMLISTTAIL.
RETTYPE ->
        | colon TYPE.
PARAM -> id colon TYPE.
STATSEQ -> STAT STATTAIL.
STATTAIL->
        | STATSEQ.
STAT -> id IDSTAT
     | CONDSTAT
     | while EXPR  do STATSEQ enddo semicolon
     | for id assignment EXPR  to EXPR  do STATSEQ enddo semicolon
     | break semicolon
     | ret EXPR  semicolon
     | let DECLARATIONSEGMENT in STATSEQ end.

IDSTAT -> LVALUETAIL assignment IDSTAT2
    |	openbracket EXPRLIST closebracket semicolon .
IDSTAT2 -> EXPR semicolon .

CONDSTAT -> if EXPR then STATSEQ CONDSTATTAIL .
CONDSTATTAIL -> endif semicolon
    | else STATSEQ endif semicolon .
CONSTVAL -> intlit
      | floatlit.
EXPR -> LOGICOPERATION.
LOGICOPERATION -> COMPOPERATION LOGICOPERATIONTAIL.
LOGICOPERATIONTAIL -> and LOGICOPERATION
                | or LOGICOPERATION
                | .
COMPOPERATION -> SUMOPERATION COMPOPERATIONTAIL.
COMPOPERATIONTAIL -> equal COMPOPERATION
                | notequal COMPOPERATION
                | great COMPOPERATION
                | less COMPOPERATION
                | greatequal COMPOPERATION
                | lessequal COMPOPERATION
                | .
SUMOPERATION -> MULTOPERATION SUMOPERATIONTAIL.
SUMOPERATIONTAIL -> add SUMOPERATION
               | sub SUMOPERATION
               | .
MULTOPERATION -> TERM MULTOPERATIONTAIL.
MULTOPERATIONTAIL -> mult MULTOPERATION
               | div MULTOPERATION
               | .
TERM -> CONSTVAL
     | id LVALUETAIL
     | openbracket EXPR closebracket.
EXPRLIST ->
         | EXPR EXPRLISTTAIL.
EXPRLISTTAIL -> comma EXPR EXPRLISTTAIL
             | .
LVALUE -> id LVALUETAIL.
LVALUETAIL -> opensqbracket EXPR closesqbracket
           | openbracket EXPRLIST closebracket
           | .
*/