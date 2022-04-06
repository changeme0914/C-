// Date.cpp: implementation of the Date class.
//
//Date.cpp
#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int a,int b,int c)
{
	year=a;
	month=b;
	day=c;
}

void Date::D_Out()
{
	cout<<"birthday:"<<year<<"/"<<month<<"/"<<day<<endl;
}
