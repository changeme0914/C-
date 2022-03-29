// Student.cpp: implementation of the Student class.
//
//////////////////////////////////////////////////////////////////////

#include "Student.h"
#include<cstring>
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////


int Student::num=0;

Student::Student()
{
	pname=new char[10];
	strcpy(pname,"");
	score=0;
	num++;
}

Student::Student(char *Nam,int s)
{
	pname=new char[strlen(Nam)+1];
	strcpy(pname,Nam);
	score=s;
	num++;
}

Student::Student(char *Nam)
{
	pname=new char[10];
	strcpy(pname,Nam);
	score=0;
	num++;
}

Student::Student(Student &s2)
{
	pname=new char[strlen(s2.pname)+1];
	strcpy(pname,s2.pname);
	score=s2.score;
	num++;
}

void Student::output()
{
	cout<<"name:"<<pname<<","<<"score:"<<score<<endl;
}

int Student::func()
{
	return num;
}

Student::~Student()
{
	delete []pname;
	num--;
}
