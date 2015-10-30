/*******************************************************************************
* File Name		: backtrace.c
* Author		: zjw
* Email			: zjw_0722@163.com
* Create Time	: 2015年03月30日 星期一 09时44分15秒
*******************************************************************************/
#include <execinfo.h>
#include <stdio.h>
#include <stdlib.h>

void print_trace()
{
	void *array[10];
	int size = 0;
	char **strings = NULL;
	int i = 0;

	size = backtrace(array, 10);
	strings = backtrace_symbols(array, size);
	if (strings == NULL)
	{
		perror("backtrace_symbols");
		exit(-1);
	}

	printf("Obtained %zd stack frames.\n", size);

	for (i = 0; i < size; i++)
	{
		printf("%s\n", strings[i]);
	}

	free(strings);
	strings = NULL;
}

void dump_function()
{
	print_trace();
}

int main(int argc, char **argv)
{
	dump_function();

	return 0;
}
