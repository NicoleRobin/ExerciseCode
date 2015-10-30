#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str = "user";

    switch(str)
    {
    case "user":
        cout << "User: " << endl;
        break;
    case "host":
        cout << "Host: " << endl;
        break;
    default:
        cout << "Error: " << endl;
        break;
    }

    return 0;
}
