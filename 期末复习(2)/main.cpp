/*14���ඨ�����(���ļ��ṹ)
Time Limit:?1 Sec??Memory Limit:?128 MB
Submit:?785??Solved:?324
[Submit][Status]
Description
����һ��ѧ���࣬���ݳ�Ա���������ͷ�������Ա����������ơ�?????
д������������һ��ѧ�����Ӽ��������������Ϳ��Է�����Ȼ����ʾ���ݡ�
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
	void Set(char*, int); //��������ѧ�źͷ���
	void Edit(int); //�����޸ĳɼ�������Ϊ�³ɼ�
	void Out();	 //�������ѧ�źͷ���
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
	void fn(Student &,int);//������������
	Student	 s;
	char n[10];
	int score, newscore;
	cin>>n>>score;   //��������ѧ�źͷ�����ѧ��8λ
	s.Set(n,score);		//��sѧ�źͷ�����Ϊ���������ֵ
	s.Out();//��ʾs������
	cin>>newscore;//����һ���µķ�����newscore
	fn(s,newscore);
	s.Out();//����fn��������s�ɼ��޸�Ϊnewscore��Ȼ����ʾ�޸ĺ�s������
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
	void fn(Tdate &);//����fn����
	int a,b,c;
	Tdate d;	//����һ�����ڶ���
	cin>>a>>b>>c;	
	d.Set(a,b,c);//������d���ó�c��a��b��
	fn(d);//����fn��������������a,b,c������
	d.Disp();//�����fn�޸ĺ��������
	return 0;
}
 
void fn(Tdate &t)
{
	t.Disp();
	//����ʾԭ�������ڣ���c��a��b��
	int m,d,y;
	cin>>m>>d>>y; //Ҫ���õ�������
	t.Set(m,d,y);//�ڴ���д���룬���������ж������ó�������
}
*/

/*
��1���û����Զ��ƴ�С�����û���Ҫ��������40*20*25��������? ?
��2�������������з�ƻ��?(��ÿ�����׿��Է�1000��ƻ��)��Ҳ����ȡƻ��?
��3��������ʱ��ʾ�����е�ƻ����???
��4���������ӵ�(����)ǰӦ���Զ��������ƻ������������ʾ���գ��磺Empty First
?
?��д��������
��1������һƻ�����ӡ������������û�ѡ��1---��׼�䣬2---���ơ� ���û�����1��ֱ���á�Box b�����ַ�ʽ���ɱ�׼�䣬������2����������������ӵĳ���ߣ�Ȼ���á�Box b(...,...,...)�����ַ�ʽ�������ӡ�
��2������һЩƻ������װ���£���װ������װ���٣�����ʾƻ����Ŀ
��3���ó�һЩƻ�����������е�ƻ�������㣬��ȫ���ó����ɣ�������ʾ������ƻ����
�ر�ע�⣺�������еĺ����������������Ĭ��ֵ�����򲻵÷֡�
Input
������1��2����ʾ�������͡�1�����׼�䣬2�������䡣���Ƕ��Ƶ����ӣ������������������ݣ�������ߡ�
��������������ݣ��ֱ���Ҫװ���ƻ������Ҫ�ó���ƻ������*/