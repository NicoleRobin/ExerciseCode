/*******************************************************************************
* File Name		: testUid.c
* Author		: zjw
* Email			: zjw_0722@163.com
* Create Time	: 2015年04月14日 星期二 13时40分58秒
*******************************************************************************/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("uid : %d \n", getuid());
	printf("euid : %d \n", geteuid());

	return 0;
}
