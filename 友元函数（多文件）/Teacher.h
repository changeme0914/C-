// Teacher.h: interface for the Teacher class.
//
//////////////////////////////////////////////////////////////////////

#pragma once
class Student;   //ǰ����������ǰ������

class Teacher
{
public:
	void assignGrades(Student&,int);    //��Ԫ�������ڵ��ඨ����ǰ
protected:
	int n;
};