#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include"Tdate.h"
#include<iostream>
using namespace std;
int main()
{

	void fn(Tdate & x);//����fn����
	int a, b, c;
	Tdate d;             //����һ�����ڶ���
	cin >> a >> b >> c;
	d.in(a, b, c);//������d���ó�c��a��b��
	fn(d);//����fn��������������a,b,c������
	d.Out();//�����fn�޸ĺ��������
	return 0;
}
void fn(Tdate & x)
{
	x.Out();//����ʾԭ�������ڣ���c��a��b��
	int m, d, y;
	cin >> m >> d >> y;  //Ҫ���õ�������
	x.in(m, d, y);//�ڴ���д���룬���������ж������ó�������      

}