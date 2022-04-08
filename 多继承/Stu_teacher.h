// Stu_teacher.h: interface for the Stu_teacher class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STU_TEACHER_H__F4A61850_2E21_4ED2_93ED_3DC6D8FC6EE0__INCLUDED_)
#define AFX_STU_TEACHER_H__F4A61850_2E21_4ED2_93ED_3DC6D8FC6EE0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Student.h"
#include "Teacher.h"
class Stu_teacher:public Student,public Teacher
{
public:
	Stu_teacher(char *,int);
	void Disp();

};

#endif // !defined(AFX_STU_TEACHER_H__F4A61850_2E21_4ED2_93ED_3DC6D8FC6EE0__INCLUDED_)
