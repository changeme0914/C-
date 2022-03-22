#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class Tdate
//{
//public:
//	Tdate()
//	{
//		cout << "construct Tdate" << endl;
//	}
//	~Tdate()
//	{
//		cout << "distruct Tdate" << endl;
//	}
//	int year;
//	int month;
//	int day;
//};
//class Student
//{
//public:
//	Tdate t;
//	Student(int n, int y, int m, int d)
//	{
//		cout << "construct Student" << endl;
//		Num = n;
//		t.year = y;
//		t.month = m;
//		t.day = d;
//	}
//	void Disp()
//	{
//		cout << Num << "," << t.year << "/" << t.month << "/" << t.day << endl;
//	}
//
//	~Student()
//	{
//		cout << "distruct Student" << endl;
//	}
//	int Num;
//};
//int main()
//{
//	int  n, y, m, d;
//	cin >> n >> y >> m >> d;
//	Student  s(n, y, m, d);
//	s.Disp();
//	return 0;
//}
#include<iostream>
#include<cstring>
using namespace std;
//学生
class Student
{
public:
	Student(int n, int s) :Num(n), Su(s)
	{
		cout << "Construct a student" << endl;
	}
	void S_Output()
	{
		cout << Num << " " << Su<<endl;
	}

	~Student()
	{
		cout << "Destructing student..." << endl;
	}
private:
	int Num;
	int Su;

};
//老师
class Teacher
{
public:
	Teacher(char *name, int age) :Age(age)
	{
		strcpy(Name, name);
		cout << "Construct a teacher" << endl;
	}
	void T_Output()
	{
		cout << Name << " " << Age;
	}
	~Teacher()
	{
		cout << "Destructing teacher..." << endl;
	}
private:
	char Name[20];
	int Age;

};
//排队
class Pair
{
public:
	Pair(char * name, int age, int num, int su) :te(name, age), st(num,su)
	{
		cout << "Construct a pair" << endl;
	}
	void Disp()
	{
		te.T_Output();
		cout << " ";
		st.S_Output();
	}
	~Pair()
	{
		cout << "Destructing pair..." << endl;
	}
private:
	Teacher te; 
	Student st;
};
int main()
{
	int n, s, age;
	char name[10];
	cin >> name >> age >> n >> s;
	Pair p(name, age, n, s);
	p.Disp();   //显示派对的信息
	return 0;
}