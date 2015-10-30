#include <sys/types.h>
#include <regex.h>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    regex_t regFirst, regSecond;
    char reFirst[] = "rImport_ysb_[0-9]{12}_[0-9]{1,2}.txt";
    char reSecond[] = "rImprt_ysb_[0-9]{12}_[0-9]{1,2}_[0-9]{1,2}.txt";
    char szFirst[] = "rImport_ysb_201509110946_03_0.txt";
    char szSecond[] = "rImport_ysb_20150921095601_1.txt";
    regcomp(&regFirst, reFirst, 0);
    regcomp(&regSecond, reSecond, 0);
    if (regexec(&regFirst, szFirst, 0, 0, 0) == 0)
    {
        cout << szFirst << " match " << reFirst << endl;
    }

    if (regexec(&regFirst, szSecond, 0, 0, 0) == 0)
    {
        cout << szSecond << " match " << reFirst << endl;
    }

    if (regexec(&regSecond, szFirst, 0, 0, 0) == 0)
    {
        cout << szFirst << " match " << reSecond << endl;
    }

    if (regexec(&regSecond, szSecond, 0, 0, 0) == 0)
    {
        cout << szSecond << " match " << reSecond << endl;
    }

    regfree(&regFirst);
    regfree(&regSecond);
    return 0;
}
