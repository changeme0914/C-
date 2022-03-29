//Student.h 
class Student  
{
public:
	//
	Student();
	Student(char *);
	Student(char *p,int s);
	Student(Student &);
	static int func();
	void output();
	//
	virtual ~Student();
protected: 
	char *pname;
	int score;
	static int num;

};

//Student.cpp
//#include "Student.h"
#include<cstring>
#include<iostream>
using namespace std;

int Student::num=0;

Student::Student()
{
	pname=new char[10];
	strcpy(pname,"");
	score=0;
	num++;
}

Student::Student(char *Nam,int s)
{
	pname=new char[strlen(Nam)+1];
	strcpy(pname,Nam);
	score=s;
	num++;
}

Student::Student(char *Nam)
{
	pname=new char[10];
	strcpy(pname,Nam);
	score=0;
	num++;
}

Student::Student(Student &s2)
{
	pname=new char[strlen(s2.pname)+1];
	strcpy(pname,s2.pname);
	score=s2.score;
	num++;
}

void Student::output()
{
	cout<<"name:"<<pname<<","<<"score:"<<score<<endl;
}

int Student::func()
{
	return num;
}

Student::~Student()
{
	delete []pname;
	num--;
}

//主函数文件 0359mian.cpp
//#include"Student.h"			多文件需要单文件不需要
//#include<iostream>
//using namespace std;
void f()    
{
    Student s1,s2;    
				//填写代码显示人数
	cout<<Student::func()<<endl;
}   

int main()      
{
	cout<<Student::func()<<endl;			 //填写代码显示此时学生的人数    
	
    Student s1;
    char name[10];
    int s;
    cin>>name>>s;  //输入s2的姓名和分数
    Student s2(name,s);
    cin>>name;     //输入s3的姓名
    Student s3(name);   
	cout<<s3.func()<<endl;
	
	s1.output();
	s2.output();	
	s3.output();

    Student s4=s2;    
	cout<<s4.func()<<endl;		//填写代码显示此时学生的人数 （用另一种方法）
	
    f();    

	cout<<Student::func()<<endl;			//填写代码显示此时学生的人数      
    return 0;
}     