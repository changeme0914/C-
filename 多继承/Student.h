// Student.h: interface for the Student class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUDENT_H__DB6F0967_84DB_417B_97E2_92E7DCBCFD97__INCLUDED_)
#define AFX_STUDENT_H__DB6F0967_84DB_417B_97E2_92E7DCBCFD97__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Person.h"

class Student:virtual public Person 
{
public:
	Student(char *,int);
	void Disp();
	void Study();
protected:
	int age;

};

#endif // !defined(AFX_STUDENT_H__DB6F0967_84DB_417B_97E2_92E7DCBCFD97__INCLUDED_)
