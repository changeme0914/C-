#define _CRT_SECURE_NO_WARNINGS 1
#include"student.h"
#include<cstring>
#include<iostream>
using namespace std;
void Student::Set(char *x,int y)
{
	strcpy(num, x);
	score = y;
}
void Student::Out()
{
	cout << num << " " << score << endl;
}
void Student::Edit(int ne)
{
	score = ne;
}
