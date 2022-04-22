// StuTeacher.h: interface for the StuTeacher class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUTEACHER_H__40C43C53_0282_41D1_9251_7CEE1FD72022__INCLUDED_)
#define AFX_STUTEACHER_H__40C43C53_0282_41D1_9251_7CEE1FD72022__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include"Student.h"
#include"Teacher.h"
class StuTeacher:public Teacher,public Student 
{
public:
	StuTeacher(char *,int,char *,int);
	void Disp();
protected:
	int age;
	

};

#endif // !defined(AFX_STUTEACHER_H__40C43C53_0282_41D1_9251_7CEE1FD72022__INCLUDED_)
