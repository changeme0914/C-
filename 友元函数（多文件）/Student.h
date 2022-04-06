// Student.h: interface for the Student class.

#pragma once
#include "Teacher.h"
class Student
{
	friend void Teacher::assignGrades(Student&,int);
public:
	Student(char*p="no name");
	void disp();   
protected:
	char name[20];    
	int grade;
};


