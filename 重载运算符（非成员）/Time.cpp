#include "Time.h"
#include<iostream>
using namespace std;
Time::Time(int s,int f,int m)
{
	shi=s;
	fen=f;
	miao=m;
}

Time operator-(Time &t1,Time &t2)
{
	Time t;
	t.shi=t1.shi-t2.shi;
	t.fen=t1.fen-t2.fen;
	t.miao=t1.miao-t2.miao;
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
	cout<<shi<<":"<<fen<<'\''<<miao<<'\"';
}

Time& operator--(Time &t)
{
	t.miao-=1;
	return t;
}

Time operator--(Time &t,int)
{
	Time tt(t);
	t.miao+=1;
	if(t.miao>60)
	{
		t.fen+=1;

	}
	if(t.fen>60)
	{
		t.shi+=1;
	}
	return tt;

}
