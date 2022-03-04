#define _CRT_SECURE_NO_WARNINGS 1
//c++冒泡排序
//#include <iostream>
//using namespace std;
//int main() 
//{
//	int arr[6] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		cin >> arr[i];
//	}
//	for (i = 0; i < len - 1; i++)
//	{
//		int j;
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1]= t;
//			}
//		}
//
//	}
//	for (i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	// write your code here......
//	return 0;
//}
//c++选择排序
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[6] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//	int i;
//	for (i = 0; i < len; i++) 
//	{
//		cin >> arr[i];
//	}
//	// write your code here......
//	for (i = 0; i < len; i++)
//	{
//		int j;
//		for (j = i + 1; j < len; j++)
//		{
//			if (arr[j]<arr[i])
//			{
//				int t = arr[j];
//				arr[j] = arr[i];
//				arr[i] = t;
//			}
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}
//计算公司年销售额
//第一季度：22, 66, 44
//第二季度：77, 33, 88
//第三季度：25, 45, 65
//第四季度：11, 66, 99
//#include <iostream>
//using namespace std;
//int main() 
//{
//	int arr[4][3] = { { 22, 66, 44 }, 
//	{ 77, 33, 88 }, 
//	{ 25, 45, 65 }, 
//	{11,66,99}
//		// write your code here......
//	};
//	int sum = 0;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 3; j++) {
//			sum += arr[i][j];
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}
//结构体简单使用
//#include <iostream>
//#include <string>
//using namespace std;
//struct student 
//{
//	char name[20];
//	int age;
//	float hight;
//	// write your code here......
//};
//
//int main()
//{
//	struct student stu;
//	cin >> stu.name >> stu.age >> stu.hight;
//	cout << stu.name <<" "<< stu.age <<" "<< stu.hight<<endl;
//	// write your code here......
//	return 0;
//}
//利用指针遍历数组
//#include <iostream>
//using namespace std;
//int main() 
//{
//	int arr[6] = { 0 };
//	int* ptr = arr;
//	int len = sizeof(arr) / sizeof(int);
//	for (int i = 0; i < len; i++) {
//		cin >> arr[i];
//	}
//	// write your code here......
//	for (int i = 0; i < len; i++)
//	{
//		cout << *(ptr + i) << " ";
//	}
//
//	return 0;
//}
//获取字符串长度
//#include <iostream>
//using namespace std;
//int main() {
//
//	char str[100] = { 0 };
//	cin.getline(str, sizeof(str));
//	// write your code here......
//	char *p = str;
//	int sum = 0;
//	while (*(p) != '\0')
//	{
//		sum += 1;
//		p++;
//	}
//	cout << sum;
//	return 0;
//}
// 复制部分字符串
//#include <iostream>
//using namespace std;
//int main() 
//{
//	char str[30] = { 0 };
//	cin.getline(str, sizeof(str));
//	int m;
//	cin >> m;
//	// write your code here......
//	char *p = str;
//	while (*(p +m-1) != '\0')
//	{
//		cout << *(p + m-1);
//		p++;
//	}
//	return 0;
//}
//创建动态数组
#include <iostream>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	// write your code here......
	int i;
	int *p = new int[n];
	for (i = 0; i < n; i++)
	{
		*(p + i) = n + i;
	}
	for (i = 0; i < n; i++)
	{
		cout << *(p + i) << " ";
	}
	return 0;
}