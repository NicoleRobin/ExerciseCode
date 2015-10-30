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
	char szFirst[] = "rImport_ysb_20150921095504_1.txt";
	char szSecond[] = "rImport_ysb_201509110946_03_0.txt";
    char reFirst[] = "rImport_ysb_*_*.txt";
    char reSecond[] = "rImport_ysb_*_*_*.txt";

	if (fnmatch(reFirst,szFirst, 0) == 0)
	{
		printf("%s is match %s\n", szFirst, reFirst);
	}

    if (fnmatch(reFirst, szSecond, 0) == 0)
    {
        printf("%s is match %s\n", szSecond, reFirst);
    }

	if (fnmatch(reSecond, szSecond, 0) == 0)
	{
		printf("%s is match %s\n", szSecond, reSecond);
	}

    if (fnmatch(reSecond, szFirst, 0) == 0)
    {
        printf("%s is match %s\n", szFirst, reSecond);
    }

	return 0;
}
