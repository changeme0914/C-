#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;//单文件需要多文件不需要
class Box
{
public:
	Box();
	~Box();
	void input(int x, int y)
	{
		apple = x;
		sapple = y;
		sum = x - y;
	}
	void output()
	{
		cout << apple << endl;
		cout << sum << endl;
		if (sum != 0)
		{
			cout << "Empty" << endl;
		}
	}
private:
	int l;  //长
	int h;  //高
	int w;  //宽
	int apple;
	int sapple;
	int sum;
};

//#include"Box.h"
//#include<iostream>  多文件需要单文件不需要
//using namespace std;
Box::Box()
{
	l = 50;
	w = 30;
	h = 40;
	sum = 0;
	cout << l << "," << w << "," << h << endl;
	cout << sum << endl;
}
//void Box::input(int x, int y)  多文件需要单文件不需要
//{
//	apple = x;
//	sapple = y;
//	sum = x - y;
//}
//void Box::output()
//{
//	cout << apple << endl;
//	cout << sum << endl;
//	if (sum != 0)
//	{
//		cout << "Empty" << endl;
//	}
//}
Box::~Box()
{
}
#define _CRT_SECURE_NO_WARNINGS 1
//#include"Box.h"    多文件需要单文件不需要
#include<iostream>
using namespace std;
int main()
{
	Box b;
	int m, n;
	cin >> m >> n;
	b.input(m, n);
	b.output();
	return 0;
}
