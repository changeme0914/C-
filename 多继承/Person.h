// Person.h: interface for the Person class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSON_H__875F3D61_2D73_40DF_8D5F_ED344F1B078A__INCLUDED_)
#define AFX_PERSON_H__875F3D61_2D73_40DF_8D5F_ED344F1B078A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Person
{
public:
  Person(char *);
  void Disp();
protected:
  char  pname[20];

};

#endif // !defined(AFX_PERSON_H__875F3D61_2D73_40DF_8D5F_ED344F1B078A__INCLUDED_)
