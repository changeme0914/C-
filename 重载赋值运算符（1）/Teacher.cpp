// Teacher.cpp: implementation of the Teacher class.
//
//////////////////////////////////////////////////////////////////////

#include "Teacher.h"
#include<cstring>
#include<iostream>
using namespace std;

Teacher::Teacher()
{
}

Teacher::Teacher(char *t_name,int t_age)
{
	pname=new char[strlen(t_name)+1];
	strcpy(pname,t_name);
	age=t_age;
}

void Teacher::Disp()
{
	cout<<"Teacher:"<<pname<<","<<age<<endl;
}

Teacher& Teacher::operator=(Teacher &s)
{
	pname=new char[strlen(s.pname)+1];
	strcpy(pname,s.pname);
	age=s.age;
	return *this;
}

Teacher::~Teacher()
{
	//delete []pname;
}


