// Fur.cpp: implementation of the Fur class.
//
//////////////////////////////////////////////////////////////////////

#include "Fur.h"
#include<cstring>
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
Fur::Fur(char *type,int L,int W,int H)
{
	ptype=new char[strlen(type)+1];
	length=L;
	width=W;
	high=H;
	strcpy(ptype,type);


}
void Fur::Disp()
{
	cout<<"type:"<<ptype<<endl;
	cout<<"length:"<<length<<endl;
	cout<<"width:"<<width<<endl;
	cout<<"high:"<<high<<endl;

}

Fur::~Fur()
{
	delete []ptype;
}
