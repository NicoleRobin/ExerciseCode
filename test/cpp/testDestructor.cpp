/*******************************************************************************
* File Name		: ./testDestructor.cpp
* Author		: zjw
* Email			: zjw_0722@163.com
* Create Time	: 2015年03月19日 星期四 10时47分52秒
*******************************************************************************/

#include <iostream>
using namespace std;

class Base
{
public:
	Base(){};
    virtual ~Base()
	{
		cout << "Base destructor." << endl;
	};
};

class Derive : public Base
{
public:
	Derive(){};
	~Derive()
	{
		cout << "Derive destructor." << endl;
	};
};

class BaseA
{
public:
    BaseA(){};
    ~BaseA()
    {
        cout << "BaseA destructor." << endl;
    }
};

class DeriveA : public BaseA
{
public:
    DeriveA(){};
    ~DeriveA()
    {
        cout << "DeriveA destructor." << endl;
    }
};

int main(int argc, char **argv)
{
	cout << "delete pBase" << endl;
	Base *pBase = new Derive();
	delete pBase;

	cout << "delete pBaseA" << endl;
	BaseA *pBaseA = new DeriveA();
	delete pBaseA;
	return 0;
}
