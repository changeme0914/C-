//////////////////////////
//time.cpp

#include "Time.h"
#include<iostream>
using namespace std;
Time::Time(int s,int f,int m)
{
	shi=s;
	fen=f;
	miao=m;
}

Time Time::operator-(Time &tt)
{
	Time t;
	t.shi=shi-tt.shi;
	t.fen=fen-tt.fen;
	t.miao=miao-tt.miao;
	if(t.miao<0)
	{
		t.miao+=60;
		t.fen-=1;
	}
	if(t.fen<0)
	{
		t.fen +=60;
		t.shi-=1;
	}
	return t;
}

void Time::disp()
{
	cout<<shi<<":"<<fen<<'\''<<miao<<'\"'<<endl;
}

Time& Time:: operator--()
{
	miao-=1;
	return *this; 
}

Time Time::operator--(int)
{
	Time tt(*this);
	miao-=1;
	return tt;

}
