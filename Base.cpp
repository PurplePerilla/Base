// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CBase
{
protected:
	int a;
public:
	CBase()
	{
		a = 0;
		cout << "默认构造函数" << endl;
	}
	CBase(int c)
	{
		a = c;
		cout << "单参数构造函数" << endl;
	}
	void display()
	{
		cout << "a=" << a << endl;
	}
};

class CDerived :public CBase
{
public:
	CDerived()
	{
		a = 0;
		cout << "默认构造函数1" << endl;
	}
	CDerived(int c)
	{
		a = c;
		cout << "单参数构造函数1" << endl;
	}
};


int main()
{
	CDerived obj(100);
	obj.display();
    return 0;
}

