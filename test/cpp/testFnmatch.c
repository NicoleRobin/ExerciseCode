/*******************************************************************************
* File Name		: testFnmatch.c
* Author		: zjw
* Email			: zjw_0722@163.com
* Create Time	: 2015年03月24日 星期二 08时26分44秒
*******************************************************************************/

#include <stdio.h>
#include <fnmatch.h>

int main(int argc, char **argv)
{
	char szFirst[] = "Import_20150324.txt";
	char szSecond[] = "{re,}Import_20150324.txt";

	if (fnmatch("{re,}Import_*.txt",szFirst, 0) == 0)
	{
		printf("%s is match {re,}Import_*txt.\n", szFirst);
	}

	if (fnmatch("{re,}Import_*.txt", szSecond, 0) == 0)
	{
		printf("%s is match {re,}Import_*.txt.\n", szSecond);
	}

	return 0;
}
