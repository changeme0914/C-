////////
///Student.cpp
#include "Student.h"
#include <iostream>
using namespace std;
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

