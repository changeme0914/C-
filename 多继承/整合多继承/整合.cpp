//////////////////////////////
//Person.h

class Person
{
public:
  Person(char *);
  void Disp();
protected:
  char  pname[20];

};
////////////////////////////
//Person.cpp
//#include "Person.h"   多文件需要单文件不需要
#include<iostream>
#include<cstring>
using namespace std;

Person::Person(char* name)
{
	strcpy(pname,name);
}

void Person::Disp()
{
	cout<<pname<<endl;
}

////////////////////////
//Student.h       多文件需要单文件不需要
//#include "Person.h"

class Student:virtual public Person 
{
public:
	Student(char *,int);
	void Disp();
	void Study();
protected:
	int age;

};

////////////////
///Student.cpp
//#include "Student.h"  多文件需要单文件不需要
//#include<iostream>
//using namespace std;

Student::Student(char *s_name,int s_age):Person(s_name)

{
	age=s_age;
}

void Student::Disp()
{
	Person::Disp();
	cout<<age<<endl;
}

void Student::Study()
{
	cout<<"I'm studying"<<endl;
}

/////////////////////
//Teacher.h
//#include "Person.h"

class Teacher:virtual public Person
{
public:
	Teacher(char *,char *);
	void Teach();
	void Disp();
protected:
	char title[20];


};
///////////
//Teacher.cpp
//#include "Teacher.h"
//#include<cstring>
//#include<iostream>  多文件需要单文件不需要
//using namespace std;
//////////////////////////////////////////////////////////////////////

Teacher::Teacher(char *t_name,char *job):Person(t_name)
{
	strcpy(title,job);
}

void Teacher::Disp()
{
	Person::Disp();
	cout<<title<<endl;
}

void Teacher::Teach()
{
	cout<<"I'm teaching"<<endl;
}
////////////////
//Stu_teacher.h  多文件需要单文件不需要
//#include"Student.h"
//#include"Teacher.h"
class Stu_teacher:public Student,public Teacher
{
public:
	Stu_teacher(char *,int);
	void Disp();

};
///////////////
//Stu_teacher.cpp
//#include "Stu_teacher.h"

Stu_teacher::Stu_teacher(char *st_name,int st_age):Student(st_name,st_age),Teacher(st_name,"jxzj"),Person(st_name)
{
	;
}

void Stu_teacher::Disp()
{
	cout<<pname<<endl;
	cout<<age<<endl;
	cout<<title<<endl;
	
	//Person::Disp();
	//Student::Disp();
	//Teacher::Disp();

}

///////////////
//#include<iostream>   单文件需要多文件不需要
//#include "Stu_teacher.h"

using namespace std;
int main()
{

    char name[15],title[20]; 
    int age; 
    cin>>name>>age>>title;
    Person p(name);
    p.Disp();
    Student s(name,age);
    s.Disp();
    s.Study();
    Teacher t(name,title);
    t.Disp();
    t.Teach();
    Stu_teacher st(name,age); 
    st.Disp();
    st.Study(); 
    st.Teach(); 
    return 0; 
} 