#include<iostream>
using namespace std;
///////////////A.h///////////////
class A{
public:
    A()
	{x=1;}
    void Disp()
	{cout<<x;}
protected:
    int x;
};
///////////////C.h///////////////
class C{
public:
    C()
	{z=3;}
    void Disp()
	{cout<<z;}
protected:
    int z;
};
////////////////B.h//////////////
class B : public A{
public:
    B();
    B(int);
    B(B&);
    ~B();
    B& operator=(B&);
    void Init()
	{y=0;}
    void Disp();
protected:
    C c;
    int y;

};
/////////////B.cpp///////////////
//自行添加所缺代码，并将所缺代码提交到考试系统，其他代码不需要提交！！！

B::B(int b):y(b)
{
}

B::B()
{
}
B::B(B&b)
{
	x=b.x;
	c=b.c;
	y=b.y;
}
B&B::operator =(B&b)
{
	y=b.y;
	c=b.c;
	x=b.x;
	return *this;
}
B::~B()
{
}
void B::Disp()
{
    A::Disp();
    cout<<','<<y<<',';
    c.Disp();
    cout<<endl;
}
//////////////////////////////////
int main()
{
    B b1;
    b1.Init();
    b1.Disp();
    B b2(2);
    b2.Disp();
    B b3(b2);
    b3.Disp();
    b1=b3;
    b1.Disp();
    return 0;
}