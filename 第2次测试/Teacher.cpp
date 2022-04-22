// Teacher.cpp: implementation of the Teacher class.
//
//////////////////////////////////////////////////////////////////////

#include "Teacher.h"
#include"Student.h"
#include<cstring>
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////


Teacher::Teacher(char *t_name,char *t_title):Person(t_name)
{
	strcpy(title,t_title);
}
void Teacher::Disp()

{

	cout<<name<<","<<title<<endl;
}
void Teacher::Edit(Student &s,int t_score)
{
	s.score=t_score;
}

