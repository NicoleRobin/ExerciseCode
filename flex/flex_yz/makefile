# $Header: /home/johnl/flnb/code/RCS/Makefile.ch1,v 2.2 2009/11/08 02:52:21 johnl Exp $
# Companion source code for "flex & bison", published by O'Reilly
# Media, ISBN 978-0-596-15597-1
# Copyright (c) 2009, Taughannock Networks. All rights reserved.
# See the README file for license conditions and contact info.

# programs in chapter 1

#all:	  fb1-1 fb1-2 fb1-3 fb1-4 fb1-5

create: createfunc.o create.l create.y
	bison -d create.y
	flex create.l
	cc -o $@ create.tab.c lex.yy.c createfunc.o -lfl
createfunc.o:
	cc -c createfunc.c -o createfunc.o
clean:
	rm create create.tab.c create.tab.h lex.yy.c createfunc.o
	#rm -f fb1-1 fb1-2 fb1-3 fb1-4 fb1-5 \
	#lex.yy.c fb1-5.tab.c fb1-5.tab.h

