#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    map<string, int> mapCount;
    string str;
    while (cin >> str)
    {
        mapCount[str]++;
    }

    map<string, int>::iterator itMap = mapCount.begin();
    for (; itMap != mapCount.end(); ++itMap)
    {
        cout << "<" << itMap->first << ", " << itMap->second << "> ";
    }

    cout << endl;

    return 0;
}
