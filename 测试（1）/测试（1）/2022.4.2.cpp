#define _CRT_SECURE_NO_WARNINGS 1
///////////////////////////////
///Student.h
class Student
{
public:
	Student(char *s_name = "noname", int s_age = 18);
	Student(Student &);
	void S_out();
	virtual ~Student();
protected:
	char *sname;
	int age;
};
///Student.cpp
////////////////////////////////////
#include<iostream>
using namespace std;
#include<cstring>
//#include "Student.h"

Student::Student(char *s_name, int s_age)
{
	sname = new char[strlen(s_name) + 1];
	strcpy(sname, s_name);
	age = s_age;
}
Student::Student(Student &s)
{
	sname = new char[strlen(s.sname) + 1];
	strcpy(sname, s.sname);
	age = s.age;
}
void Student::S_out()
{
	cout << sname << "," << age << endl;
}
Student::~Student()
{
	delete[]sname;
}

////////////////////////////
////Teacher.h
class Teacher
{
public:
	Teacher(char *, char *);
	Teacher(Teacher &);
	void T_out();
	//virtual ~Teacher();
protected:
	char tname[20];
	char job[20];

};
//////////////
/////Teacher.cpp

//#include<iostream>  ���ļ���Ҫ���ļ�����Ҫ
//using namespace std;
//#include<cstring>
//#include "Teacher.h"

//////////////////////////////////////////////////////////////////////

Teacher::Teacher(char *t_name, char *t_job)
{
	strcpy(tname, t_name);
	strcpy(job, t_job);
}

Teacher::Teacher(Teacher &t)
{
	strcpy(tname, t.tname);
	strcpy(job, t.job);
}

void Teacher::T_out()
{
	cout << tname << "," << job << endl;
}
/////////Tutor.h
/////////////////////////////////
class Tutor
{
public:
	Tutor(char *t_name, char *t_job, char *s_name, int age);
	static void T_num();
	void Out();
	Tutor(Teacher &, Student &);
	//virtual ~Tutor();

protected:
	Student stu;
	Teacher tea;
	static int number;

};
//////Tutor.cpp
///////////////////////
//#include "Student.h"
//#include "Teacher.h"    ���ļ���Ҫ���ļ�����Ҫ
//#include "Tutor.h"
//#include<iostream>
//using namespace std;

//////////////////////////////////////////////////////////////////////
int Tutor::number = 0;
Tutor::Tutor(char *t_name, char *t_job, char *s_name, int age) :tea(t_name, t_job), stu(s_name, age)
{
	number++;
}

Tutor::Tutor(Teacher &t, Student &s) : tea(t), stu(s)
{
	number++;
}
void Tutor::T_num()
{
	cout << number << endl;

}
void Tutor::Out()
{
	stu.S_out();
	tea.T_out();

}


///////////////////////////////////////////
////main.cpp
//#include "Student.h"
//#include "Teacher.h"
//#include "Tutor.h"    ���ļ���Ҫ���ļ�����Ҫ
//#include<iostream>
//using namespace std;

void DispTutorNum()
{
	Tutor::T_num();
}
///////////////////���ϴ��붼��Ҫ�ύ������������DispTutorNum����///////////////////
void fn(Tutor tutor)
{
	tutor.Out();
	DispTutorNum();
}
int main()
{
	DispTutorNum();  //��ʾ��ʱ�Ѿ��е�Tutor�������
	char studentName[11], teacherName[11];
	int age;
	char title[20];
	cin >> studentName >> age;  //����ѧ������������
	Student s1, s2(studentName, age);
	cin >> teacherName >> title;  //�����ʦ������ְ��
	Teacher t(teacherName, title);
	Tutor tutor1(teacherName, title, "sun", 19), tutor2(t, s2);
	tutor1.Out();
	tutor2.Out();
	fn(tutor2);
	DispTutorNum();  //��ʾ��ʱ��Tutor�������
	return 0;
}