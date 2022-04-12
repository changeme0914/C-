// Student.cpp: implementation of the Student class.
//
//////////////////////////////////////////////////////////////////////

#include "Student.h"
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Student::Student(char *s_name,int s_age,int s_year,int s_month,int s_day,int s_score):Person(s_name,s_age)
{
	year=s_year;
	month=s_month;
	day=s_day;
	score=s_score;
}

void Student::Disp()
{
	Person::Disp();
	cout<<"birthday:"<<year<<"/"<<month<<"/"<<day<<endl;
	cout<<"score:"<<score<<endl;
}


