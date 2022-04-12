// Stu_teacher.cpp: implementation of the Stu_teacher class.
//
//////////////////////////////////////////////////////////////////////

#include "Stu_teacher.h"
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Stu_teacher::Stu_teacher(char *stu_name,int stu_age,int stu_year,int stu_month,int stu_day,int stu_score,char *title):Teacher(stu_name,stu_age,title),Student(stu_name,stu_age,stu_year,stu_month,stu_day,stu_score),Person(stu_name,stu_age)
{
	;
}


void Stu_teacher::Disp()
{
	cout<<"name:"<<name<<" "<<"age:"<<age<<endl;
	cout<<"birthday:"<<year<<"/"<<month<<"/"<<day<<endl;
	cout<<"score:"<<score<<endl;
	cout<<"title:"<<title<<endl;
}