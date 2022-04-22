// Teacher.h: interface for the Teacher class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEACHER_H__70E0E9EE_B686_406F_A44A_D58D61FB27D8__INCLUDED_)
#define AFX_TEACHER_H__70E0E9EE_B686_406F_A44A_D58D61FB27D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include"Person.h"
class Student;
class Teacher:virtual public Person
{
public:
	Teacher(char *,char *);
	void Edit(Student &,int);
	void Disp();
protected:
	char title[20];

};

#endif // !defined(AFX_TEACHER_H__70E0E9EE_B686_406F_A44A_D58D61FB27D8__INCLUDED_)
