// Tutor.h: interface for the Tutor class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TUTOR_H__7E8C4CA1_7FD8_43A1_AE37_A50FC8CD0CB6__INCLUDED_)
#define AFX_TUTOR_H__7E8C4CA1_7FD8_43A1_AE37_A50FC8CD0CB6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include"Teacher.h"
#include"Student.h"
class Tutor  
{
public:
	Tutor();
	Tutor(char *,int,char *,int);
	void Disp();
	void Date();
protected:      
    Student s;   
    Teacher t;   
    int num;    //存储师生会面次数      

};

#endif // !defined(AFX_TUTOR_H__7E8C4CA1_7FD8_43A1_AE37_A50FC8CD0CB6__INCLUDED_)
