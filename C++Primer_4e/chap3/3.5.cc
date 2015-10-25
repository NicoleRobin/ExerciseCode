#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    /*
    string strLine;
    while (getline(cin, strLine))
    {
        cout << strLine << endl;
    }
    */

    string strWord;
    while (cin >> strWord)
    {
        cout << strWord << endl;
    }

    return 0;
}
