%option case-insensitive yylineno

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "create.tab.h"
%}

db_name		[a-zA-Z_][a-zA-Z0-9_]+
number		[1-9][0-9]+

%%

create		{ return CREATE; }
database	{ return DATABASE; }
{db_name}	{ yylval.str = strdup(yytext); return DATABASE_NAME; }
{number}	{ yylval.num = atoi(yytext); return NUMBER; }
\n			{ return EOL; }

%%

