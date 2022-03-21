#define _CRT_SECURE_NO_WARNINGS 1
#include"Tdate.h"
#include<iostream>
using namespace std;
void Tdate::in(int a, int b, int c)
{
	day = a;
	month = b;
	year = c;
}
void Tdate::Out()
{
	cout << year << "/" << month << "/" << day << endl;
}