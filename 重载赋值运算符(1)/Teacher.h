// Teacher.h: interface for the Teacher class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEACHER_H__CF5375F0_C1E1_4D72_BE16_05F211EC1118__INCLUDED_)
#define AFX_TEACHER_H__CF5375F0_C1E1_4D72_BE16_05F211EC1118__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Teacher  
{
public:
	Teacher();
	Teacher(char *,int);
	Teacher& operator=(Teacher&);
	virtual ~Teacher();
	void Disp();
protected:      
    char *pname;  //´æÃû×ÖµÄµØÖ·      
    int age;   

};

#endif // !defined(AFX_TEACHER_H__CF5375F0_C1E1_4D72_BE16_05F211EC1118__INCLUDED_)
