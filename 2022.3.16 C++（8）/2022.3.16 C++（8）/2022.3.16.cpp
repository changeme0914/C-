#define _CRT_SECURE_NO_WARNINGS 1
//student.h �ļ�
#include<iostream>//���ļ���Ҫ���ļ�����Ҫ
#include<cstring>
using namespace std;
class Student
{
public:
	//void Set(char*, int);
	//void  Edit(int);    
	//void Out();      ���ļ���Ҫ���ļ�����Ҫ
	void Set(char *x, int y)  //���ļ���Ҫ ���ļ�����Ҫ
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
	}                        //���ļ���Ҫ���ļ�����Ҫ
    
protected:
	char  num[10];
	int  score;
};

//student.cpp �ļ�      ���ļ���Ҫ���ļ�����Ҫ

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

//������ �ļ�

//#include<iostream>
//using namespace std;
//#include"student.h"  ���ļ���Ҫ���ļ�����Ҫ

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