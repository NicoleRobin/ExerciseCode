#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        cout << "Usage: 7.15 num1 num2" << endl;
        return -1;
    }

    cout << argv[1] << " + " << argv[2] << " = " << atoi(argv[1]) + atoi(argv[2]) << endl;

    return 0;
}
