// GraduateStudent.cpp: implementation of the GraduateStudent class.
//
//////////////////////////////////////////////////////////////////////

#include "GraduateStudent.h"
#include<cstring>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

GraduateStudent::GraduateStudent(char *s_name,int t_score,char *t_name):Student(s_name,t_score)
{
	strcpy(tname,t_name);
}

void GraduateStudent::disp(ostream& out)
{
	out<<"name:"<<sname<<","<<"score:"<<score<<","<<"teacher:"<<tname<<endl;
}

