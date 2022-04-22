// Time.h: interface for the Time class.
//Time.h
class Time  
{
public:
	Time(int s=0,int f=0,int m=0);
	void disp();
	Time operator-(Time &);
	Time& operator--();
	Time operator--(int);
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

Time Time::operator-(Time &tt)
{
	Time t;
	if(miao>tt.miao)
	{
		t.miao=miao-tt.miao;
	}
	else
	{
		t.miao =miao+60-tt.miao;
		fen--;
	}
	if(fen>tt.fen)
	{
		t.fen=fen-tt.fen;
	}
	else
	{
		t.fen =fen+60-tt.fen;
		shi--;
	}
	t.shi=shi-tt.shi;
	if(t.shi<0)
	{
		t.shi=24+t.shi;
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
	if(miao<0)
	{
		miao =miao+60;
		fen--;
	}
	if(fen<0)
	{
		fen=fen+60;
		shi--;
	}
	if(shi<0)
	{
		shi=23+shi;
	}
	return *this; 
}

Time Time::operator--(int)
{
	Time tt(*this);
	miao-=1;
	if(miao<0)
	{
		miao =miao+60;
		fen--;
	}
	if(fen<0)
	{
		fen=fen+60;
		shi--;
	}
	if(shi<0)
	{
		shi=23+shi;
	}
	return tt;

}
///////////////////
//main.cpp
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
