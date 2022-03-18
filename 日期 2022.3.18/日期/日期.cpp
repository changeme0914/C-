#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include"Tdate.h"
#include<iostream>
using namespace std;
int main()
{

	void fn(Tdate & x);//声明fn函数
	int a, b, c;
	Tdate d;             //生成一个日期对象
	cin >> a >> b >> c;
	d.in(a, b, c);//将对象d设置成c年a月b日
	fn(d);//调用fn函数，不允许拿a,b,c做参数
	d.Out();//输出经fn修改后的新日期
	return 0;
}
void fn(Tdate & x)
{
	x.Out();//先显示原来的日期，即c年a月b日
	int m, d, y;
	cin >> m >> d >> y;  //要设置的月日年
	x.in(m, d, y);//在此填写代码，将主函数中对象设置成新日期      

}