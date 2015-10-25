#include <iostream>
#include <string>
#include <string.h> 
using namespace std;

int main(void)
{
    string str = "test";
    cout << str.length() << endl;
    string strTest("test");
    cout << strTest.length() << endl;
    const char *pStr = "test";
    cout << strlen(pStr) << endl;

    return 0;
}
