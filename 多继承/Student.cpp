// Student.cpp: implementation of the Student class.
//
//////////////////////////////////////////////////////////////////////

#include "Student.h"
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Student::Student(char *s_name,int s_age):Person(s_name)
{
	Person::Disp();
	age=s_age;
}

void Student::Disp()
{
	cout<<age<<endl;
}

void Student::Study()
{
	cout<<"I'm studying"<<endl;
}

