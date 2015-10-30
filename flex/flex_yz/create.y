%{
#include <stdio.h>
#include "createfunc.h"
%}

%union
{
    char *str;
    int num;
};
%token CREATE DATABASE EOL
%token<str> DATABASE_NAME%token<num> NUMBER

%%
stmt:
    | stmt CREATE DATABASE DATABASE_NAME EOL { Node *node = create_db_num($4,2); debuginfo(node); freeNode(node);}
    | stmt CREATE DATABASE DATABASE_NAME NUMBER EOL {Node *node = create_db_num($4,$5); debuginfo(node); freeNode(node);}
    ;
%%
int main()
{
    yyparse();
    return 0;
}
yyerror(const char *str){
    printf("%s\n", str);
}
