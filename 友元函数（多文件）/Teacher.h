// Teacher.h: interface for the Teacher class.
//
//////////////////////////////////////////////////////////////////////

#pragma once
class Student;   //前向声明或者前导声明

class Teacher
{
public:
	void assignGrades(Student&,int);    //友元函数所在的类定义在前
protected:
	int n;
};