// Person.h: interface for the Person class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSON_H__8EC447A8_30AF_43D7_BF18_2FE2F94D029D__INCLUDED_)
#define AFX_PERSON_H__8EC447A8_30AF_43D7_BF18_2FE2F94D029D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Person  
{
public:
	Person(char *,int);
	virtual void Disp();
protected:
	char name[20];
	int age;

};

#endif // !defined(AFX_PERSON_H__8EC447A8_30AF_43D7_BF18_2FE2F94D029D__INCLUDED_)
