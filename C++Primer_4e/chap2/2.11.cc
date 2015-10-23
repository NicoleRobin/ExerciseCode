#include <iostream>
using namespace std;

int main(void)
{
    int base = 0;
    int exponent = 0;
    cout << "Please input the base:" << endl;
    cin >> base;
    cout << "Please input the exponent:" << endl;
    cin >> exponent;

    int nRet = 1;
    for (int i = 0; i < exponent; ++i)
    {
        nRet = nRet * base;
    }
    cout << nRet << endl;

    return 0;
}
