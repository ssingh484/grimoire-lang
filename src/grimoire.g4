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
functdeclaration : FUNC ID OPENBRACKET paramlist CLOSEBRACKET rettype BEGIN statseq END;
type : INT
       | ARRAY OPENSQBRACKET INTLIT CLOSESQBRACKET OF INT;
optionalinit :
             | ASSIGNMENT INTLIT;
paramlist :
          | param paramlisttail;
paramlisttail :
              | COMMA param paramlisttail;
rettype :
        | COLON type;
param : ID COLON type;
statseq : stat stattail;
stattail:
        | statseq;
stat : ID idstat
     | condstat
     | WHILE expr  DO statseq ENDDO SEMICOLON
     | FOR ID ASSIGNMENT expr  TO expr  DO statseq ENDDO SEMICOLON
     | BREAK SEMICOLON
     | RET expr  SEMICOLON
     | LET declarationsegment IN statseq END;

idstat : assignstat ASSIGNMENT idstat2
    |	OPENBRACKET exprlist CLOSEBRACKET SEMICOLON ;
idstat2 : expr SEMICOLON ;

condstat : IF expr THEN statseq condstattail ;
condstattail : ENDIF SEMICOLON
    | ELSE statseq ENDIF SEMICOLON ;
expr : logicoperation1;
logicoperation1 : logicoperation2 logicoperationtail1;
logicoperationtail1 : OR logicoperation1
                | ;
logicoperation2 : compoperation1 logicoperationtail2;
logicoperationtail2 : AND logicoperation2
                | ;
compoperation1 : compoperation2 compoperationtail1;
compoperationtail1 : LESSEQUAL compoperation1
                | ;
compoperation2 : compoperation3 compoperationtail2;
compoperationtail2 : GREATEQUAL compoperation2
                | ;
compoperation3 : compoperation4 compoperationtail3;
compoperationtail3 : LESS compoperation3
                | ;
compoperation4 : compoperation5 compoperationtail4;
compoperationtail4 : GREAT compoperation4
                | ;
compoperation5 : compoperation6 compoperationtail5;
compoperationtail5 : NOTEQUAL compoperation5
                | ;
compoperation6 : sumoperation1 compoperationtail6;
compoperationtail6 : EQUAL compoperation6
                | ;
sumoperation1 : sumoperation2 sumoperationtail1;
sumoperationtail1 : SUB sumoperation1
               | ;
sumoperation2 : multoperation1 sumoperationtail2;
sumoperationtail2 : ADD sumoperation2
               | ;
multoperation1 : multoperation2 multoperationtail1;
multoperationtail1 : DIV multoperation1
               | ;
multoperation2 : term multoperationtail2;
multoperationtail2 : MULT multoperation2
               | ;
term : INTLIT
     | ID lvaluetail
     | OPENBRACKET expr CLOSEBRACKET;
exprlist :
         | expr exprlisttail;
exprlisttail : COMMA expr exprlisttail
             | ;
//lvalue : ID lvaluetail;
lvaluetail : OPENSQBRACKET expr CLOSESQBRACKET
          | OPENBRACKET exprlist CLOSEBRACKET
          | ;
assignstat : OPENSQBRACKET expr CLOSESQBRACKET
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