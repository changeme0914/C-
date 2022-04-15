
////////////////////////
//Fur.h               
class Fur  
{
public:
	void Setweight(int);
	virtual void fun()=0;
	int Getweight();
protected:
	int weight;

};

////////////////
//Fur.cpp
//#include "Fur.h"   多文件需要单文件不需要

void Fur::Setweight(int we)
{
	weight=we;
}
int Fur::Getweight()
{
	return weight;
}

//////////////////////////////
//Bed.h

//#include "Fur.h"
class Bed:virtual public Fur
{
public:

	void fun();

};

//////////////////
//Bed.cpp

//#include "Bed.h"
#include<iostream>
using namespace std;

void Bed::fun()
{
	cout<<"BBBBBB"<<endl;
}

////////////////
//Sofa.h

//#include "Fur.h"
class Sofa:virtual public Fur
{
public:
	void fun();
};

///////////
//Sofa.cpp
//#include "Sofa.h"多文件需要单文件不需要
//#include<iostream>
//using namespace std;

void Sofa::fun()

{
	cout<<"SSSSSS"<<endl;
}


//////////////
//SofaBed.h

//#include "Bed.h"
//#include "Sofa.h"
class SofaBed:public Bed,public Sofa
{
public:
	void fun();

};

//////////////
//SofaBed.cpp
//#include "SofaBed.h"
//#include<iostream>多文件需要单文件不需要
//using namespace std;

void SofaBed::fun()
{
	cout<<"SBSBSB"<<endl;
}

//////////////////
//main.cpp
//#include"SofaBed.h"   多文件需要单文件不需要
//#include<iostream>
//using namespace std;
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