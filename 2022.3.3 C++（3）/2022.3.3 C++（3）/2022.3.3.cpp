#define _CRT_SECURE_NO_WARNINGS 1
//��д����������ʵ������Ĺ��ܣ��������������������������ݣ��п����������������п���������ʵ�������п����������ַ���-- - ʵ���������ַ�ָ�룩�������ǰ���֣���������ǵĺͣ�������ַ����������ӳ�һ������

//˵��������������ɲ��������������������������á�
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
//�ֱ�������������������ʵ���������ַ���
//�磺 1       2
//1.1    2.2
//abc   123
//Output
//������ε��õĽ��
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
//ĳ��������д��̨����׼д��̨��̨��ľ�ϳߴ�����1.2*0.6*0.03 �����ף�
//�ϰ�����̨��ľ�Ϲ����1.5*1.0*0.03�����ף�
//��ͯд��̨����1.0*0.6*0.03��
//����һ���ش�д��̨�����2.0*1.2*0.05��
//��ĳ��λ��������д��̨���������ǴӼ������룬�������������������������Щ̨���ܹ���Ҫ���������׵�ľ�ϣ�����V()��һ����������������һ��д��̨̨�������������á���Ĭ��ֵ�����ĺ�������֪ʶ����д���򣬲�����V()�����Ķ��壬�Ա�ʹ�����
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

//��ʾ������������V����ʱ����Щ����������ĳһ��ȷ��ֵ
//ע�⣺��������ô�Ĭ��ֵ�����ĺ�������̣����򲻵÷�
//Input
//����4�����ݣ��ֱ����4��д��̨������
//Output
//���������Щд��̨̨���ܹ���Ҫ����ľ�ϣ������ף�
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