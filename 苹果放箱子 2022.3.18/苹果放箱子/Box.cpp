#define _CRT_SECURE_NO_WARNINGS 1
#include"Box.h"
#include<iostream>
using namespace std;
Box::Box()
{
	l = 50;
	w = 30;
	h = 40;
	sum = 0;
	cout << l << " " << w << " " << h << endl;
	cout << sum<<endl;
}
void Box::input(int x, int y)
{
	apple = x;
	sapple = y;
	sum = x - y;
}
void Box::output()
{
	cout << apple<<endl;
	cout << sum << endl;
	if (sum != 0)
	{
		cout << "Empty" << endl;
	}
}
Box::~Box()
{
}