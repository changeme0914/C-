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
// ���ú�������10�������е����ֵ����Сֵ�ֱ����max��min�У�ֻ��дһ����� 
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
//	//ð������
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
//�����������10�����������飬Ȼ����ݼ�������������±꣬���¶�����Ԫ�ظ�ֵ�������
//�����õ�����������get()��put()��
//�����ĸ���������ִ�й����������±�Խ�磬����ֹ�������С����д��������������������������
  //����exit()����
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
//		vals[i] = i*i;   //��Ԫ�ظ�ֵ
//	}
//	cin >> a >> b >> c;
//	put(vals, a) = a*a + 1;       //������val[a]��ֵ��Ϊa*a+1
//	put(vals, b) = b*b + 1;
//	put(vals, c) = c*c + 1;
//	cout << get(vals, a) << endl;  //�������val[a]��ֵ
//	cout << get(vals, b) << endl;
//	cout << get(vals, c) << endl;
//	return 0;
//}
//��д����ʵ���������������÷�ʽ��
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
//ʹ���ַ�����ͳ���ַ����и������ַ��ĸ���
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
	{ //�����ַ���
		if (isalpha(str[i])) //�ж��Ƿ�����ĸ
			chars++;
		else if (isdigit(str[i])) //�ж��Ƿ�������
			digits++;
		else if (isspace(str[i])) //�ж��Ƿ��ǿո�
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