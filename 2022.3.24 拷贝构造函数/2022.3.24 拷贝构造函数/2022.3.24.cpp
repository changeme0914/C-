#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
public:
	Student()
	{
		cout << "construct None" << endl;
		pname = new char[20];
		strcpy(pname, "None");
		score = 0;	
	}
	Student(char *Name, int Score)  //有参数
	{
		pname = new char[20];
		cout << "construct lisi" << endl;
		strcpy(pname, Name);
		score = Score;
		
	}
	Student(Student & s2)
	{
		pname = new char[20];
		cout << "copy lisi"<<endl;
		
		pname = s2.pname;
		score = s2.score;
	}
	//Student(Student s3)
	//{

	//}
	void Disp()
	{
		cout << pname << " " << score << endl;
	}

	~Student()
	{
		cout << "destruct "<< pname << endl;
		delete []pname;
	}
private:
	char *pname;  //名字在堆中找空间存放，pname存储其起始位置
	int  score;
};
int  main()
{
	char   name[20];
	int  score;
	cin >> name >> score;
	Student s1, s2(name, score), s3(s2);
	s1.Disp();
	s2.Disp();
	s3.Disp();
	Student  s4 = s3;
	s4.Disp();
	return 0;
}