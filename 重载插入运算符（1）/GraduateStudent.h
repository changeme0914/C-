// GraduateStudent.h: interface for the GraduateStudent class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GRADUATESTUDENT_H__9E09C898_A4F3_4779_BD5C_F50DB91251D6__INCLUDED_)
#define AFX_GRADUATESTUDENT_H__9E09C898_A4F3_4779_BD5C_F50DB91251D6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include"Student.h"
#include <iostream>
using namespace std;
class GraduateStudent:public Student
{
public:
	GraduateStudent(char *,int,char *);
	virtual void disp(ostream &);
protected:
	char tname[20];

};

#endif // !defined(AFX_GRADUATESTUDENT_H__9E09C898_A4F3_4779_BD5C_F50DB91251D6__INCLUDED_)
