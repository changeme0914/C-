// Stu_teacher.h: interface for the Stu_teacher class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STU_TEACHER_H__5B8B5180_7546_4E19_9BF3_E292858FF9C5__INCLUDED_)
#define AFX_STU_TEACHER_H__5B8B5180_7546_4E19_9BF3_E292858FF9C5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include"Student.h"
#include"Teacher.h"
class Stu_teacher:public Student,public Teacher 
{

public:
	Stu_teacher(char *,int,int,int,int,int,char *);
	virtual void Disp();

};

#endif // !defined(AFX_STU_TEACHER_H__5B8B5180_7546_4E19_9BF3_E292858FF9C5__INCLUDED_)
