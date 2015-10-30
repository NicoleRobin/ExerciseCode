/*******************************************************************************
* File Name		: ./main.cpp
* Author		: zjw
* Email			: zjw_0722@163.com
* Create Time	: 2015年04月09日 星期四 17时36分02秒
*******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Print(ostream &out, string strText)
{
	out << strText << endl;
}

int main(int argc, char **argv)
{
	Print(cout, "cout");

	ofstream fout("./test.dat");
	if (!fout.is_open())
	{
		Print(cout, "error");
	}
	else
	{
		Print(fout, "fout");
		fout.close();
	}

	return 0;
}
