#define _CRT_SECURE_NO_WARNINGS 1
//student.h 文件
#include<iostream>//单文件需要多文件不需要
#include<cstring>
using namespace std;
class Student
{
public:
	//void Set(char*, int);
	//void  Edit(int);    
	//void Out();      多文件需要单文件不需要
	void Set(char *x, int y)  //单文件需要 多文件不需要
	{
		strcpy(num, x);
		score = y;
	}
	void Out()
	{
		cout << num << " " << score << endl;
	}
	void Edit(int ne)
	{
		score = ne;
	}                        //单文件需要多文件不需要
    
protected:
	char  num[10];
	int  score;
};

//student.cpp 文件      多文件需要单文件不需要

//#include"student.h"
//#include<cstring>
//#include<iostream>
//using namespace std;
//void Student::Set(char *x, int y)
//{
//	strcpy(num, x);
//	score = y;
//}
//void Student::Out()
//{
//	cout << num << " " << score << endl;
//}
//void Student::Edit(int ne)
//{
//	score = ne;
//}

//主函数 文件

//#include<iostream>
//using namespace std;
//#include"student.h"  多文件需要单文件不需要

int main()
{
	void fn(Student  &s, int ne);
	Student  s;
	char  n[10];
	int  score, newscore;
	cin >> n >> score;
	s.Set(n, score);
	s.Out();
	cin >> newscore;
	fn(s,newscore);
	s.Out();
}
void fn(Student  &s,int ne)
{
	s.Edit(ne);
}