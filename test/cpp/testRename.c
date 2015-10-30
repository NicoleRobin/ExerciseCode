/*******************************************************************************
* File Name		: testRename.c
* Author		: zjw
* Email			: zjw_0722@163.com
* Create Time	: 2015年04月01日 星期三 09时51分54秒
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#include <errno.h>

int main(int argc, char **argv)
{
	if (rename("./test.data", "..//test.txt") != 0)
	{
		perror("rename error");
	}

	return 0;
}
