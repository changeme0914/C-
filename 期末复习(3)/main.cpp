/*
编写一个类Box，箱子的尺寸是固定的：50*30*40，可以向箱子中装苹果，也可以从箱子里向外取苹果。请生成一个这样的箱子，放进若干苹果，再取出若干苹果。放进和取出的苹果数目均从键盘输入，设放进去的苹果都能盛下，要取出的苹果数量不多于里面的苹果数。另：箱子在扔掉之前，若箱子里还有苹果，应该给出倒空信息（输出Empty）。
Input
输入两个整数，分别代表装进和取出的苹果数
Output
生成箱子后，马上显示箱子的参数（长宽高）及里面的苹果数
放进一些苹果后，显示箱子中的苹果数
取出若干苹果后，再显示一次里面的苹果数
扔掉箱子时，需要给出倒空信息（若无苹果则不需要）*/
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
（1）编写一个学生类，有学号（整数）、分数两个成员，生成对象时可以指定这两个属性的值。生成对象后，可以随时输出这些信息。
（2）编写一个教师类，成员包括姓名和年龄。生成对象时也可以指定这些属性。另外，也可以随时输出这些属性
（3）编写一个Pair类，其成员有两个：教师和学生
要求：
A）每个派对在生成的时候，可以指定老师和学生的属性
B）可以随时输出任何一个派对的属性，包括老师的信息和学生的信息
（4）每个对象（包括学生和老师）构造或析构时，都要有相应的文字输出，以便验证程序的执行顺序。

注意：系统内部已经写好了主函数（如下），提交（或Edit）代码时不需要再写（写了就两个主函数了），系统会自动在您提交的代码后面，加上下面的主函数。
int main()
{
int n, s, age;
char name[10];
cin>>name>>age>>n>>s;
Pair p(name, age, n ,s);
p.Disp(); //显示派对的信息
return 0;
}
Input
输入教师和学生的信息*/


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
	p.Disp(); //显示派对的信息
	return 0;
}
*/
/*
Description
（1）编写一个日期类Tdate，有年、月、日三个成员，生成对象时可以指定年、月、日三个参数，可以输出这个日期。????
（2）编写一个Student类，成员包括学号（整数）、学生的生日（Tdate的一个对象）????
	要求：	
	A）每个学生在生成的时候，可以指定学号和生日
	B）可以输出学生的学号及生日（生日如何输出？）????
（3）每个对象构造或析构时，都要有相应的文字输出，以便验证程序的执行顺序。

运行下面的主函数：
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



/*定义一个学生类Student，含有以下成员：
?? char *pnum;?????? ? //用来记录学号的存储地址
?? char? *pname;????? //用来记录姓名的存储地址
?? int?? score;??????????? ?//存储分数
????
题目要求：????
1、若不指定成绩，为0????
2、若不指定学号、姓名，均为"None"????
3、学号、姓名自己找空间存储
4、在下面代码的空白处，填上合适的语句，并将所有代码提交运行。????
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
///学号:None姓名:None分数:0
void Student::Disp()
{
	cout<<"学号:"<<pnum<<" "<<"姓名:"<<pname<<" "<<"分数:"<<score<<endl;
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