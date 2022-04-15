#include"SleeperSofa.h"
#include<iostream>
using namespace std;
void fn(SleeperSofa *s)
{
	s->Disp();
}
int main()
{

	char type[20]; //存储床、沙发等家具的型号
	int a,b,c; //存储长宽高
	char material[10]; //床的材质
	int num; //沙发可坐人数量
	cin>>type>>a>>b>>c>>material;//输入床的数据 
	Bed bed(type,a,b,c,material); //生成一个床
	bed.Disp();
	bed.sleep();

	cin>>type>>a>>b>>c>>num;
	Sofa s(type,a,b,c,num);//生成一个沙发
	s.Disp();
	s.WatchTV();
	SleeperSofa::Getnum();
	cin>>type>>a>>b>>c>>material>>num;

	SleeperSofa ss(type,a,b,c,material,num);//生成一个两用沙发
	ss.Disp();
	SleeperSofa::Getnum();

	SleeperSofa sss(ss); //再生成一个
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