// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "Ĭ�Ϲ��캯��" << endl;
	}
	CBase(int c)
	{
		a = c;
		cout << "���������캯��" << endl;
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
		cout << "Ĭ�Ϲ��캯��1" << endl;
	}
	CDerived(int c)
	{
		a = c;
		cout << "���������캯��1" << endl;
	}
};


int main()
{
	CDerived obj(100);
	obj.display();
    return 0;
}

