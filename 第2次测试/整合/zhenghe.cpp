//////////////////////////
//Person.h
class Person  
{
public:
	Person(char *);
	virtual void Disp();
protected:
	char name[20];

};
///////////////////////
//Person.cpp
//#include "Person.h"  多文件需要单文件不需要
#include<cstring>
#include<iostream>
using namespace std;

Person::Person(char *p_name)
{
	strcpy(name,p_name);
}
void Person::Disp()
{}
///////////////
//Teacher.h
//#include"Person.h"
class Student;
class Teacher:virtual public Person
{
public:
	Teacher(char *,char *);
	void Edit(Student &,int);
	void Disp();
protected:
	char title[20];

};
///////////////////
//Teacher.cpp
//#include "Teacher.h"
//#include"Student.h"
#include<cstring>
#include<iostream>
using namespace std;

Teacher::Teacher(char *t_name,char *t_title):Person(t_name)
{
	strcpy(title,t_title);
}
void Teacher::Disp()
{

	cout<<name<<","<<title<<endl;
}
////////////////////
//Student.h
class Student:virtual public Person
{
public:
	Student(char *,int);
	friend void Teacher::Edit(Student &,int);
	void Disp();
protected:
	int score;

};
///////////////////
//Student.cpp
//#include "Student.h"

#include<iostream>
using namespace std;
Student::Student(char *s_name,int s_score):Person(s_name)
{
	score=s_score;
}

void Student::Disp()
{
	cout<<name<<","<<score<<endl;
}

void Teacher::Edit(Student &s,int t_score)
{
	s.score=t_score;
}
//////////////////
//StuTeacher.h
//#include"Student.h"
//#include"Teacher.h"
class StuTeacher:public Teacher,public Student 
{
public:
	StuTeacher(char *,int,char *,int);
	void Disp();
protected:
	int age;

};
//////////////////
//StuTeacher.cpp
//#include "StuTeacher.h"
#include<iostream>
using namespace std;

StuTeacher::StuTeacher(char *st_name,int st_score,char *st_title,int st_age):Person(st_name),Teacher(st_name,st_title),Student(st_name,st_score)
{
	age=st_age;
}

void StuTeacher::Disp()
{
	cout<<name<<","<<score<<","<<title<<","<<age<<endl;
}

/////////////
//main.cpp
//#include<iostream>
//using namespace std;
//#include"StuTeacher.h"

void f(Person &ss)
{
	ss.Disp();
}
int main()

{

    char name[10],title[10];

    int score,age;

    cin>>name>>score;

    Student s(name,score);

    cin>>name>>title;

    Teacher t(name,title);

    cin>>name>>score>>title>>age;

    StuTeacher st(name,score,title,age);

    f(s);

    f(t);

    f(st);

    st.Edit(s,90);

    s.Disp();

    return 0;

}
