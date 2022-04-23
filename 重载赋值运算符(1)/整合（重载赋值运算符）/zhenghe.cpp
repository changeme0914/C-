////////////////////////
// Student.h

class Student  
{
public:
	Student();
	Student(char *,int );
//	Student& operator=(Student&);
	void Disp();
protected:      
    char name[10];      
    int score;
};
///////////////////////////
// Student.cpp:
//#include "Student.h"   多文件需要单文件不需要
#include <cstring>
#include<iostream>
using namespace std;

Student::Student()
{

}

Student::Student(char* s_name,int s_score)
{
	strcpy(name,s_name);
	score=s_score;
}

//Student& Student::operator=(Student &s)
//{
//	strcpy(name,s.name);
//	score=s.score;
//	return *this;
//}

void Student::Disp()
{
	cout<<"Student:"<<name<<","<<score<<endl;
}

////////////////////
// Teacher.h:
class Teacher  
{
public:
	Teacher();
	Teacher(char *,int);
	Teacher(Teacher &);
	Teacher& operator=(Teacher&);
	virtual ~Teacher();
	void Disp();
protected:      
    char *pname;  //存名字的地址      
    int age;   

};
///////////////////
// Teacher.cpp

//#include "Teacher.h"
//#include<cstring>           多文件需要单文件不需要 
//#include<iostream>
//using namespace std;

Teacher::Teacher()
{
}

Teacher::Teacher(char *t_name,int t_age)
{
	pname=new char[strlen(t_name)+1];
	strcpy(pname,t_name);
	age=t_age;
}

Teacher::Teacher(Teacher &t)
{
	pname=new char[strlen(t.pname)+1];
	strcpy(pname,t.pname);
	age=t.age;
}

void Teacher::Disp()
{
	cout<<"Teacher:"<<pname<<","<<age<<endl;
}

Teacher& Teacher::operator=(Teacher &s)
{
	pname=new char[strlen(s.pname)+1];
	strcpy(pname,s.pname);
	age=s.age;
	return *this;
}

Teacher::~Teacher()
{
	delete []pname;
}

////////////////////////
// Tutor.h
class Tutor  
{
public:
	Tutor();
	Tutor(Tutor &);
	Tutor(char *,int,char *,int);
	Tutor &operator=(Tutor &);
	void Disp();
	void Date();
protected:      
    Student s;   
    Teacher t;   
    int num;    //存储师生会面次数      

};
/////////////////////
// Tutor.cpp

//#include "Tutor.h"
//#include<iostream>
//using namespace std;           多文件需要单文件不需要

Tutor::Tutor()
{
}

Tutor::Tutor(char *s_name,int s_score,char *t_name,int t_age):s(s_name,s_score),t(t_name,t_age)
{
	num=0;

}

Tutor::Tutor(Tutor &tt):s(tt.s),t(tt.t)
{
	num=tt.num;
}

Tutor & Tutor::operator =(Tutor & t2)
{
	t=t2.t;
	s=t2.s;
	num=t2.num;
	return *this;
}

void Tutor::Disp()
{
	s.Disp();
	t.Disp();
	cout<<"Number:"<<num<<endl;
}

void Tutor::Date()
{

	num++;
}
///////////////////////
//main.cpp
//#include"Tutor.h"           多文件需要单文件不需要
//#include<iostream>
//using namespace std;
int main()    
{ 
    char name1[15],name2[15];
    int score,age;
    cin>>name1>>score>>name2>>age;
    Tutor tt1(name1,score,name2,age),tt2;    
    tt1.Disp();     
    tt1.Date();    //师生碰面一次    
    tt2=tt1;         //此处调用的哪段代码？   默认赋值 
    tt2.Disp();    
    Tutor tt3=tt1; //此处调用的哪段代码？ 拷贝构造   
    tt3.Date();     
    tt3.Disp();  
    return 0;   
}  
