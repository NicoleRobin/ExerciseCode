%option case-insensitive
%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "create.tab.h"
%}
db_name [a-zA-Z_]+
number [0-9]+


%%
create { return CREATE;}
DATABASE { return DATABASE;}
{db_name} { yylval.str = strdup(yytext); return DATABASE_NAME; }
{number} { yylval.num = atoi(yytext);  return NUMBER;}
\n { return EOL;}
%%
