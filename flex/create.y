%{
#include <stdio.h>
%}

%union 
{
	char *str;
	int num;
};

%token CREATE
%token DATABASE
%token EOL
%token<str> DATABASE_NAME
%token<num> NUMBER

%%

stmt:
	| stmt CREATE DATABASE DATABASE_NAME EOL { printf("db_name : %s\n", $4); }
	| stmt CREATE DATABASE DATABASE_NAME NUMBER EOL { printf("db_name : %s, db_node : %s\n", $4, $5); }
	;

%%

int main()
{
	yyparse();	
	return 0;
}

yyerror(const char *str)
{
	printf("%s\n", str);
}
