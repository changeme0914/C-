// Teacher.h: interface for the Teacher class.
//
//////////////////////////////////////////////////////////////////////
///Teacher.h
#pragma once  //���ļ���Ҫ���ļ�����Ҫ
#include "Person.h"

class Student;
class Teacher:public Person 
{
public:
	void assignScore(Student &,int);
	Teacher(char *,int,char *);
	void T_Out();
protected:

	char title[20];
};