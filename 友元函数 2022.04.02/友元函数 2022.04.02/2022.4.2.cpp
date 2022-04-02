#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstring>
using namespace std;

class Student;

class Teacher
{
	
public:
	void AssignScore(Student &, int);
	Teacher(char *t_name)
	{
		strcpy(name, t_name);
	}


protected:
	char name[10];
};



class Student
{
	
public:
	friend class Teacher;
	friend void Teacher::AssignScore(Student &, int);
	Student(char *m_name, int m_score)
	{
		strcpy(name, m_name);
		score = m_score;
	}
	void Disp()
	{
		cout << name << "," << score << endl;

	}
protected:
	char name[10];
	int score;

};
void Teacher::AssignScore(Student &s, int n)
{
	s.score = n;
}
//�����޸�ĳѧ���ɼ�

int main()
{
	int n;
	Teacher t("Wang");
	Student s("Li", 59);
	s.Disp();
	cin >> n;
	t.AssignScore(s,n);		//��Ӵ��룬�޸�ѧ���ɼ�Ϊn
	s.Disp();
	return 0;

}