// Student.cpp: implementation of the Student class.
//
//////////////////////////////////////////////////////////////////////

#include "Student.h"
#include <cstring>
#include<iostream>
using namespace std;

Student::Student()
{

}

Student::Student(char* s_name,int s_score)
{
	strcpy(name,s_name);
	score=s_score;
}

Student& Student::operator=(Student &s)
{
	strcpy(name,s.name);
	score=s.score;
	return *this;
}

void Student::Disp()
{
	cout<<"Student:"<<name<<","<<score<<endl;
}