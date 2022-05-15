#include<iostream>
using namespace std;
#include<cstring>
/*
class F
{
public:
	F(char *,int,int,int);
	virtual void Disp();
	~F();
protected:
	char *ptype;
	int length;
	int width;
	int heigth;
	

};

F::F(char *p,int l,int w,int h)
{
	ptype=new char[strlen(p)+1];
	strcpy(ptype,p);
	length=l;
	width=w;
	heigth=h;
}
void F::Disp()
{
	cout<<"type:"<<ptype<<endl;
	cout<<"length:"<<length<<endl;
	cout<<"width:"<<width<<endl;
	cout<<"high:"<<heigth<<endl;
}
F::~F()
{
	delete []ptype;
}
//////////////////////
class Bed:virtual public F
{
public:
	Bed(char *,int,int,int,char *);
	void Disp();
	void Sleep();
protected:
	char material[20];
};
Bed::Bed(char *t,int l,int w,int h,char *m):F(t,l,w,h)
{
	strcpy(material,m);
}
void Bed::Disp()
{
	F::Disp();
	cout<<"material:"<<material<<endl;
}
void Bed::Sleep()
{
	cout<<"Sleep"<<endl;
}
////////////////////////
class Sofa:virtual public F
{
public:
	Sofa(char *,int,int,int,int);
	void Disp();
	void WatchTV();
protected:
	int number;

};
Sofa::Sofa(char *t,int s_l,int s_w,int s_h,int n):F(t,s_l,s_w,s_h)
{
	number=n;	
}
void Sofa::Disp()
{
	F::Disp();
	cout<<"Num:"<<number<<endl;

}
void Sofa::WatchTV()
{
	cout<<"Watch TV"<<endl;
}
////////////////////////

class SleeperSofa:public Sofa,public Bed
{
public:
	SleeperSofa(SleeperSofa &);
	SleeperSofa(char *,int,int,int,char *,int);
	void FoldOut();
	static void GetNum();
	~SleeperSofa();
	void Disp();
protected:
	static int addnum;

};

int SleeperSofa::addnum=0;
SleeperSofa::SleeperSofa(char *ss_t,int ss_l,int ss_w,int ss_h,char *ss_m,int ss_n):F(ss_t,ss_l,ss_w,ss_h),Bed(ss_t,ss_l,ss_w,ss_h,ss_m),Sofa(ss_t,ss_l,ss_w,ss_h,ss_n)
{
	addnum++;
}

SleeperSofa::SleeperSofa(SleeperSofa &s):F(s.ptype,s.length,s.width,s.heigth),Bed(s.ptype,s.length,s.width,s.heigth,s.material),Sofa(s.ptype,s.length,s.width,s.heigth,s.number)
{
	addnum++;
}
void SleeperSofa::GetNum()
{
	cout<<addnum<<endl;
}
void SleeperSofa::FoldOut()
{
	Bed::Sleep();
	Sofa::WatchTV();
	cout<<"Fold Out"<<endl;
}
SleeperSofa::~SleeperSofa()
{
	addnum--;
}
void SleeperSofa::Disp()
{
	cout<<"type:"<<ptype<<endl;
	cout<<"length:"<<length<<endl;
	cout<<"width:"<<width<<endl;
	cout<<"high:"<<heigth<<endl;
	cout<<"material:"<<material<<endl;
	cout<<"num:"<<number<<endl;
}
////////////////////////////////////
void fn(SleeperSofa *s)
{
	s->Disp();
}
int main()
{
	char type[20]; 
	int a,b,c;
	char material[10]; 
	int num; 
	cin>>type>>a>>b>>c>>material;
	Bed bed(type,a,b,c,material); 
	bed.Disp();
	bed.Sleep();
	cin>>type>>a>>b>>c>>num;
	Sofa s(type,a,b,c,num);
	s.Disp();
	s.WatchTV();
	SleeperSofa::GetNum();
	cin>>type>>a>>b>>c>>material>>num;
	SleeperSofa ss(type,a,b,c,material,num);
	ss.Disp();
	SleeperSofa::GetNum();
	SleeperSofa sss(ss);
	sss.Disp();
	SleeperSofa::GetNum();
	SleeperSofa *ssss=new SleeperSofa(sss);
	fn(&sss);
	SleeperSofa::GetNum();
	delete ssss;
	SleeperSofa::GetNum();
	ss.FoldOut();
    return 0;
}*/
/*
1�����������ࣺBed���Sofa�࣬Ҫ����������������ͬ�ĳ�Ա����룬Ӧ������ѧ֪ʶ���Ծ���

��2����Sofa��Bed����һ���ࣺSofaBed��

��3�����������࣬����һ����ʾ�Լ��ص�Ĺ��ܣ�Sofa����ʾ���ǣ���SSSSSS����Bed����ʾ���ǣ���BBBBBB����SofaBed��ʾ���ǣ���SBSBSB��

��4���������еĳ�Ա����������Ҫ�������������ֻ����fn��������������Կ��Ǽ�һ��Getweight������������������

��5�������������������ʱ���������sample output��ʾ�Ľ����*/
//////////////////////////////////////
#include<iostream>
using namespace std;
#include<cstring>
class Fu
{
public:
	void Setweight(int);
	virtual void fun()=0;
	int Getweight();
protected:
	int weight;
};
void Fu::Setweight(int f_w)
{
	weight=f_w;
}
int Fu::Getweight()
{
	return weight;
}

///////////////////////////////
class Bed:virtual public Fu
{
public:
	void fun();
};
void Bed::fun()
{
	cout<<"BBBBBB"<<endl;
}

///////////////////////////
class Sofa:virtual public Fu
{
public:
	void fun();
};
void Sofa::fun()
{
	cout<<"SSSSSS"<<endl;
}
//////////////////////////
class SofaBed:public Bed,public Sofa
{
public:
	void fun();
};
void SofaBed::fun()
{
	cout<<"SBSBSB"<<endl;
}
//////////////////////
void fn(Fu *f)
{
	cout<<"weight:"<<f->Getweight()<<" ";
	f->fun();
}
//////////////////////
int main()
{
    int  weight1,weight2,weight3; 
    Bed   *b=new Bed;
    Sofa  *s=new  Sofa;
    SofaBed  *sb=new SofaBed;
    cin>>weight1>>weight2>>weight3;
    b->Setweight(weight1);
    s->Setweight(weight2);
    sb->Setweight(weight3);
    fn(b);
    fn(s);
    fn(sb); 
    delete b;
    delete s;
    delete sb;
    return 0;
}
