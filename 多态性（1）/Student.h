// Student.h: interface for the Student class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUDENT_H__2E9EB362_52A9_4C64_8BE6_5A675D60B3A1__INCLUDED_)
#define AFX_STUDENT_H__2E9EB362_52A9_4C64_8BE6_5A675D60B3A1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Person.h"

class Student:virtual public Person
{
public:
	Student(char *,int,int,int,int,int);
	virtual void Disp();

protected:
	int year;
	int month;
	int day;
	int score;

};

#endif // !defined(AFX_STUDENT_H__2E9EB362_52A9_4C64_8BE6_5A675D60B3A1__INCLUDED_)
