#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//void sub(int arr[10], int & max, int & min)
//{
//	max = arr[0];
//	int i;
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			int t = max;
//			max = arr[i];
//			arr[i] = t;
//		}
//	}
//	min = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (min>arr[i])
//		{
//			int tt = min;
//			min = arr[i];
//			arr[i] = tt;
//		}
//	}
//}
//int main()
//{
//	int  arr[10], i, max, min;
//	for (i = 0; i <= 9; i++)
//	{
//		cin >> arr[i];
//	}
//	sub(arr, max, min);
// 调用函数，将10个数据中的最大值和最小值分别存入max和min中，只填写一条语句 
//	cout << "Max is " << max << ",Min is " << min << endl;
//	return  0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int *p = new int[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> *(p + i);
//	}
//	//冒泡排序
//	for (i = 0; i < 9; i++)
//	{
//		int j;
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (*(p + j) < *(p + j + 1))
//			{
//				int t = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = t;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << *(p + i) << " ";
//	}
//	delete(p);
//}
//下面程序生成10个整数的数组，然后根据键盘输入的三个下标，重新对三个元素赋值并输出。
//其中用到两个函数：get()和put()，
//无论哪个函数，若执行过程中遇到下标越界，则终止程序运行。请编写这两个函数，并完善整个程序。
  //包含exit()函数
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int &put(int arr[10], int n)
//{
//	if (n>=0&&n <= 9)
//	{
//		int &r = arr[n];
//		return r;
//	}
//	else
//	{
//		cout << "out of range" << endl;
//		exit(0);
//	}	
//}
//int &get(int arr[10], int n)
//{
//	if (n >= 0 && n <= 9)
//	{
//		int &rr = arr[n];
//		return rr;
//	}
//	else
//	{
//		exit(0);
//	}
//}
//int main()
//{
//	int vals[10], a, b, c, i;
//	for (i = 0; i <= 9; i++)
//	{
//		vals[i] = i*i;   //给元素赋值
//	}
//	cin >> a >> b >> c;
//	put(vals, a) = a*a + 1;       //让数组val[a]的值变为a*a+1
//	put(vals, b) = b*b + 1;
//	put(vals, c) = c*c + 1;
//	cout << get(vals, a) << endl;  //输出数组val[a]的值
//	cout << get(vals, b) << endl;
//	cout << get(vals, c) << endl;
//	return 0;
//}
//编写函数实现两数交换（引用方式）
//#include <iostream>
//using namespace std;
//// write your code here......
//void exchange(int &a, int &b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//int main() 
//{
//int m, n;
//	cin >> m;
//	cin >> n;
//	exchange(m, n);
//	// write your code here......
//	cout << m << " " << n << endl;
//	return 0;
//}
//使用字符函数统计字符串中各类型字符的个数
#include <iostream>
#include <string>
using namespace std;
int main() 
{
	string str;
	getline(cin, str);

	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int others = 0;

	// write your code here......
	for (int i = 0; i < str.length(); i++)
	{ //遍历字符串
		if (isalpha(str[i])) //判断是否是字母
			chars++;
		else if (isdigit(str[i])) //判断是否是数字
			digits++;
		else if (isspace(str[i])) //判断是否是空格
			whitespace++;
		else
			others++;
	}

	cout << "chars : " << chars
		<< " whitespace : " << whitespace
		<< " digits : " << digits
		<< " others : " << others << endl;

	return 0;
}