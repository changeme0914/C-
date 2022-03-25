#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstring>
using namespace std;
class Name
{
public:
	Name(Name &s)
	{
		pname = new char[20];
		strcpy(pname, s.pname);
	}
	Name(char *Nam)
	{
		pname = new char[20];
		strcpy(pname, Nam);
	}

	void output()
	{
		cout << "Name:" << pname << endl;
	}

	~Name()
	{
		delete []pname;
	}
private:
	char *pname;

};

class Student
{
public:
	Student(int N, char *Nam) :name(Nam)
	{
		n = N;
	}
	void Disp()
	{
		cout << "Num:" << n << endl;
		name.output();

	}
	~Student()
	{
	}

private:
	int n;
	Name name;


};

void fn(Student x)
{
	x.Disp();
}


int main()
{

	int n;
	char name[10];
	cin >> n >> name;
	Student s(n, name);
	fn(s);
	return 0;
}