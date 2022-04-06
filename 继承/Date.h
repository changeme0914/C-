// Date.h: interface for the Date class.
#pragma once   //多文件需要单文件不需要
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