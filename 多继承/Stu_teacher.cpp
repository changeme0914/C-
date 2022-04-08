// Stu_teacher.cpp: implementation of the Stu_teacher class.
//
//////////////////////////////////////////////////////////////////////

#include "Stu_teacher.h"
#include<cstring>
#include<iostream>
using namespace std;
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

