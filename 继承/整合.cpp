//Date.h
//#pragma once   多文件需要单文件不需要
class Date  
{
public:
	Date(int,int,int);
	void D_Out();
protected:
	int year;
	int month;
	int day;
};
//Date.cpp
//#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int a,int b,int c)
{
	year=a;
	month=b;
	day=c;
}

void Date::D_Out()
{
	cout<<"birthday:"<<year<<"/"<<month<<"/"<<day<<endl;
}

//Person.h
//#pragma once   多文件需要单文件不需要
class Person  
{
public:
	Person(char *,int);
	void P_Out();
protected:
	char name[20];
	int age;
};
//Person.cpp
#include <cstring>
//#include "Person.h"
//#include <iostream>
//using namespace std;  单文件需要多文件不需要

Person::Person(char * n,int m)
{
	strcpy(name,n);
	age=m;
}

void Person::P_Out()
{
	cout<<"name:"<<name<<" "<<"age:"<<age<<endl;
}
/////////////////////
///Teacher.h
//#pragma once  多文件需要单文件不需要
//#include "Person.h"

class Student;
class Teacher:public Person 
{
public:
	void assignScore(Student &,int);
	Teacher(char *,int,char *);
	void T_Out();
protected:
	char title[20];
};
////////////////////
//Teacher.cpp
//#include <cstring>
//#include "Teacher.h"
//#include "Student.h"
//#include <iostream>  单文件需要多文件不需要
//using namespace std;

Teacher::Teacher(char *name,int age,char *t):Person(name,age)
{
	strcpy(title,t);
}

void Teacher::T_Out()
{
	Person::P_Out();
	cout<<"title:"<<title<<endl;
}
////////////////////
//Student.h
//#pragma once   多文件需要单文件不需要
//#include "Date.h
//#include "Person.h"
//#include "Teacher.h"
class Student:public Person
{
public:
	friend void Teacher::assignScore(Student &,int);
	Student(char *,int,int,int,int,int);
	void S_Out();
protected:
	Date date;
	int score;
};
////////
///Student.cpp
///#include "Student.h"
//#include <iostream>
//using namespace std;
Student::Student(char *name,int age,int year,int month,int day,int sc):Person(name,age),date(year,month,day),score(sc)
{
	;
}

void Student::S_Out()
{
	Person::P_Out();
	date.D_Out();
	cout<<"score:"<<score<<endl;
}

void Teacher::assignScore(Student &s,int m)
{
	s.score=m;
}

////////////////
//main.cpp
//#include "Student.h"
//#include "Teacher.h"
//#include <iostream>
//using namespace std;

int main()
{
	int new_score;
	char s_name[20];
	char t_name[20];
	char title[20];
	int s_age;
	int t_age;
	int year,month,day;
	int score;
	cin>>s_name>>s_age;
	cin>>year>>month>>day>>score;
	cin>>t_name>>t_age>>title;

	Student s(s_name,s_age,year,month,day,score);
	s.S_Out();

	Teacher t(t_name,t_age,title);
	t.T_Out();

	cin>>new_score;
	t.assignScore(s,new_score);
	s.S_Out();
	
	return 0;
}