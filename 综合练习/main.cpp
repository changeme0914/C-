#include"SleeperSofa.h"
#include<iostream>
using namespace std;
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