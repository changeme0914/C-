//#define _CRT_SECURE_NO_WARNINGS 1
////数组元素处理
//#include <iostream>
//using namespace std;
//void func(int* p, int n);
//int main()
//{
//	int arr[6] = { 0 };
//	for (int i = 0; i < 6; i++) 
//	{
//		cin >> arr[i];
//	}
//	func(arr, 6);
//	for (int i = 0; i < 6; i++) 
//	{
//		if (i == 5) 
//		{
//			cout << arr[i] << endl;
//		}
//		else 
//		{
//			cout << arr[i] << " ";
//		}
//	}
//	return 0;
//}
//void func(int* p, int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		if (*(p+i) == 0)
//		{
//			int j;
//			for (j = i; j < n; j++)
//			{
//				*(p + j) = *(p + j + 1);
//			}
//			*(p+n-1) = 0;
//			 n--;
//		}
//	}
//	// write your code here......
//}
//比较字符串大小
//#include <iostream>
//using namespace std;
//int mystrcmp(const char* src, const char* dst);
//int main() 
//{
//	char s1[100] = { 0 };
//	char s2[100] = { 0 };
//	cin.getline(s1, sizeof(s1));
//	cin.getline(s2, sizeof(s2));
//	int ret = mystrcmp(s1, s2);
//	cout << ret << endl;
//	return 0;
//}
//int mystrcmp(const char* src, const char* dst)
//{
//	while (*src != '\0'&&*dst != '\0')
//	{
//		if (*src > *dst)
//		{
//			return 1;
//		}
//		else if (*src<*dst)
//		{
//			return - 1;
//		}
//		src++;
//		dst++;
//	}
//	if (*src == '\0'&&*dst != '\0')
//	{
//		return -1;
//	}
//	else if (*src != '\0'&&*dst=='\0')
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	// write your code here......
//}
////编写函数实现两数交换（指针方式）
//#include <iostream>
//using namespace std;
//void change(int *m, int *n)
//{
//	int t;
//	t = *m;
//	*m = *n;
//	*n = t;
//}
//// write your code here......
//int main() 
//{
//	int m, n;
//	cin >> m;
//	cin >> n;
//	// write your code here......
//	change(&m, &n);
//	cout << m << " " << n << endl;
//	return 0;
//}
// 统计字符串中子串出现的次数
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[100] = { 0 };
	char substr[100] = { 0 };
	cin.getline(str, sizeof(str));
	cin.getline(substr, sizeof(substr));
	int count = 0; int n=0;
	// write your code here......
	char *p1 = str;
	char *p2 = substr;
	while (*p1 != '\0')
	{
		if (*p1 == *p2)
		{
			p1 += 1;
			p2 += 1;
			if (*p2 == '\0')
			{
				count++;
				p2 = substr;
				p1 = str + n;
			}
		}
		else
		{
			p2 = substr;
			p1 += 1;
		}
		n++;
	}
	cout << count << endl;
	return 0;
}