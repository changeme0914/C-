
///////////////////////
//Student.h
/*
#include<iostream>
using namespace std;
#include<cstring>
class Student
{
public:
	Student(char *pn="None",int s=0);
	Student(Student &);
	~Student();
	void Disp();
private:
	char *pname;
	int score;
};
///////////////////
//Student.cpp
Student::Student(char *pn,int s)
{
	cout<<"construct "<<pn<<endl;
	pname=new char[strlen(pn)+1];
	strcpy(pname,pn);
	score=s;

}
Student::Student(Student &s)
{
	cout<<"copy "<<s.pname<<endl;
	pname=new char[strlen(s.pname)+1];
	strcpy(pname,s.pname);
	score=s.score;
}

Student::~Student()
{
	
	cout<<"destruct "<<pname<<endl;
	delete []pname;
}
void Student::Disp()
{
	cout<<pname<<" "<<score<<endl;
}
///////////////////////////////
///main.h
int  main()
{   
	char   name[20];
     int  score;
    cin>>name>>score;
     Student  s1,  s2(name, score),  s3(s2);
     s1.Disp();
     s2.Disp();
     s3.Disp();
     Student  s4=s3;
     s4.Disp();
     return 0;
}*/

#include<iostream>
using namespace std;
#include<cstring>

/*
///////////////////////////////
class Name
{
public:
	Name(char *);
	Name(Name &);
	~Name();
	void Disp();
protected:
	char *pname;
};
Name::Name(char *pna)
{
	pname=new char[strlen(pna)+1];
	strcpy(pname,pna);
}
Name::Name(Name &n)
{
	pname=new char[strlen(n.pname)+1];
	strcpy(pname,n.pname);
}
void Name::Disp()
{
	cout<<"Name:"<<pname<<endl;
}
Name::~Name()
{
	delete []pname;
}

////////////////////////////////
class Student
{
public:
	Student(int ,char *);
	Student(Student &);
	void Disp();
protected:
	int n;
	Name name;
};

Student::Student(int s,char *pn):name(pn)
{
	n=s;
}
Student::Student(Student &s):name(s.name)
{
	n=s.n;
}
void Student::Disp()
{
	cout<<"Num:"<<n<<endl;
	name.Disp();
}

void fn(Student x)
{
     x.Disp();
}

int main()
{ 
     int n;
     char name[10];
     cin>>n>>name; 
     Student s(n,name); 
     fn(s);
     return 0;
}
*/
/*
1、定义下面的类：（根据主函数要求，需要什么成员函数，自己分析设定）      

（1）写一个Person类，数据成员包括姓名、年龄。      

（2）写一个Date类，成员为年、月、日。      

（3）写一个Student类，除了姓名和年龄，还包括生日（Date的对象）和成绩，该类由Person派生而来 。    

（4）再写一个Teacher类，除了姓名和年龄，还有职称。并且，教师可以指定学生的成绩。该类也由Person派生而来。      


*/
////////////////////////
/*
#include<iostream>
using namespace std;
#include<cstring>
class Date
{
public:
	Date(int,int,int);
	void Disp();
protected:
	int year;
	int month;
	int day;
};
Date::Date(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
}

void Date::Disp()
{
	cout<<"birthday:"<<year<<'/'<<month<<'/'<<day<<endl;
}


/////////////////////////
class Person
{
public:
	Person(char *,int);
	virtual void Disp();
protected:
	char name[20];
	int age;
};
Person::Person(char *n,int a)
{
	strcpy(name,n);
	age=a;
}
void Person::Disp()
{
	cout<<"name:"<<name<<" age:"<<age<<endl;
}
//////////////////////////////////////////////////
class Student:virtual public Person
{
public:
	Student(char *,int,int,int,int,int);
	void Disp();
protected:
	Date date;
	int score;

};

Student::Student(char *n,int a,int y,int m,int d,int s):Person(n,a),date(y,m,d)
{
	score=s;
}
void Student::Disp()
{
	Person::Disp();
	date.Disp();
	cout<<"score:"<<score<<endl;
}

//////////////////////////////////////////
class Teacher:virtual public Person
{
public:
	Teacher(char *,int,char *);
	void Disp();
protected:
	char title[20];
};
Teacher::Teacher(char *n,int a,char *t):Person(n,a)
{
	strcpy(title,t);

}
void Teacher::Disp()
{
	Person::Disp();
	cout<<"title:"<<title<<endl;
}
///////////////////////
class Stu_teacher:public Teacher,public Student
{
public:
	Stu_teacher(char*,int,int,int,int,int,char *);
	void Disp();
protected:


};
Stu_teacher::Stu_teacher(char *na,int a,int y,int m,int d,int s,char *t):Person(na,a),Teacher(na,a,t),Student(na,a,y,m,d,s)
{
}
void Stu_teacher::Disp()
{
	Student::Disp();
	cout<<"title:"<<title<<endl;
}
//////////////////////////////
void fn(Person &p)
{
	p.Disp();	
}
int main()
{
    char name[20],title[20];
    int age,month,day,year,score;
    cin>>name>>age>>year>>month>>day>>score;
    Student s(name,age,year,month,day,score);
    cin>>name>>age>>title;
    Teacher t(name,age,title);
    cin>>name>>age>>year>>month>>day>>score>>title;
    Stu_teacher st(name,age,year,month,day,score,title);
    s.Disp();  //显示学生的信息
    t.Disp();  //显示教师的信息
    st.Disp(); //显示实习老师的信息
    //t.Assign(s,90);
    //s.Disp();   
    fn(s);  //调用函数fn，显示参数s的有关信息
    fn(t);  //调用函数fn，显示参数t的有关信息
    fn(st); //调用函数fn，显示参数st的有关信息
    return 0;
}

  */