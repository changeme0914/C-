#include"SofaBed.h"
#include<iostream>
using namespace std;
void fn(Fur * f)
{
	cout<<"weight:"<<f->Getweight();
	cout<<" ";
	f->fun();
}
int main()
{
    int  weight1,weight2,weight3; 
    Bed   *b=new Bed;
    Sofa  *s=new  Sofa;
    SofaBed  *sb=new SofaBed;
    cin>>weight1>>weight2>>weight3;
    b->Setweight(weight1);
    s->Setweight(weight2);
    sb->Setweight(weight3);
    fn(b);
    fn(s);
    fn(sb); 
    delete b;
    delete s;
    delete sb;
    return 0;
}