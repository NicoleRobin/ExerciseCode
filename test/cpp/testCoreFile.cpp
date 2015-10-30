#include <iostream>

using namespace std;

void Test()
{
    int *pInt = NULL;
    *pInt = 2;
}

int main(int argc, char **argv)
{
    Test();

    return 0;
}
