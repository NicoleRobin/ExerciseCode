#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str1, str2;
    do
    {
        cout << "Please input two string:" << endl;
        cin >> str1 >> str2;
        if (str1 > str2)
        {
            cout << str1 << " > " << str2 << endl;
        } 
        else if (str1 < str2)
        {
            cout << str1 << " < " << str2 << endl;
        }
        else
        {
            cout << str1 << " = " << str2 << endl;
        }
    } while(true);

    return 0;
}
