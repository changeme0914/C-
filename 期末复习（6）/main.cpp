#include<iostream>
using namespace std;
#include<cstring>
/*
///////////////A.h///////////////
class A{
public:
    A()
	{x=1;}
    void Disp()
	{cout<<x;}
protected:
    int x;

};
///////////////C.h///////////////
class C{
public:
    C(){z=3;}
    void Disp(){cout<<z;}
protected:
    int z;
};
////////////////B.h//////////////
class B : public A{
public:
    B();
    B(int);
    B(B&);
    ~B();
    B& operator=(B&);
    void Init(){y=0;}
    void Disp();
protected:
    C c;
    int y;
};
/////////////B.cpp///////////////
//自行添加所缺代码，并将所缺代码提交到考试系统，其他代码不需要提交！！！
B::B(int b):y(b)
{

}

/////////////////
B::B()
{}
B::~B()
{}
B::B(B &b)
{
	y=b.y;
}
B& B::operator =(B&bb)
{
	x=bb.x;
	y=bb.y;
	c=bb.c;
	return *this;
}
/////////////////////
void B::Disp()
{
    A::Disp();
    cout<<','<<y<<',';
    c.Disp();
    cout<<endl;
}
//////////////////////////////////
int main()
{
    B b1;
    b1.Init();
    b1.Disp();
    B b2(2);
    b2.Disp();
    B b3(b2);
    b3.Disp();
    b1=b3;
    b1.Disp();
    return 0;
}
*/
///////////////////////
/*
#include<iostream>
using namespace std;
#include<cstring>
class Teacher
{     
public:
	Teacher();
	Teacher(char *,int);
	Teacher & operator=(Teacher &);
	Teacher(Teacher &);
	void Disp();
	~Teacher();
      //略 
protected:     
    char *pname;  //存名字的地址     
    int age;     
};
Teacher::Teacher()
{}
Teacher::Teacher(char *t_n,int a)
{
	pname=new char[strlen(t_n)+1];
	strcpy(pname,t_n);
	age=a;
}
Teacher::Teacher(Teacher &t)
{
	pname=new char[strlen(t.pname)+1];
	strcpy(pname,t.pname);
	age=t.age;
}
void Teacher::Disp()
{
	cout<<"Teacher:"<<pname<<","<<age<<endl;
}
Teacher& Teacher::operator=(Teacher &tt)
{
	pname=new char[strlen(tt.pname)+1];
	strcpy(pname,tt.pname);
	age=tt.age;
	return *this;
}

Teacher::~Teacher()
{
	delete []pname;
}
////////////////////////////
class Student
{     
public: 
	Student();
	Student(char *,int);
	Student(Student &);
	void Disp();
   
protected:     
    char name[10];
    int score;     

}; 
Student::Student()
{}
Student::Student(char *s_n,int s)
{
	strcpy(name,s_n);
	score=s;
}
void Student::Disp()
{
	cout<<"Student:"<<name<<","<<score<<endl;
}
Student::Student(Student &s)
{
	strcpy(name,s.name);
	score=s.score;
}
//////////////////////////     
class Tutor
{     
public:
	Tutor();
	Tutor(Tutor &);
	Tutor(char *,int,char *,int);
	Tutor & operator =(Tutor &);
	void Date();
	void Disp();
protected:  
    Student s;     
    Teacher t;     
    int num;    //存储师生会面次数     
};
Tutor::Tutor():s(),t()
{
}
Tutor::Tutor(char *s_n,int s_s,char *t_n,int t_a):s(s_n,s_s),t(t_n,t_a)
{
	num=0;
}
void Tutor::Date()
{
	num++;
}  
Tutor::Tutor(Tutor &tt):s(tt.s),t(tt.t)
{
	num=tt.num;
}
void Tutor::Disp()
{
	s.Disp();
	t.Disp();
	cout<<"Number:"<<num<<endl;
}
Tutor &Tutor::operator =(Tutor &ttt)
{
	num=ttt.num;
	s=ttt.s;
	t=ttt.t;
	return *this;
}
////////////////////////////////      
int main()   
{ 
    char name1[15],name2[15];
    int score,age;
    cin>>name1>>score>>name2>>age;
    Tutor tt1(name1,score,name2,age),tt2;    
    tt1.Disp();    
    tt1.Date();    //师生碰面一次   
    tt2=tt1;         //此处调用的哪段代码？    
    tt2.Disp();   
    Tutor tt3=tt1; //此处调用的哪段代码？   
    tt3.Date();    
    tt3.Disp();  
    return 0;  
}  
*/



/*
#include<iostream>
using namespace std;
///////////////A.h///////////////
class A{
public:
    A()
	{
		x=1;
	}
    A(int xx)
	{
		x=xx;
	}
    void Disp()
	{
		cout<<x;
	}
protected:
    int x;
};
///////////////C.h///////////////
class C
{
public:
    C()
	{
		z=3;
	}
    C(int zz)
	{
		z=zz;
	}
    void Disp()
	{
		cout<<z;
	}
protected:
    int z;
};
////////////////B.h//////////////

class B : public A
{
public:
    B();
    B(int,int,int);
    B(B&);
    ~B();
    B& operator=(B&);
    void Init()
	{
		y=0;
	}
    void Disp();
protected:
    C c;
    int y;
};
/////////////B.cpp///////////////
//自行添加所缺代码，并将所缺代码提交到考试系统，其他代码不需要提交！！！
B::B()
{
}
B::B(int m,int n,int q):A(m),c(q)
{
	y=n;
}
B::B(B& s):A(s.x),c(s.c)
{
	y=s.y;
}
B &B::operator =(B &bb)
{
	c=bb.c ;
	y=bb.y;
	x=bb.x;
	return *this;
}
B::~B()
{}
///////////////////////////
void B::Disp()
{
    A::Disp();
    cout<<','<<y<<',';
    c.Disp();
    cout<<endl;
}
//////////////////////////////////
int main()
{
    B b1;
    b1.Init();
    b1.Disp();
    B b2(10,20,30);
    b2.Disp();
    B b3(b2);
    b3.Disp();
    b1=b3;
    b1.Disp();
    return 0;
}


/*
///////////////////
#include<iostream>
using namespace std;
#include<cstring>
class Student
{
public:
	Student(char *,int);
	virtual void Disp(ostream &);
protected:
	int score;
	char name[20];
};
Student::Student(char *s_n,int s_s)
{
	strcpy(name,s_n);
	score=s_s;
}
void Student::Disp(ostream & out)
{
	out<<"name:"<<name<<","<<"score:"<<score<<endl;
}
////////////////////////
class GraduateStudent:public Student
{
public:
	GraduateStudent(char *,int,char *);
	void Disp(ostream &out);
protected:
	char title[20];

};

void GraduateStudent::Disp(ostream &out)
{
	out<<"name:"<<name<<","<<"score:"<<score<<","<<"teacher:"<<title<<endl;
}

GraduateStudent::GraduateStudent(char *g_n,int g_s,char *g_t):Student(g_n,g_s)
{
	strcpy(title,g_t);
}

ostream & operator <<(ostream &out,Student & g)
{
	g.Disp(out);
	return out;
}
//////////////////////////
void fn(Student &s)
{
	cout<<s;
}
int main()   
{
	char s_name[20], t_name[20];
	int  score;
	cin>>s_name>>score;
	Student s(s_name, score);   
	cin>>s_name>>score>>t_name;
	GraduateStudent g(s_name, score , t_name);      
	cout<<s<<g;   
	fn(s);
	fn(g);
	return 0;
} 
*/
/*36、重载-、--运算符（成员函数形式）*/


class Time
{
public:
	Time(int s=0,int f=0, int m=0);
	friend Time operator-(Time &,Time &);
	friend Time &operator--(Time &);
	friend Time operator--(Time &,int);
	void disp();
protected:
	int shi;
	int fen;
	int miao;
};
Time::Time(int s,int f,int m)
{
	shi=s;
	fen=f;
	miao=m;
}
Time operator -(Time &t1,Time &t2)
{
	Time t;
	t.miao=t1.miao-t2.miao;
	if(t.miao<0)
	{
		t.miao+=60;
		t1.fen-=1;
	}
	t.fen=t1.fen-t2.fen;
	if(t.fen<0)
	{
		t.fen+=60;
		t1.shi-=1;
	}
	t.shi=t1.shi-t2.shi;
	if(t.shi<0)
	{
		t.shi+=24;
	}
	return t;
}
Time &operator--(Time &t3)
{

	t3.miao-=1;
	if(t3.miao<0)
	{
		t3.miao+=60;
		t3.fen-=1;
	}
	if(t3.fen<0)
	{
		t3.fen+=60;
		t3.shi-=1;
	}
	if(t3.shi<0)
	{
		t3.shi+=24;
	}
	return t3;
}
Time operator --(Time &t4,int)
{
	Time tt(t4);
	t4.miao-=1;
	if(t4.miao<0)
	{
		t4.miao+=60;
		t4.fen-=1;
	}
	if(t4.fen<0)
	{
		t4.fen+=60;
		t4.shi-=1;
	}
	if(t4.shi<0)
	{
		t4.shi+=24;
	}
	return tt;
}
void Time::disp()
{
	cout<<shi<<":"<<fen<<'\''<<miao<<'\"'<<endl;
}
///////////////////
int main()	
{	
	int h1,m1,s1,h2,m2,s2;
	cin>>h1>>m1>>s1>>h2>>m2>>s2;
	Time t1(h1,m1,s1), t2(h2,m2,s2), t;	
	t=t1-t2;	
	t.disp();	
	t--;	
	t.disp();	
	(--t)--;	
	t.disp();	
	(t--).disp();
	t.disp();
	return 0;	
}
