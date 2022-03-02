#define _CRT_SECURE_NO_WARNINGS 1
//输出水仙花数
//#include <iostream>
//using namespace std;
//int main() 
//{
//
//	// write your code here......
//	int i;
//	for (i = 100; i < 1000; i++)
//	{
//		int g = i % 10;
//		int s = (i / 10) % 10;
//		int b = i / 100;
//		if ((g*g*g) + (s*s*s) + (b*b*b) == i)
//		{
//			cout << i << endl;
//		}
//	}
//	return 0;
//}
//打印乘法表
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	// write your code here......
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		int j;
//		for (j = 1; j <= i; j++)
//		{
//			cout << j << "*" << i <<"="<< i*j << "    ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
//规律数列求和
//#include <iostream>
//using namespace std;
//int main() 
//{
//	// write your code here......
//	long long sum = 0;
//	long long num = 0;
//	int i; 
//	for (i = 1; i <= 10; i++)
//	{
//		num = num * 10 + 9;
//		sum += num;
//	}
//	cout << sum << endl;
//	return 0;
//}
//计算小球走过的路程和反弹的高度
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main() {
//	// 下落的高度和落地的次数
//	double h;
//	int n;
//
//	cin >> h;
//	cin >> n;
//	// write your code here......
//	double sum = h;
//	h /= 2.0;
//	int i;
//	for (i = 1; i < n; i++)
//	{
//		sum +=h * 2.0;
//		h /= 2.0;
//	}
//	cout << fixed << setprecision(1) << sum << " " << setprecision(1) << h << endl;
//	return 0;
//}
//判断一个数是不是质数
#include <iostream>
using namespace std;
int main()
{
	// write your code here......
	int n;
	cin >> n;
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cout<<"不是质数"<<endl;
			return 0;
		}
	}
	if (n == i)
	{
		cout << "是质数"<<endl;
	}
	return 0;
}