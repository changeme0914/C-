// Teacher.h: interface for the Teacher class.
//
//////////////////////////////////////////////////////////////////////
///Teacher.h
#pragma once  //多文件需要单文件不需要
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