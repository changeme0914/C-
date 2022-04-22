// StuTeacher.cpp: implementation of the StuTeacher class.
//
//////////////////////////////////////////////////////////////////////

#include "StuTeacher.h"
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

StuTeacher::StuTeacher(char *st_name,int st_score,char *st_title,int st_age):Person(st_name),Teacher(st_name,st_title),Student(st_name,st_score)
{
	age=st_age;
}

void StuTeacher::Disp()
{
	cout<<name<<","<<score<<","<<title<<","<<age<<endl;
}


