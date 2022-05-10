/*14、类定义初试(单文件结构)
Time Limit:?1 Sec??Memory Limit:?128 MB
Submit:?785??Solved:?324
[Submit][Status]
Description
定义一个学生类，数据成员包含姓名和分数，成员函数自行设计。?????
写主函数，生成一个学生，从键盘输入其姓名和考试分数，然后显示数据。
Input
zhangsan? 88
Output
Name:zhangsan Score:88*/

#include<iostream>
using namespace std;
#include<cstring>
/*
class Student
{
public:
	Student(char *,int);
	void Disp();
protected:
	char name[20];
	int score;
};

Student::Student(char *n,int s)
{
	strcpy(name,n);
	score=s;
}

void Student::Disp()
{
	cout<<"Name:"<<name<<" "<<"Score:"<<score<<endl;
}

int main()
{
	char name[20];
	int score;
	cin>>name>>score;
	Student s(name,score);
	s.Disp();
	return 0;
}
*/


/*
class Student{
public:
	void Set(char*, int); //用来设置学号和分数
	void Edit(int); //用来修改成绩，参数为新成绩
	void Out();	 //用来输出学号和分数
protected:
	char num[10];
	int score;
};
void Student::Set(char *n,int s)
{
	strcpy(num,n);
	score=s;
}

void Student::Out()
{
	cout<<num<<" "<<score<<endl;
}

void Student::Edit(int ns)
{
	score=ns;
}


void fn(Student &s,int ns)
{
	s.Edit(ns);

}

int main()
{
	void fn(Student &,int);//声明被调函数
	Student	 s;
	char n[10];
	int score, newscore;
	cin>>n>>score;   //键盘输入学号和分数，学号8位
	s.Set(n,score);		//将s学号和分数设为键盘输入的值
	s.Out();//显示s的数据
	cin>>newscore;//输入一个新的分数给newscore
	fn(s,newscore);
	s.Out();//调用fn函数，将s成绩修改为newscore，然后显示修改后s的数据
	return 0;
}

  */

/*
class Tdate
{
public:
	void Set(int,int,int);
	void Disp();
protected:
	int year;
	int month;
	int day;
};
void Tdate::Set(int m,int d,int y)
{
	year=y;
	month=m;
	day=d;
}

void Tdate::Disp()
{
	cout<<year<<'/'<<month<<'/'<<day<<endl;
}

int main()
{
	void fn(Tdate &);//声明fn函数
	int a,b,c;
	Tdate d;	//生成一个日期对象
	cin>>a>>b>>c;	
	d.Set(a,b,c);//将对象d设置成c年a月b日
	fn(d);//调用fn函数，不允许拿a,b,c做参数
	d.Disp();//输出经fn修改后的新日期
	return 0;
}
 
void fn(Tdate &t)
{
	t.Disp();
	//先显示原来的日期，即c年a月b日
	int m,d,y;
	cin>>m>>d>>y; //要设置的月日年
	t.Set(m,d,y);//在此填写代码，将主函数中对象设置成新日期
}
*/

/*
（1）用户可以定制大小，若用户无要求，其规格是40*20*25立方厘米? ?
（2）可以往箱子中放苹果?(设每立方米可以放1000个苹果)，也可以取苹果?
（3）可以随时显示箱子中的苹果数???
（4）箱子在扔掉(消亡)前应能自动检查有无苹果，若有则提示倒空，如：Empty First
?
?编写主函数：
（1）生成一苹果箱子。箱子类型由用户选择，1---标准箱，2---定制。 若用户输入1，直接用“Box b”这种方式生成标准箱，若输入2，则必须再输入箱子的长宽高，然后用“Box b(...,...,...)”这种方式生成箱子。
（2）加入一些苹果（若装不下，能装多少则装多少），显示苹果数目
（3）拿出一些苹果（若箱子中的苹果数不足，则全部拿出即可），再显示箱子中苹果数
特别注意：本题所有的函数参数均不允许带默认值，否则不得分。
Input
先输入1或2，表示箱子类型。1代表标准箱，2代表定制箱。若是定制的箱子，必须再输入三个数据，代表长宽高。
最后输入两个数据，分别是要装入的苹果数和要拿出的苹果数。*/