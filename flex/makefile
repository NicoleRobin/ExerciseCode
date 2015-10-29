# a simple syntax analize for create database db_name [num]

create: create.l create.y
	bison -d create.y
	flex create.l
	gcc -o $@ lex.yy.c create.tab.c -lfl

clean:
	rm create create.tab.h create.tab.c lex.yy.c
