
#if !defined(AFX_STUDENT_H__01244F91_BAC8_4340_848C_B44CD423DB0F__INCLUDED_)
#define AFX_STUDENT_H__01244F91_BAC8_4340_848C_B44CD423DB0F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Student  
{
public:
	//
	Student();
	Student(char *);
	Student(char *p,int s);
	Student(Student &);
	static int func();
	void output();
	//
	virtual ~Student();
protected: 
	char *pname;
	int score;
	static int num;

};

#endif