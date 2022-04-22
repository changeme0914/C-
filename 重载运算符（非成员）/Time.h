// Time.h: interface for the Time class.
//
#if !defined(AFX_TIME_H__79704D71_988B_48DA_9D56_4D6DFACF8CC4__INCLUDED_)
#define AFX_TIME_H__79704D71_988B_48DA_9D56_4D6DFACF8CC4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

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

#endif // !defined(AFX_TIME_H__79704D71_988B_48DA_9D56_4D6DFACF8CC4__INCLUDED_)
