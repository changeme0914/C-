////////////////////
//Student.h
#pragma once   //���ļ���Ҫ���ļ�����Ҫ
#include "Date.h"
#include "Person.h"
#include "Teacher.h"
class Student:public Person
{
public:
	friend void Teacher::assignScore(Student &,int);
	Student(char *,int,int,int,int,int);
	void S_Out();
protected:
	Date date;
	int score;
};