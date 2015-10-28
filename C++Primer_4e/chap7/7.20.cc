#include <iostream>
#include <cstdlib>
using namespace std;

int factorial(int val)
{
    int nRet = 1;
    while (val != 1)
    {
        nRet *= val;
        val--;
    }
    return nRet;
}

int main(int argc, char **argv)
{
   cout << factorial(atoi(argv[1])) << endl; 

    return 0;
}
