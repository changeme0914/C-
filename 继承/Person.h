// Person.h: interface for the Person class.
//
//Person.h
#pragma once   //多文件需要单文件不需要
class Person  
{
public:
	Person(char *,int);
	void P_Out();
protected:
	char name[20];
	int age;
};