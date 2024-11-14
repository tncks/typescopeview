/****************************************************/
/* File: tiny.y                                     */
/* The TINY Yacc/Bison specification file           */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/
%{
#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"


#define YYSTYPE TreeNode *
// static char * savedName; 
// static int savedLineNo;  
static TreeNode * savedTree; /* stores syntax tree for later return */
static int yylex(void); // added 11/2/11 to ensure no conflict with lex
int yyerror(const char * message);
%}

%token IF ELSE RETURN WHILE
%token INT VOID NUM ID 
%token PLUS MINUS OVER TIMES LT LE GT GE EQ NE ASSIGN SEMI COMMA LPAREN RPAREN LBRACE RBRACE LCURLY RCURLY
%token ERROR
//%expect 1

%nonassoc XIF
%nonassoc ELSE

%locations
%debug


%% /* Grammar */

program     : declaration_list
                 { savedTree = $1;} 
            ;
declaration_list    : declaration_list declaration
                 { YYSTYPE t = $1;
                   
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = $2;
                     $$ = $1; }
                     else $$ = $2;
                 }
            | declaration  {
               $$ = $1;
               
                }
            ;
declaration        : var_declaration { 
                      $$ = $1;
                      
                       }/*13*/
            | fun_declaration { 
              $$ = $1;
              
               }
            
            ;
var_declaration    : type_specifier identifier SEMI/*4; var_declaration*/
				      { $$ = newDeclNode(VarK);
                $$->type = $1->kind.type;
                $$->attr.name = $2->attr.name;
                $$->lineno = $2->lineno;
                $$->isArray = 0;
                
				      }
	    	    | type_specifier identifier LBRACE number RBRACE SEMI
				      { $$ = newDeclNode(VarK);
                $$->type = $1->kind.type;
                $$->attr.name = $2->attr.name;
                $$->attr.val = $4->attr.val;
                $$->lineno = $2->lineno;
                $$->isArray = 1;

                $$->child[0]->attr.val = $4->attr.val;
                $$->child[0]->type = Integer;
                $$->child[0]->isArray = 1;
                
                
				      }
              
	    	    ;
type_specifier   : INT { $$ = newTypeNode(Integer); }/*5*/
            | VOID { $$ = newTypeNode(Void); }
            ;
fun_declaration    : type_specifier identifier LPAREN params RPAREN compound_stmt/*6; fun_declaration*/
            { $$ = newDeclNode(FunK); 
              $$->type = $1->kind.type; 
              $$->attr.name = $2->attr.name;
              $$->child[0] = $4;
              $$->child[1] = $6;
              $$->lineno = $2->lineno;
              
               }
               
            ;
params      : param_list { 
                $$ = $1;
                
                 }       /*7*/
            | VOID { 
              //$$ = NULL;
                $$ = newDeclNode(ParamK);
				        //$$->type = $1->kind.type;
                //$$->attr.name = $2->attr.name;
                //$$->lineno = $2->lineno;
                $$->isArray = -1;
               }
            | { 
              //$$ = NULL;
                $$ = newDeclNode(ParamK);
				        //$$->type = $1->kind.type;
                //$$->attr.name = $2->attr.name;
                //$$->lineno = $2->lineno;
                $$->isArray = -1;
               }
            ;
param_list  : param_list COMMA param     /*8*/
				      { YYSTYPE t = $1;
                if (t != NULL){
                  while (t->sibling != NULL)
                    t = t->sibling;
                  t->sibling = $3;
                  $$ = $1;
                }
                else $$ = $3;
				      }
	    	    | param { $$ = $1; }
	    	    ;
param	      : type_specifier identifier      /*9*/
				      { $$ = newDeclNode(ParamK);
				        $$->type = $1->kind.type;
                $$->attr.name = $2->attr.name;
                $$->lineno = $2->lineno;
                $$->isArray = 0;
				      }
	    	    | type_specifier identifier LBRACE RBRACE
				      { $$ = newDeclNode(ParamK);
				        $$->type = $1->kind.type;
                $$->attr.name = $2->attr.name;                
                $$->lineno = $2->lineno;
                $$->isArray = 1;
				      }
	    	    ;
compound_stmt   : LCURLY local_declarations statement_list RCURLY/*10*/
              { $$ = newStmtNode(CompK);
                $$->lineno = lineno;  
                
                if ($2 != NULL){
                  $$->child[0] = $2;
                  $$->child[1] = $3;
                }
                else {
                  $$->child[0] = NULL;
                  $$->child[1] = $3;
                  }
                }
	    	    | LCURLY statement_list RCURLY 
              {
                $$ = newStmtNode(CompK);
                $$->lineno = lineno;  
                
                if ($2 != NULL){
                  $$->child[0] = NULL;
                  $$->child[1] = $2;
                } else {
                  $$->child[0] = NULL;
                  $$->child[1] = NULL;
                }
            
              }
	    	    | LCURLY local_declarations RCURLY
              {

                $$ = newStmtNode(CompK);
                $$->lineno = lineno;  
                
                if ($2 != NULL) {
                  $$->child[0] = $2;
                  $$->child[1] = NULL;
                } else {
                  $$->child[0] = NULL;
                  $$->child[1] = NULL;
                }
              }
	    	    | LCURLY RCURLY
              { 
                $$ = newStmtNode(CompK);
                $$->lineno = lineno;  
                
                $$->child[0] = NULL;
                $$->child[1] = NULL;
              }
              
	    	    ;
local_declarations  : local_declarations var_declaration/*11; local_declarations*/
              { YYSTYPE t = $1;
              
                if(t != NULL) {
                  while(t->sibling != NULL)
                    t = t->sibling;
                  t->sibling = $2;
                  $$ = $1;
                }
                else $$ = $2; }
            | var_declaration { 
              $$ = $1;
              
             }
            ;
statement_list   : statement_list statement /*12*/
              { YYSTYPE t = $1;
                if(t != NULL){
                  while(t->sibling != NULL)
                    t = t->sibling;
                  t->sibling = $2;
                  $$ = $1;
                }
                else $$ = $2; }
            | statement { $$ = $1; }
            ;
statement   : expression_stmt { $$ = $1; }/*13*/
            | compound_stmt { $$ = $1; }
            | selection_stmt { $$ = $1; }
            | iteration_stmt { $$ = $1; }
            | return_stmt { $$ = $1; }
            ;
expression_stmt   : expression SEMI { $$ = $1; }/*14*/
            | SEMI { $$ = NULL; }
            ;
selection_stmt    : IF LPAREN expression RPAREN statement %prec XIF/*15; selection_stmt*/
              { $$ = newStmtNode(IfK);
                $$->child[0] = $3;
                $$->child[1] = $5; }
            | IF LPAREN expression RPAREN statement ELSE statement
              { $$ = newStmtNode(IfK);
                $$->child[0] = $3;
                $$->child[1] = $5;
                $$->child[2] = $7; }
            ;
iteration_stmt     : WHILE LPAREN expression RPAREN statement/*16; iteration_stmt*/
              { $$ = newStmtNode(WhileK);
                $$->child[0] = $3;
                $$->child[1] = $5; }
            ;
return_stmt    : RETURN SEMI { $$ = newStmtNode(ReturnK); }/*17; return_stmt*/
            | RETURN expression SEMI
              { $$ = newStmtNode(ReturnK); 
                $$->child[0] = $2; }
            ;
expression        : var ASSIGN expression/*18; expression*/
              { $$ = newStmtNode(AssignK);
                $$->child[0] = $1;
                $$->child[1] = $3; }
            | simple_expression { $$ = $1; }
            ;
var         : identifier { $$ = $1; }/*19*/
            | identifier LBRACE expression RBRACE
              { $$ = $1;
                $$->child[0] = $3; }
            ;
simple_expression   : additive_expression relop additive_expression/*20; simple_expression*/
              { $$ = $2;
                $$->child[0] = $1;
                $$->child[1] = $3; }
            | additive_expression { $$ = $1; }
            ;
relop       : LT { $$ = newExpNode(OpK); $$->attr.op = LT; }/*21; relop*/
            | LE { $$ = newExpNode(OpK); $$->attr.op = LE; }
            | GT { $$ = newExpNode(OpK); $$->attr.op = GT; }
            | GE { $$ = newExpNode(OpK); $$->attr.op = GE; }
            | EQ { $$ = newExpNode(OpK); $$->attr.op = EQ; }
            | NE { $$ = newExpNode(OpK); $$->attr.op = NE; }
            ;
additive_expression     : additive_expression addop term/*22; additive_expression*/
              { $$ = $2;
                $$->child[0] = $1;
                $$->child[1] = $3; }
            | term { $$ = $1; }
            ;
addop         : PLUS { $$ = newExpNode(OpK); $$->attr.op = PLUS; }/*23; addop*/

            | MINUS { $$ = newExpNode(OpK); $$->attr.op = MINUS; }
            ;
term        : term mulop factor/*24*/
              { $$ = $2;
                $$->child[0] = $1;
                $$->child[1] = $3; }
            | factor { $$ = $1; }
            ;
mulop        : TIMES { $$ = newExpNode(OpK); $$->attr.op = TIMES; }/*25; mulop*/
            | OVER { $$ = newExpNode(OpK); $$->attr.op = OVER; }
            ;
factor      : LPAREN expression RPAREN { $$ = $2; }/*26*/
            | var { $$ = $1; }
            | call { $$ = $1; }
            | number { $$ = $1; }
            
            ;
call  : identifier LPAREN RPAREN/*27; call*/
              { $$ = newStmtNode(CallK);
                $$->attr.name = $1->attr.name;
                $$->lineno = $1->lineno; }
            | identifier LPAREN arg_list RPAREN
              { $$ = newStmtNode(CallK);
                $$->attr.name = $1->attr.name;
                $$->lineno = $1->lineno;
                $$->child[0] = $3; }
              
            ;
arg_list    : arg_list COMMA expression/**/
              { YYSTYPE t = $1;
                if (t != NULL){
                  while (t->sibling != NULL)
                    t = t->sibling;
                  t->sibling = $3;
                  $$ = $1;
                }
                else $$ = $3; }
            | expression { $$ = $1; }
            ;
number      : NUM/*30*/
              { $$ = newExpNode(ConstK);
                $$->attr.val = atoi(tokenString);
                $$->type = Integer;
                $$->isArray = 0;
                 }
            ;
identifier  : ID/*31*/
              { $$ = newExpNode(IdK);
                $$->attr.name = copyString(tokenString); }
            ;
%%

int yyerror(const char * message){
  Error = TRUE;
  printf("Error: %s\n", message);
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

TreeNode * parse(void)
{ yyparse();
  return savedTree;
}

