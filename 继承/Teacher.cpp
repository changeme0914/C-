//Teacher.cpp
#include <cstring>
#include "Teacher.h"
#include "Student.h"
#include <iostream>  //���ļ���Ҫ���ļ�����Ҫ
using namespace std;

Teacher::Teacher(char *name,int age,char *t):Person(name,age)
{
	strcpy(title,t);
}

void Teacher::T_Out()
{
	Person::P_Out();
	cout<<"title:"<<title<<endl;
}

void Teacher::assignScore(Student &s,int m)
{
	s.score=m;
}

