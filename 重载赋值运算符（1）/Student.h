// Student.h: interface for the Student class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUDENT_H__A067E85E_4EAD_47FF_9142_E6F92E30FD03__INCLUDED_)
#define AFX_STUDENT_H__A067E85E_4EAD_47FF_9142_E6F92E30FD03__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Student  
{
public:
	Student();
	Student(char *,int );
	Student& operator=(Student&);
	void Disp();
protected:      
    char name[10];      
    int score;
};

#endif // !defined(AFX_STUDENT_H__A067E85E_4EAD_47FF_9142_E6F92E30FD03__INCLUDED_)
