// Person.h: interface for the Person class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSON_H__EEE47596_D1F5_4D3C_8183_89C3A89ADC4C__INCLUDED_)
#define AFX_PERSON_H__EEE47596_D1F5_4D3C_8183_89C3A89ADC4C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Person  
{
public:
	Person(char *);
	virtual void Disp();
protected:
	char name[20];

};

#endif // !defined(AFX_PERSON_H__EEE47596_D1F5_4D3C_8183_89C3A89ADC4C__INCLUDED_)
