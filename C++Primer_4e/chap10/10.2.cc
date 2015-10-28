#include <iostream>
#include <utility>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string str;
    int n;
    vector<pair<string, int> > vecPair;
    while (cin >> str >> n)
    {
        // vecPair.push_back(make_pair(str, n));
        // vecPair.push_back(pair<string, int>(str, n));
        // 
        // pair<string, int> pairTmp;
        // pairTmp.first = str;
        // pairTmp.second = n;
    }

    for (int i = 0; i < vecPair.size(); ++i)
    {
        cout << "<" << vecPair[i].first << ", " << vecPair[i].second << "> ";
    }
    cout << endl;

    return 0;
}
