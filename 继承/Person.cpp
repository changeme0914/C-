// Person.cpp: implementation of the Person class.
//
//Person.cpp
#include <cstring>
#include "Person.h"
#include <iostream>
using namespace std;  //���ļ���Ҫ���ļ�����Ҫ

Person::Person(char * n,int m)
{
	strcpy(name,n);
	age=m;
}

void Person::P_Out()
{
	cout<<"name:"<<name<<" "<<"age:"<<age<<endl;
}
