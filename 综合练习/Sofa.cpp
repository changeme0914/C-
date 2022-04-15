// Sofa.cpp: implementation of the Sofa class.
//
//////////////////////////////////////////////////////////////////////

#include "Sofa.h"
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Sofa::Sofa(char *s_type,int s_l,int s_w,int s_h,int s_n):Fur(s_type,s_l,s_w,s_h)
{
	num=s_n;
}
void Sofa::Disp()
{
	Fur::Disp();
	cout<<"num:"<<num<<endl;
}
void Sofa::WatchTV()
{
	cout<<"Watch TV"<<endl;
}

