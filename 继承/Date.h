// Date.h: interface for the Date class.
#pragma once   //���ļ���Ҫ���ļ�����Ҫ
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