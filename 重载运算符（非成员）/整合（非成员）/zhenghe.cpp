////////////////////
//Time.h
class Time  
{
public:
	Time(int s=0,int f=0,int m=0);
	void disp();
	friend Time operator-(Time &,Time &);
	friend Time& operator--(Time &);
	friend Time operator--(Time&,int);
protected:
	int shi;
	int fen;
	int miao;

};
//////////////////////////
//time.cpp

//#include "Time.h"
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
	if(t.shi<0)
	{
		t.shi=23+t.shi;
	}
	return t;
}

void Time::disp()
{
	cout<<shi<<":"<<fen<<'\''<<miao<<'\"'<<endl;
}

Time& operator--(Time &t)
{
	t.miao-=1;
	if(t.miao<0)
	{
		t.miao =t.miao+60;
		t.fen--;
	}
	if(t.fen<0)
	{
		t.fen=t.fen+60;
		t.shi--;
	}
	if(t.shi<0)
	{
		t.shi=23+t.shi;
	}
	return t;
}

Time operator--(Time &t,int)
{
	Time tt(t);
	t.miao-=1;
	if(t.miao<0)
	{
		t.miao =t.miao+60;
		t.fen--;
	}
	if(t.fen<0)
	{
		t.fen=t.fen+60;
		t.shi--;
	}
	if(t.shi<0)
	{
		t.shi=23+t.shi;
	}
	return tt;

}
///////////////////////////
//main.cpp
//#include "Time.h"   多文件需要单文件不需要
//#include<iostream>
//using namespace std;

int main()      
{   
	int h1,m1,s1,h2,m2,s2;
	cin>>h1>>m1>>s1>>h2>>m2>>s2;
	Time  t1(h1,m1,s1), t2(h2,m2,s2), t;      
    t=t1-t2;      
    t.disp();      
	t--;      
	t.disp();      
    (--t)--;      
	t.disp(); 
	(t--).disp();
	t.disp();
    return 0;    

}
