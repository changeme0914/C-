// SleeperSofa.h: interface for the SleeperSofa class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SLEEPERSOFA_H__426FF013_A17C_435D_8843_0706C8B8745A__INCLUDED_)
#define AFX_SLEEPERSOFA_H__426FF013_A17C_435D_8843_0706C8B8745A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include"Bed.h"
#include"Sofa.h"
class SleeperSofa:public Sofa,public Bed
{
public:
	SleeperSofa(char *,int,int,int,char *,int);
	SleeperSofa(SleeperSofa &);
	static void Getnum();
	void FoldOut();
	void Disp();
	~SleeperSofa();
protected:
	static int number;

};

#endif // !defined(AFX_SLEEPERSOFA_H__426FF013_A17C_435D_8843_0706C8B8745A__INCLUDED_)
