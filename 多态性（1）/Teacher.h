// Teacher.h: interface for the Teacher class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEACHER_H__B305BCDD_6DF0_421F_8744_55321A8E76E6__INCLUDED_)
#define AFX_TEACHER_H__B305BCDD_6DF0_421F_8744_55321A8E76E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Person.h"
class Teacher:virtual public Person
{
public:
	Teacher(char *,int,char *);
	virtual void Disp();
protected:
	char title[20];

};

#endif // !defined(AFX_TEACHER_H__B305BCDD_6DF0_421F_8744_55321A8E76E6__INCLUDED_)
