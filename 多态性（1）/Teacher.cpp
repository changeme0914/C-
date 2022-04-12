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

Teacher::Teacher(char *t_name,int t_age,char *s_title):Person(t_name,t_age)
{
	strcpy(title,s_title);
}

void Teacher::Disp()
{
	Person::Disp();
	cout<<"title:"<<title<<endl;
}

