// Sofa.h: interface for the Sofa class.
//
//////////////////////////////////////////////////////////////////////
#if !defined(AFX_SOFA_H__7CFCA769_6939_4432_A3FC_5F3A39A951F3__INCLUDED_)
#define AFX_SOFA_H__7CFCA769_6939_4432_A3FC_5F3A39A951F3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Fur.h"


class Sofa:virtual public Fur 
{
public:
	Sofa(char *,int,int,int,int);
	void WatchTV();
	void Disp();
protected:
	int num;

};

#endif // !defined(AFX_SOFA_H__7CFCA769_6939_4432_A3FC_5F3A39A951F3__INCLUDED_)
