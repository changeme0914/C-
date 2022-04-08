// Teacher.h: interface for the Teacher class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEACHER_H__AFFC952F_780F_48EA_B423_C7B38B8D36E6__INCLUDED_)
#define AFX_TEACHER_H__AFFC952F_780F_48EA_B423_C7B38B8D36E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Person.h"

class Teacher:virtual public Person
{
public:
	Teacher(char *,char *);
	void Teach();
	void Disp();
protected:
	char title[20];


};

#endif // !defined(AFX_TEACHER_H__AFFC952F_780F_48EA_B423_C7B38B8D36E6__INCLUDED_)
