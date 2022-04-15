// Bed.h: interface for the Bed class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BED_H__830FCBCA_F85E_41D3_90B6_55D2D0BAF6AC__INCLUDED_)
#define AFX_BED_H__830FCBCA_F85E_41D3_90B6_55D2D0BAF6AC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000



#include "Fur.h"
class Bed:virtual public Fur
{
public:
	Bed(char *,int,int,int,char *);
	void sleep();
	
	void Disp();
protected:
	char material[20];

};

#endif // !defined(AFX_BED_H__830FCBCA_F85E_41D3_90B6_55D2D0BAF6AC__INCLUDED_)
