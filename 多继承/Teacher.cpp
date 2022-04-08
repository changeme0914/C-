// Teacher.cpp: implementation of the Teacher class.
//
//////////////////////////////////////////////////////////////////////

#include "Teacher.h"
#include<cstring>
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Teacher::Teacher(char *t_name,char *job):Person(t_name)
{
	strcpy(title,job);
}

void Teacher::Disp()
{
	Person::Disp();
	cout<<title<<endl;
}

void Teacher::Teach()
{
	cout<<"I'm teaching"<<endl;
}

