// SleeperSofa.cpp: implementation of the SleeperSofa class.
//
//////////////////////////////////////////////////////////////////////

#include "SleeperSofa.h"
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

int SleeperSofa::number=0;
SleeperSofa::SleeperSofa(char *ss_type,int ss_l,int ss_w,int ss_h,char *ss_ma,int ss_n):Fur(ss_type,ss_l,ss_w,ss_h),Bed(ss_type,ss_l,ss_w,ss_h,ss_ma),Sofa(ss_type,ss_l,ss_w,ss_h,ss_n)
{
	number++;
}

SleeperSofa::SleeperSofa(SleeperSofa &s):Fur(s.ptype,s.length,s.width,s.high),Bed(s.ptype,s.length,s.width,s.high,s.material),Sofa(s.ptype,s.length,s.width,s.high,s.num)
{
	number++;
}

void SleeperSofa::Disp()
{
	cout<<"type:"<<ptype<<endl;
	cout<<"length:"<<length<<endl;
	cout<<"width:"<<width<<endl;
	cout<<"high:"<<high<<endl;
	cout<<"material:"<<material<<endl;
	cout<<"num:"<<num<<endl;
}

void SleeperSofa::Getnum()
{
	cout<<number<<endl;
}

void SleeperSofa::FoldOut()
{
	Bed::sleep();
	Sofa::WatchTV();
	cout<<"Fold Out"<<endl;
}
SleeperSofa::~SleeperSofa()
{
	number--;
}


