// Fur.h: interface for the Fur class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_FUR_H__FF7A9C60_A23C_4140_9EAA_E68860F805EB__INCLUDED_)
#define AFX_FUR_H__FF7A9C60_A23C_4140_9EAA_E68860F805EB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Fur  
{
public:
	Fur(char *,int,int,int);
	void Disp();
	virtual ~Fur();
protected:
	char * ptype;///
	int length;
	int width;
	int high;


};

#endif // !defined(AFX_FUR_H__FF7A9C60_A23C_4140_9EAA_E68860F805EB__INCLUDED_)
