#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char **argv)
{
    const char *aStr = "Hello!";
    const char *pStr = "world!";
    const char *qStr = "world!";

    printf("aStr:%X, pStr:%X, qStr:%X\n", aStr, pStr, qStr);

    return 0;
}
