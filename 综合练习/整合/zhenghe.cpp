//////////////////////////
//Fur.h

class Fur  
{
public:
	Fur(char *,int,int,int);
	void Disp();
	virtual ~Fur();
protected:
	char * ptype;///
	int length;
	int width;
	int high;


};
///////////////////
//Fur.cpp
#include<cstring>
#include<iostream>
using namespace std;
Fur::Fur(char *type,int L,int W,int H)
{
	ptype=new char[strlen(type)+1];
	length=L;
	width=W;
	high=H;
	strcpy(ptype,type);


}
void Fur::Disp()
{
	cout<<"type:"<<ptype<<endl;
	cout<<"length:"<<length<<endl;
	cout<<"width:"<<width<<endl;
	cout<<"high:"<<high<<endl;

}

Fur::~Fur()
{
	delete []ptype;
}
///////////////
//Bed.h

//#include "Fur.h"   ���ļ���Ҫ���ļ�����Ҫ

class Bed:virtual public Fur
{
public:
	Bed(char *,int,int,int,char *);
	void sleep();
	
	void Disp();
protected:
	char material[20];

};
///////////////////
//Bed.cpp


//#include "Bed.h"
//#include<cstring>
//#include<iostream>           ���ļ���Ҫ���ļ�����Ҫ
//using namespace std;
//////////////////////////////////////////////////////////////////////


Bed::Bed(char *b_type,int b_l,int b_w,int b_h,char *b_ma):Fur(b_type,b_l,b_w,b_h)
{
	strcpy(material,b_ma);
}
void Bed::Disp()
{
	Fur::Disp();
	cout<<"material:"<<material<<endl;
}
void Bed::sleep()

{
	cout<<"Sleep"<<endl;
}


///////////////////
//Sofa.h

//#include "Fur.h"
class Sofa:virtual public Fur 
{
public:
	Sofa(char *,int,int,int,int);
	void WatchTV();
	void Disp();
protected:
	int num;

};

////////////////////////
//Sofa.cpp

//#include "Sofa.h"
//#include<iostream>          ���ļ���Ҫ���ļ�����Ҫ
//using namespace std;

Sofa::Sofa(char *s_type,int s_l,int s_w,int s_h,int s_n):Fur(s_type,s_l,s_w,s_h)
{
	num=s_n;
}

void Sofa::Disp()
{
	Fur::Disp();
	cout<<"Num:"<<num<<endl;
}

void Sofa::WatchTV()
{
	cout<<"Watch TV"<<endl;
}
////////////////////////
//SleeperSofa.h

//#include"Bed.h"
//#include"Sofa.h"                 ���ļ���Ҫ���ļ�����Ҫ
class SleeperSofa:public Sofa,public Bed
{
public:
	SleeperSofa(char *,int,int,int,char *,int);
	SleeperSofa(SleeperSofa &);
	static void Getnum();
	void FoldOut();
	void Disp();
	~SleeperSofa();
protected:
	static int number;

};

/////////////////////////
////SleeperSofa.cpp

//#include "SleeperSofa.h"         ���ļ���Ҫ���ļ�����Ҫ
//#include<iostream>
//using namespace std;

int SleeperSofa::number=0;
SleeperSofa::SleeperSofa(char *ss_type,int ss_l,int ss_w,int ss_h,char *ss_ma,int ss_n):Fur(ss_type,ss_l,ss_w,ss_h),Bed(ss_type,ss_l,ss_w,ss_h,ss_ma),Sofa(ss_type,ss_l,ss_w,ss_h,ss_n)
{
	number++;
}

SleeperSofa::SleeperSofa(SleeperSofa &s):Fur(s.ptype,s.length,s.width,s.high),Bed(s.ptype,s.length,s.width,s.high,s.material),Sofa(s.ptype,s.length,s.width,s.high,s.num)
{
	number++;
}

void SleeperSofa::Disp()
{
	cout<<"type:"<<ptype<<endl;
	cout<<"length:"<<length<<endl;
	cout<<"width:"<<width<<endl;
	cout<<"high:"<<high<<endl;
	cout<<"material:"<<material<<endl;
	cout<<"num:"<<num<<endl;
}

void SleeperSofa::Getnum()
{
	cout<<number<<endl;
}

void SleeperSofa::FoldOut()
{
	Bed::sleep();
	Sofa::WatchTV();
	cout<<"Fold Out"<<endl;
}
SleeperSofa::~SleeperSofa()
{
	number--;
}

/////////////////////////
//main.cpp
//#include"SleeperSofa.h"
//#include<iostream>                ���ļ���Ҫ���ļ�����Ҫ
//using namespace std;

void fn(SleeperSofa *s)
{
	s->Disp();
}

int main()
{

	char type[20]; //�洢����ɳ���ȼҾߵ��ͺ�
	int a,b,c; //�洢�����
	char material[10]; //���Ĳ���
	int num; //ɳ������������
	cin>>type>>a>>b>>c>>material;//���봲������ 
	Bed bed(type,a,b,c,material); //����һ����
	bed.Disp();
	bed.sleep();

	cin>>type>>a>>b>>c>>num;
	Sofa s(type,a,b,c,num);//����һ��ɳ��
	s.Disp();
	s.WatchTV();
	SleeperSofa::Getnum();
	cin>>type>>a>>b>>c>>material>>num;

	SleeperSofa ss(type,a,b,c,material,num);//����һ������ɳ��
	ss.Disp();
	SleeperSofa::Getnum();

	SleeperSofa sss(ss); //������һ��
	ss.Disp();
	SleeperSofa::Getnum();

	SleeperSofa *ssss=new SleeperSofa(sss);

	
	fn(&sss);
	SleeperSofa::Getnum();

	delete ssss;
	SleeperSofa::Getnum();

	ss.FoldOut();
    return 0;

}
