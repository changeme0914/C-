#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;//���ļ���Ҫ���ļ�����Ҫ
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
	int l;  //��
	int h;  //��
	int w;  //��
	int apple;
	int sapple;
	int sum;
};

//#include"Box.h"
//#include<iostream>  ���ļ���Ҫ���ļ�����Ҫ
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
//void Box::input(int x, int y)  ���ļ���Ҫ���ļ�����Ҫ
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
//#include"Box.h"    ���ļ���Ҫ���ļ�����Ҫ
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
