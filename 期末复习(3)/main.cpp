/*
��дһ����Box�����ӵĳߴ��ǹ̶��ģ�50*30*40��������������װƻ����Ҳ���Դ�����������ȡƻ����������һ�����������ӣ��Ž�����ƻ������ȡ������ƻ�����Ž���ȡ����ƻ����Ŀ���Ӽ������룬��Ž�ȥ��ƻ������ʢ�£�Ҫȡ����ƻ�����������������ƻ���������������ӵ�֮ǰ���������ﻹ��ƻ����Ӧ�ø���������Ϣ�����Empty����
Input
���������������ֱ����װ����ȡ����ƻ����
Output
�������Ӻ�������ʾ���ӵĲ���������ߣ��������ƻ����
�Ž�һЩƻ������ʾ�����е�ƻ����
ȡ������ƻ��������ʾһ�������ƻ����
�ӵ�����ʱ����Ҫ����������Ϣ������ƻ������Ҫ��*/
#include<iostream>
using namespace std;
#include<cstring>
/*
class Box
{
public:
	Box(int,int);
	~Box();
	void Disp();

protected:
	int num;
	int number;
	int put_number;
	int length;
	int width;
	int higth;
};
Box::Box(int sn,int pn)
{
	num=0;
	number=sn;
	put_number=pn;
	length=50;
	width=30;
	higth=40;
}
void Box::Disp()
{
	cout<<length<<" "<<width<<" "<<higth<<endl;
	cout<<num<<endl;
	cout<<number<<endl;
	if(number-put_number==0)
	{
		cout<<num<<endl;
	}
	else
	{
		cout<<number-put_number<<endl;
	}
}
Box::~Box()
{
	cout<<"Empty"<<endl;

}
int main()
{
	int get,put;
	cin>>get>>put;
	Box b(get,put);
	b.Disp();

}
*/


/*
Description
��1����дһ��ѧ���࣬��ѧ�ţ�������������������Ա�����ɶ���ʱ����ָ�����������Ե�ֵ�����ɶ���󣬿�����ʱ�����Щ��Ϣ��
��2����дһ����ʦ�࣬��Ա�������������䡣���ɶ���ʱҲ����ָ����Щ���ԡ����⣬Ҳ������ʱ�����Щ����
��3����дһ��Pair�࣬���Ա����������ʦ��ѧ��
Ҫ��
A��ÿ���ɶ������ɵ�ʱ�򣬿���ָ����ʦ��ѧ��������
B��������ʱ����κ�һ���ɶԵ����ԣ�������ʦ����Ϣ��ѧ������Ϣ
��4��ÿ�����󣨰���ѧ������ʦ�����������ʱ����Ҫ����Ӧ������������Ա���֤�����ִ��˳��

ע�⣺ϵͳ�ڲ��Ѿ�д���������������£����ύ����Edit������ʱ����Ҫ��д��д�˾������������ˣ���ϵͳ���Զ������ύ�Ĵ�����棬�����������������
int main()
{
int n, s, age;
char name[10];
cin>>name>>age>>n>>s;
Pair p(name, age, n ,s);
p.Disp(); //��ʾ�ɶԵ���Ϣ
return 0;
}
Input
�����ʦ��ѧ������Ϣ*/


////////////////////////////////

/*
class Student
{
public:
	Student(int,int);
	~Student();
	void Disp();
protected:
	int number;
	int score;
};

Student::Student(int n,int s)
{
	cout<<"Construct a student"<<endl;
	number=n;
	score=s;
}

Student::~Student()
{
	cout<<"Destructing Student..."<<endl;
}

void Student::Disp()
{
	cout<<number<<" "<<score<<endl;
}
//////////////////////////////////////
class Teacher
{
public:
	Teacher(char *,int);
	~Teacher();
	void Disp();
protected:
	char tname[20];
	int age;
};


Teacher::Teacher(char *n,int a)
{
	cout<<"Construct a teacher"<<endl;
	strcpy(tname,n);
	age=a;	
}

Teacher::~Teacher()
{
	cout<<"Destructing teacher..."<<endl;
}
void Teacher::Disp()
{
	cout<<tname<<" "<<age<<" ";
}
////////////////////////////////////
class Pair
{
public:
	Pair(char *,int,int,int);
	~Pair();
	void Disp();
protected:
	Teacher t;
	Student s;
};

Pair::Pair(char *tn,int a,int sn,int s):t(tn,a),s(sn,s)
{
	cout<<"Construct a pair"<<endl;
}
void Pair::Disp()
{
	t.Disp();
	s.Disp();

}
Pair::~Pair()
{
	cout<<"Destructing pair..."<<endl;
}
///////////////////////////
int main()
{
	int n, s, age;
	char name[10];
	cin>>name>>age>>n>>s;
	Pair p(name, age, n ,s);
	p.Disp(); //��ʾ�ɶԵ���Ϣ
	return 0;
}
*/
/*
Description
��1����дһ��������Tdate�����ꡢ�¡���������Ա�����ɶ���ʱ����ָ���ꡢ�¡��������������������������ڡ�????
��2����дһ��Student�࣬��Ա����ѧ�ţ���������ѧ�������գ�Tdate��һ������????
	Ҫ��	
	A��ÿ��ѧ�������ɵ�ʱ�򣬿���ָ��ѧ�ź�����
	B���������ѧ����ѧ�ż����գ���������������????
��3��ÿ�������������ʱ����Ҫ����Ӧ������������Ա���֤�����ִ��˳��

�����������������
int main()
{
	int? n,? y,? m,? d;
	cin>>n>>y>>m>>d;
	Student s(n, y,m ,d);
	s.Disp();
	return 0;
}*/

////////////////////////////
/*
class Tdate
{
public:
	Tdate(int,int,int);
	~Tdate();
	void Disp();
protected:
	int year;
	int month;
	int day;
};
Tdate::Tdate(int y,int m,int d)
{
	cout<<"construct Tdate"<<endl;
	year=y;
	month=m;
	day=d;
}

Tdate::~Tdate()
{
	cout<<"distruct Tdate"<<endl;
}
void Tdate::Disp()
{
	cout<<year<<'/'<<month<<'/'<<day<<endl;
}
//////////////////////////
class Student
{
public:
	Student(int,int,int,int);
	~Student();
	void Disp();

protected:
	Tdate t;
	int number;
};
Student::Student(int n,int y,int m,int d):t(y,m,d)
{
	cout<<"construct Student"<<endl;
	number=n;
}
Student::~Student()
{
	cout<<"distruct Student"<<endl;
}
void Student::Disp()
{
	cout<<number<<" ";
	t.Disp();
}
////////////////////////////
int main()
{
	int n, y, m, d;
	cin>>n>>y>>m>>d;
	Student s(n, y,m ,d);
	s.Disp();
	return 0;
}*/



/*����һ��ѧ����Student���������³�Ա��
?? char *pnum;?????? ? //������¼ѧ�ŵĴ洢��ַ
?? char? *pname;????? //������¼�����Ĵ洢��ַ
?? int?? score;??????????? ?//�洢����
????
��ĿҪ��????
1������ָ���ɼ���Ϊ0????
2������ָ��ѧ�š���������Ϊ"None"????
3��ѧ�š������Լ��ҿռ�洢
4�����������Ŀհ״������Ϻ��ʵ���䣬�������д����ύ���С�????
*/

class Student
{
public:
	//Student();
	//Student(char *,char *);
	Student(char *pnu="None",char *pna="None",int s=0);
	Student(Student &);
	~Student();
	void Disp();
protected:
	char *pnum;
	char *pname;
	int score;
};
/*
Student::Student()
{
	cout<<"construct:"<<"None"<<endl;
	pname=new char[20];
	pnum=new char[20];
	strcpy(pname,"None");
	strcpy(pnum,"None");
	score=0;

}
Student::Student(char *nu,char *na)
{
	cout<<"construct:"<<na<<endl;
	pname=new char[strlen(na)+1];
	pnum=new char[strlen(nu)+1];
	strcpy(pnum,nu);
	strcpy(pname,na);
	score=0;

}*/
Student::Student(char *pnu,char *pna,int s)
{
	cout<<"construct:"<<pna<<endl;
	pname=new char[strlen(pna)+1];
	pnum=new char[strlen(pnu)+1];
	strcpy(pnum,pnu);
	strcpy(pname,pna);
	score=s;
	
}
Student::Student(Student &s)
{
	cout<<"Copy:"<<s.pname<<endl;
	pname=new char[strlen(s.pname)+1];
	pnum=new char[strlen(s.pnum)+1];
	strcpy(pname,s.pname);
	strcpy(pnum,s.pnum);
	score=s.score;

}
///ѧ��:None����:None����:0
void Student::Disp()
{
	cout<<"ѧ��:"<<pnum<<" "<<"����:"<<pname<<" "<<"����:"<<score<<endl;
}

Student::~Student()
{
	cout<<"distruct:"<<pname<<endl;
	delete []pnum;
	delete []pname;
}
int main()	
{
	int score;
	char num1[10],num2[10],name1[10],name2[10];
	cin>>num1>>name1>>score;
	cin>>num2>>name2;
	Student s1,s2(num1,name1,score),s3(num2,name2);	
	s1.Disp();
	s2.Disp();
	s3.Disp();
	Student s4=s2;	
	Student s5(s3);	
	s4.Disp();
	s5.Disp();
	return 0;
}