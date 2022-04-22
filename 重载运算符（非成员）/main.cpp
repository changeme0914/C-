#include "Time.h"
#include<iostream>
using namespace std;

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