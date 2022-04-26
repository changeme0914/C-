// Student.cpp: implementation of the Student class.
//
//////////////////////////////////////////////////////////////////////

#include "Student.h"
#include<cstring>


Student::Student(char *s_name,int s_score)
{
	strcpy(sname,s_name);
	score=s_score;
}

void Student::disp(ostream &out)
{
	out<<"name:"<<sname<<","<<"score:"<<score<<endl;
}


