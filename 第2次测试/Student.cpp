// Student.cpp: implementation of the Student class.
//
//////////////////////////////////////////////////////////////////////

#include "Student.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
Student::Student(char *s_name,int s_score):Person(s_name)
{
	score=s_score;
}

void Student::Disp()
{
	cout<<name<<","<<score<<endl;
}


