// Person.h: interface for the Person class.
//
//Person.h
#pragma once   //���ļ���Ҫ���ļ�����Ҫ
class Person  
{
public:
	Person(char *,int);
	void P_Out();
protected:
	char name[20];
	int age;
};