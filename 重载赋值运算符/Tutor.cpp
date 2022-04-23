// Tutor.cpp: implementation of the Tutor class.
//
//////////////////////////////////////////////////////////////////////

#include "Tutor.h"
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Tutor::Tutor()
{
}

Tutor::Tutor(char *s_name,int s_score,char *t_name,int t_age):s(s_name,s_score),t(t_name,t_age)
{
	num=0;

}

void Tutor::Disp()
{
	s.Disp();
	t.Disp();
	cout<<"Number:"<<num<<endl;
}

void Tutor::Date()
{

	num++;
}

