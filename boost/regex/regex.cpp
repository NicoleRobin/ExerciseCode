#include <boost/regex.hpp>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string regStr = "a+";
    boost::regex expression(regStr);
    string strTest = "aaa";

    if (boost::regex_match(strTest.c_str(), expression))
    {
        cout << "Match" << endl;
    }

    return 0;
}
