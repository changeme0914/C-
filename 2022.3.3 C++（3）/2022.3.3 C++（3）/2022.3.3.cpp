#define _CRT_SECURE_NO_WARNINGS 1
//编写被调函数以实现下面的功能：对于主调函数给定的两个数据（有可能是两个整数，有可能是两个实数，还有可能是两个字符串-- - 实际是两个字符指针），如果是前两种，则计算它们的和，如果是字符串，则连接成一个串。

//说明：被调函数完成操作并输出，用下面的主函数调用。
//#include <iostream>
//#include<cstring>
//using namespace std;
//int add(const int a, const int b)
//{
//	int sum = 0;
//	sum = a + b;
//	return sum;
//}
//float add(const float x, const float y)
//{
//	float sum = 0.0;
//	sum = x + y;
//	return sum;
//}
//char * add(char *s1, const char *s2)
//{
//	char* sum = strcat(s1, s2);
//	return sum;	
//}
//int  main()
//{
//	int   a, b;
//	float  x, y;
//	char  s1[50], s2[20];
//	cin >> a >> b;
//	cin >> x >> y;
//	cin >> s1 >> s2;
//	int reti=add(a, b);
//	float retf = add(x, y);
//	char * retc = add(s1, s2);
//	cout << reti << endl;
//	cout << retf << endl;
//	cout << retc << endl;
//	return 0;
//}
//Input
//分别输入两个整数、两个实数、两个字符串
//如： 1       2
//1.1    2.2
//abc   123
//Output
//输出三次调用的结果
//3
//3.3
//abc123
//Sample Input
//1    2
//1.1  2.2
//abc  123
//Sample Output
//3
//3.3
//abc123
//某工厂生产写字台，标准写字台的台面木料尺寸规格是1.2*0.6*0.03 立方米，
//老板桌的台面木料规格是1.5*1.0*0.03立方米，
//儿童写字台的是1.0*0.6*0.03，
//还有一种特大写字台，规格：2.0*1.2*0.05。
//设某单位购买四种写字台的数量都是从键盘输入，下面的主函数用来计算制作这些台面总共需要多少立方米的木料，其中V()是一个函数，用来计算一张写字台台面的体积，请你用“带默认值参数的函数”的知识来改写程序，并给出V()函数的定义，以便使程序简单
//#include <iostream>
//using namespace std;
//double V(float  x = 0, float y = 0, float z = 0);
//double V(float x,float y,float z)
//{
//	float sum = 0;
//	sum = x * y * z;
//	return sum;
//}
//int main()
//{
//	int a, b, c, d;
//	float sum;
//	cin >> a >> b >> c >> d;
//	sum = a*(V(1.2, 0.6, 0.03)) + b*V(1.5, 1.0, 0.03) + c*V(1.0, 0.6, 0.03) + d*V(2, 1.2, 0.05);
//	cout << sum << endl;
//	return 0;
//}

//提示：主函数调用V函数时，有些参数经常是某一个确定值
//注意：本题必须用带默认值参数的函数来编程，否则不得分
//Input
//输入4个数据，分别代表4种写字台的数量
//Output
//输出制作这些写字台台面总共需要多少木料（立方米）
//Sample Input
//1 1 1 1
//Sample Output
//0.2046
//Code 1 here:
#include <iostream>
using namespace std;
inline int sum(int x, int y);
int main()
{
	int n;
	cin >> n;
	int i;
	for (i = 1; i <= n; i++)
	{
		int num = 0;
		num = sum(i, i + 1);
		cout << num << endl;
		
	}
	return 0;
}
inline  int sum(int x, int y)
{
	int num = x + y;
	return num;
}