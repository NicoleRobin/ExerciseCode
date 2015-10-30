#include <iostream>

using namespace std;

void Test4()
{
    sleep(5);
    int *pInt = NULL;
    *pInt = 2;
}
void Test3()
{
    Test4();
}
void Test2()
{
    Test3();
}
void Test1()
{
    Test2();
}

void Test()
{
    Test1();
}

int main(int argc, char **argv)
{
    while (1)
    {
        Test();
    }
    return 0;
}
