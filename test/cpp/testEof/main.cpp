/*******************************************************************************
* File Name		: main.cpp
* Author		: zjw
* Email			: emp3XzA3MjJAMTYzLmNvbQo= (base64 encode)
* Create Time	: 2015年05月10日 星期日 11时12分47秒
*******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string strTemp;
	ifstream fin("test.txt");

	while(strTemp.empty())
	{
		if (fin.eof())
		{
			break;
		}
		getline(fin, strTemp);
		cout << strTemp << endl; // " " << strTemp.length() << endl;
	}

	return 0;
}
