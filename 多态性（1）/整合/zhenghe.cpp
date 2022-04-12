////////////////////////
//Person.h
class Person  
{
public:
	Person(char *,int);
	virtual void Disp();
protected:
	char name[20];
	int age;

};
///////////////////
//Person.cpp          多文件需要单文件不需要
//#include "Person.h"  
#include <cstring>
#include<iostream>
using namespace std;

Person::Person(char *p_name,int p_age)
{
	strcpy(name,p_name);
	age=p_age;
}

void Person::Disp()
{
	cout<<"name:"<<name<<" "<<"age:"<<age<<endl;
}
/////////////////
//Student.h

//#include "Person.h"     多文件需要单文件不需要
class Student:virtual public Person
{
public:
	Student(char *,int,int,int,int,int);
	virtual void Disp();

protected:
	int year;
	int month;
	int day;
	int score;
};
//////////////////////
//Student.cpp

//#include "Student.h"      多文件需要单文件不需要
//#include<iostream>
//using namespace std;

Student::Student(char *s_name,int s_age,int s_year,int s_month,int s_day,int s_score):Person(s_name,s_age)
{
	year=s_year;
	month=s_month;
	day=s_day;
	score=s_score;
}

void Student::Disp()
{
	Person::Disp();
	cout<<"birthday:"<<year<<"/"<<month<<"/"<<day<<endl;
	cout<<"score:"<<score<<endl;
}

//////////////////
//Teacher.h

//#include "Person.h"
class Teacher:virtual public Person
{
public:
	Teacher(char *,int,char *);
	virtual void Disp();
protected:
	char title[20];

};
////////////////////
//Teacher.cpp

//#include "Teacher.h"    多文件需要单文件不需要
//#include<cstring>
//#include<iostream>
//using namespace std;

Teacher::Teacher(char *t_name,int t_age,char *s_title):Person(t_name,t_age)
{
	strcpy(title,s_title);
}

void Teacher::Disp()
{
	Person::Disp();
	cout<<"title:"<<title<<endl;
}

///////////////////
//Stu_teacher.h        多文件需要单文件不需要


//#include"Student.h"
//#include"Teacher.h"
class Stu_teacher:public Student,public Teacher 
{

public:
	Stu_teacher(char *,int,int,int,int,int,char *);
	virtual void Disp();

};


////////////////////
//Stu_teacher.cpp

//#include "Stu_teacher.h"   多文件需要单文件不需要
//#include<iostream>
//using namespace std;

Stu_teacher::Stu_teacher(char *stu_name,int stu_age,int stu_year,int stu_month,int stu_day,int stu_score,char *title):Teacher(stu_name,stu_age,title),Student(stu_name,stu_age,stu_year,stu_month,stu_day,stu_score),Person(stu_name,stu_age)
{
	;
}

void Stu_teacher::Disp()
{
	cout<<"name:"<<name<<" "<<"age:"<<age<<endl;
	cout<<"birthday:"<<year<<"/"<<month<<"/"<<day<<endl;
	cout<<"score:"<<score<<endl;
	cout<<"title:"<<title<<endl;
}

//////////////////////
//main.cpp

//#include<iostream>
//using namespace std;      多文件需要单文件不需要
//#include "Stu_teacher.h"

void fn(Person &person)
{
	person.Disp();
}

int main()
{
    char name[20],title[20];
    int age,month,day,year,score;
    cin>>name>>age>>year>>month>>day>>score;
    Student s(name,age,year,month,day,score);
    cin>>name>>age>>title;
    Teacher t(name,age,title);
    cin>>name>>age>>year>>month>>day>>score>>title;
    Stu_teacher st(name,age,year,month,day,score,title);
    s.Disp();  //显示学生的信息
    t.Disp();  //显示教师的信息
    st.Disp(); //显示实习老师的信息
    //t.Assign(s,90);
    //s.Disp();   
    fn(s);  //调用函数fn，显示参数s的有关信息
    fn(t);  //调用函数fn，显示参数t的有关信息
    fn(st); //调用函数fn，显示参数st的有关信息
    return 0;
}




