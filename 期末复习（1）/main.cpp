/*ĳ��������д��̨����׼д��̨��̨��ľ�ϳߴ�����1.2*0.6*0.03 �����ף�
�ϰ�����̨��ľ�Ϲ����1.5*1.0*0.03�����ף�
��ͯд��̨����1.0*0.6*0.03��
����һ���ش�д��̨�����2.0*1.2*0.05��
��ĳ��λ��������д��̨���������ǴӼ������룬�������������������������Щ̨���ܹ���Ҫ���������׵�ľ�ϣ�����V()��һ����������������һ��д��̨̨�������������á���Ĭ��ֵ�����ĺ�������֪ʶ����д���򣬲�����V()�����Ķ��壬�Ա�ʹ�����

*/
#include<iostream>
using namespace std;
/*
double V(double l=1.2,double w=0.6,double h=0.03);

double V(double l,double w,double h)
{
	return l*w*h;
}
int main()
{
	int a,b,c,d;
	float sum;
	cin>>a>>b>>c>>d;
	sum=a*V()+b*V(1.5,1.0)+c*V(1.0)+d*V(2,1.2,0.05);
	cout<<sum<<endl;
	return 0;
}
/*
Description
����Ĵ����Ǽ����ĸ�ˮ��������ģ�

����v()�Ĺ����Ǽ���ˮ���ӵ��������*��*�ߣ����ڵ��øú���ʱͨ��Ҫд��ʵ�Σ�����ÿ�ζ�д�ܶ����ʵ���鷳���ܲ���ʡ��һ���򼸸���д���������һ��v()��ʹ��4�ε�����д��ʵ�θ������١�
Ҫ��
��1����дV()����
��2���޸��������е�V���ã�ʹʵ�θ������١�
��������һ���ύ*/
/*
int v(int h,int w=4,int l=3);
int v(int h,int w,int l)
{
	return h*w*l;
}
int main()
{
	cout<<v(5)<<endl;//3 4 5
	cout<<v(2)<<endl;//3 4 2
	cout<<v(3,3)<<endl;//3 3 3
	cout<<v(6,7,8)<<endl;
	return 0;
}*/
/*
��д��������������i��i+1���������ĺ͡����������øú���������ÿһ�����ݽ��в�����?��ʹ��������������������ʱ�䣩
1? 2
2 ?3
3 ?4
.......
30000??30001
?
Input
����һ����ֵ�����磬����100����ֻ���㵽100? 101��һ������
*/

/*
inline void sum(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		cout<<i+i+1<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	sum(n);
	return 0;
}*/
/*
Description
����f()�Ĺ����Ǽ����������ĲΪ�˽�ʡ���������������Ķ����ʱ�տ������뽫��������дһ�¡�
#include <iostream>
using namespace std;
int f(int,int);
int main()?
{?
????? ?int i,a,b;?
????? ?for(i=1;i<=3;i++){
????????? ?cin>>a>>b;
?????????? cout<<f(a,b)<<endl;
????? ?}
???? ? return 0;?
}?
?
int f(int a,int b)
{
??? ?return b-a;
}
*/

/*
#include <iostream>
using namespace std;
inline int f(int,int);
int main()
{
	int i,a,b;
	for(i=1;i<=3;i++)
	{
		cin>>a>>b;
		cout<<f(a,b)<<endl;
	}
	return 0;
}

inline int f(int a,int b)
{
	return b-a;
}
*/

/*
��������������������ʾ���书���ǣ��ҳ������������ݵ����ֵ����Сֵ���밴�ճ����ܱ�д����������������������
Ҫ�󣺲���ʹ��ָ�롣������պͺ��������⣬�������д��������������
int main()
{
?????? int? a[10], i,? max, min;
?????? for(i=0; i<=9; i++)?
????????????? ?cin>>a[i];
?????? ____________________?? //���ú�������10�������е����ֵ����Сֵ�ֱ����max��min�У�ֻ��дһ�����?
????? cout<<"Max is "<<max<<",Min is "<<min<<endl;
???? return? 0;
}
*/

/*
void sub(int arr[10],int &max,int &min)
{
	int i;
	max=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		{
			int t;
			t=max;
			max=arr[i];
			arr[i]=t;
		}
	}
	min=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]<min)
		{
			int t;
			t=min;
			min=arr[i];
			arr[i]=t;
		}
	}
}
int main()
{
	int a[10], i, max, min;
	for(i=0; i<=9; i++)
		cin>>a[i];

	sub(a,max,min);//���ú�������10�������е����ֵ����Сֵ�ֱ����max��min�У�ֻ��дһ�����
	cout<<"Max is "<<max<<",Min is "<<min<<endl;
	return 0;
}
*/


/*
Description
����new��delete��ʹ�ö��ڴ�洢���������10��������������������Ӵ�С����
Input
����ʮ������
Output
���Ӵ�С˳�����10������
Sample Input
-5 1 6 8 2 9 4 7 -10 3
Sample Output
9 8 7 6 4 3 2 1 -5 -10*/
/*
int main()
{
	int i;
	int j;
	int *p=new int[10];
	for(i=0;i<10;i++)
	{
		cin>>*(p+i);
	}

	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(*(p+j)<*(p+j+1))
			{
				int t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		cout<<*(p+i)<<" ";
	}
	return 0;
}*/



//ֵ���غ����÷���ֵ���غ����÷���
/*
�����������10�����������飬Ȼ����ݼ�������������±꣬���¶�����Ԫ�ظ�ֵ������������õ�����������get()��put()�������ĸ���������ִ�й����������±�Խ�磬����ֹ�������С����д��������������������������

}
*/

/*
int &put(int arr[10],int n)
{
	if(n>=0&&n<=9)
	{
		int &i=arr[n];
		return i;
	}
	else
	{
		cout<<"out of range"<<endl;
		exit(0);

	}
}

int &get(int arr[10],int n)
{
	if(n>=0&&n<=9)
	{
		int &i=arr[n];
		return i;
	}
	else
	{
		cout<<"out of range"<<endl;
		exit(0);

	}
}


#include <cstdlib>	//����exit()����
int main()
{
	int vals[10],a,b,c,i;
	for(i=0; i<=9; i++)
		vals[i]=i*i; //��Ԫ�ظ�ֵ
	cin>>a>>b>>c;
	put(vals,a)=a*a+1;	//������val[a]��ֵ��Ϊa*a+1
	put(vals,b)=b*b+1;	
	put(vals,c)=c*c+1;
	cout<<get(vals,a)<<endl;	//�������val[a]��ֵ
	cout<<get(vals,b)<<endl;
	cout<<get(vals,c)<<endl;
	return 0;
}*/
int main()
{
	int i=1;
	int *p=&i;
	*p=2;
	cout<<*p<<i<<endl;
}