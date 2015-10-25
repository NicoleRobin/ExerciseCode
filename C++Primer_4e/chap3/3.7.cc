#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s1, s2;
    cout << "please input two string:" << endl;
    cin >> s1 >> s2;

    if (s1 == s2)
    {
        cout << s1 << " = " << s2 << endl;
    }
    else if (s1 > s2)
    {
        cout << s1 << " > " << s2 << endl;
    }
    else
    {
        cout << s2 << " > " << s1 << endl;
    }

    return 0;
}
