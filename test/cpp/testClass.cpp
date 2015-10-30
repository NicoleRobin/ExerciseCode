/*******************************************************************************
* File Name		: ./testClass.cpp
* Author		: zjw
* Email			: zjw_0722@163.com
* Create Time	: 2015年03月16日 星期一 10时58分55秒
*******************************************************************************/

#include <iostream>
using namespace std;

class CBase
{
public:
	CBase()
	{
		m_nBnum = 10;
	}
	~CBase()
	{}
private:
	int m_nBnum;
};

class CDerive : public CBase
{
public:
	CDerive()
	{
		m_nDnum = 20;
	}
	~CDerive()
	{}
private:
	int m_nDnum;
};

int main(int argc, char **argv)
{
	CBase b;
	CDerive d;
	cout << "base size : " << sizeof(b) << endl;
	cout << "derive size : " << sizeof(d) << endl;

	return 0;
}
