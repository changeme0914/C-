#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Tdate
{
public:
	void in(int a, int b, int c)
	{
			day = a;
			month = b;
			year = c;
	}
	void Out()
	{
			cout << year << "/" << month << "/" << day << endl;
		
	}
private:
	int day;
	int month;
	int year;
};
int main()
{

	void fn(Tdate);//����fn����
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
