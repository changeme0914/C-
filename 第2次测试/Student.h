// Student.h: interface for the Student class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUDENT_H__FD60467A_B639_4DAA_B5AD_094D9975AB3F__INCLUDED_)
#define AFX_STUDENT_H__FD60467A_B639_4DAA_B5AD_094D9975AB3F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include"Teacher.h"
#include"Person.h"

class Student:virtual public Person
{
public:
	Student(char *,int);
	friend void Teacher::Edit(Student &,int);
	void Disp();
protected:
	int score;

};

#endif // !defined(AFX_STUDENT_H__FD60467A_B639_4DAA_B5AD_094D9975AB3F__INCLUDED_)
