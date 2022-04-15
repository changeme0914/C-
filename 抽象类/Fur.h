// Fur.h: interface for the Fur class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_FUR_H__C05840F7_C594_4C75_84BC_2CBC8EDA0D1B__INCLUDED_)
#define AFX_FUR_H__C05840F7_C594_4C75_84BC_2CBC8EDA0D1B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Fur  
{
public:
	void Setweight(int);
	virtual void fun()=0;
	int Getweight();
protected:
	int weight;

};

#endif // !defined(AFX_FUR_H__C05840F7_C594_4C75_84BC_2CBC8EDA0D1B__INCLUDED_)
