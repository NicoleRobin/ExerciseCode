#include <iostream>

extern "C"{
#include "cExample.h"
}
using namespace std;

int main(int argc, char **argv)
{
	cout << add(2, 3) << endl;

	return 0;
}
