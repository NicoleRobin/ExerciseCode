#include <algorithm>
#include <utility>
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}
int main(int argc, char **argv)
{
    map<int, int> mapTest;
    mapTest.insert(make_pair(2, 5));
    mapTest.insert(make_pair(3, 2));
    mapTest.insert(make_pair(1, 6));
    
    map<int, int>::iterator itIdx = mapTest.begin();
    for (; itIdx != mapTest.end(); itIdx++)
    {
        cout << "First:" << itIdx->first << " Second:" << itIdx->second << endl;
    }

    sort(mapTest.begin(), mapTest.end(), cmp);

    itIdx = mapTest.begin();
    for (; itIdx != mapTest.end(); itIdx++)
    {
        cout << "First:" << itIdx->first << " Second:" << itIdx->second << endl;
    }

    return 0;
}
