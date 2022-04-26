// Student.h: interface for the Student class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUDENT_H__53913ABF_909A_4BA5_9472_E3EB4945E6AF__INCLUDED_)
#define AFX_STUDENT_H__53913ABF_909A_4BA5_9472_E3EB4945E6AF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <iostream>
using namespace std;
class Student  
{

public:
	Student(char *,int);
	virtual void disp(ostream &);
protected:
	char sname[20];
	int score;

};

#endif // !defined(AFX_STUDENT_H__53913ABF_909A_4BA5_9472_E3EB4945E6AF__INCLUDED_)
