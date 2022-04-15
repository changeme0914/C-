// Bed.cpp: implementation of the Bed class.
//
//////////////////////////////////////////////////////////////////////
#include "Bed.h"
#include<cstring>
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Bed::Bed(char *b_type,int b_l,int b_w,int b_h,char *b_ma):Fur(b_type,b_l,b_w,b_h)
{
	strcpy(material,b_ma);
}
void Bed::Disp()
{
	Fur::Disp();
	cout<<"material:"<<material<<endl;
}
void Bed::sleep()

{
	cout<<"Sleep"<<endl;
}
