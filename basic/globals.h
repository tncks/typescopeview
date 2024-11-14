/****************************************************/
/* File: globals.h                                  */
/* Global types and vars                            */
/* must come before other include files             */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#ifndef YYPARSER

/* the name of the following file may change */
#include "cminus.tab.h"
//        cminus.tab.h

/* ENDFILE is implicitly defined by Yacc/Bison,
 * and not included in the tab.h file
 */
#define ENDFILE 0

#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

/* MAXRESERVED = the number of reserved words */
#define MAXRESERVED 6

typedef int TokenType;
/*typedef enum 
    // book-keeping tokens 
   {ENDFILE_,ERROR_,
    // reserved words 
    IF,ELSE,WHILE,RETURN,INT,VOID,
    // multicharacter tokens 
    ID,NUM,
    // special symbols 
    ASSIGN,EQ,NE,LT,LE,GT,GE,PLUS,MINUS,TIMES,OVER,LPAREN,RPAREN,LBRACE,RBRACE,LCURLY,RCURLY,SEMI,COMMA,
   } TokenType;*/

extern FILE* source; /* source code text file */
extern FILE* listing; /* listing output text file */
extern FILE* code; /* code text file for TM simulator */

extern int lineno; /* source line number for listing */

/**************************************************/
/***********   Syntax tree for parsing ************/
/**************************************************/

typedef enum {StmtK, ExpK, DeclK, TypeK} NodeKind;
typedef enum {IfK, WhileK, CallK, ReturnK, AssignK, CompK} StmtKind;
typedef enum {OpK, ConstK, IdK} ExpKind;
typedef enum {FunK, VarK, ParamK} DeclKind;
typedef enum {Void, Integer} TypeKind; // ... , Boolean // is it for semantic? type check? <- may be option
typedef enum {Function, Variable} IdentifierKind;
/* TypeKind is used for type checking */
         //typedef enum {Void,Integer,Boolean} ExpType;

#define MAXCHILDREN 3

typedef struct treeNode
   { struct treeNode * child[MAXCHILDREN];
     struct treeNode * sibling;
     int isArray;
     int lineno;
     NodeKind nodekind;
     union { StmtKind stmt; ExpKind exp; DeclKind decl; TypeKind type; } kind;
     struct { TokenType op; int val; char * name; } attr;
     TypeKind type; /* for type checking of exps */
   } TreeNode;

/**************************************************/
/***********   Flags for tracing       ************/
/**************************************************/

/* EchoSource = TRUE causes the source program to
 * be echoed to the listing file with line numbers
 * during parsing
 */
extern int EchoSource;

/* TraceScan = TRUE causes token information to be
 * printed to the listing file as each token is
 * recognized by the scanner
 */
extern int TraceScan;

/* TraceParse = TRUE causes the syntax tree to be
 * printed to the listing file in linearized form
 * (using indents for children)
 */
extern int TraceParse;

/* TraceAnalyze = TRUE causes symbol table inserts
 * and lookups to be reported to the listing file
 */
extern int TraceAnalyze;

/* TraceCode = TRUE causes comments to be written
 * to the TM code file as code is generated
 */
extern int TraceCode;

/* Error = TRUE prevents further passes if an error occurs */
extern int Error; 
#endif
