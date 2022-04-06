// Student.cpp: implementation of the Student class.
//
//////////////////////////////////////////////////////////////////////
#include"Student.h"
#include<cstring>
#include<iostream>
using namespace std;
Student::Student(char*p)
{
	strncpy(name,p,strlen(p)+1);
}

void Student::disp()
{
	cout<<name<<":"<<grade<<endl;
}
