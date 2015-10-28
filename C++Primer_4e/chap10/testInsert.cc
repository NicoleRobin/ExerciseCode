#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
    map<string, int> mapTest;
    mapTest["zjw"] = 2;
    mapTest.insert(make_pair("zjw", 1));

    cout << mapTest["zjw"] << endl;

    return 0;
}
