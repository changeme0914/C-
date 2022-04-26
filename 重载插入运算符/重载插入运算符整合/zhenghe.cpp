/////////////////////////
// Student.h
#include<iostream>
using namespace std;
class Student  
{

public:
	Student(char *,int);
	virtual void disp(ostream &);
protected:
	char sname[20];
	int score;

};
//////////////////
// Student.cpp

//#include "Student.h"            多文件需要单文件不需要
#include<cstring> 

Student::Student(char *s_name,int s_score)
{
	strcpy(sname,s_name);
	score=s_score;
}

void Student::disp(ostream &out)
{
	out<<"name:"<<sname<<","<<"score:"<<score<<endl;
}


///////////////////
// GraduateStudent.h        多文件需要单文件不需要

//#include"Student.h"

class GraduateStudent:public Student
{
public:
	GraduateStudent(char *,int,char *);
	virtual void disp(ostream &);
protected:
	char tname[20];

};
///////////////////////////
//GraduateStudent.cpp
//#include "GraduateStudent.h"    多文件需要单文件不需要
//#include<cstring>
//#include <iostream>
//using namespace std;

GraduateStudent::GraduateStudent(char *s_name,int t_score,char *t_name):Student(s_name,t_score)
{
	strcpy(tname,t_name);
}

void GraduateStudent::disp(ostream& out)
{
	out<<"name:"<<sname<<","<<"score:"<<score<<","<<"teacher:"<<tname<<endl;
}

ostream& operator<<(ostream& out,Student& s)
{
	s.disp(out);
	return out;
}
////////////////////////////////////////
//mian.cpp
//#include"GraduateStudent.h"
//#include <iostream>                多文件需要单文件不需要
//using namespace std;

void fn(Student&s)
{
	cout<<s;
}
int main()   
{

       char s_name[20], t_name[20];
       int  score;
       cin>>s_name>>score;
       Student s(s_name, score);   
       cin>>s_name>>score>>t_name;
       GraduateStudent g(s_name,score,t_name);      
       cout<<s<<g;   
       fn(s);
       fn(g);
       return 0;
} 