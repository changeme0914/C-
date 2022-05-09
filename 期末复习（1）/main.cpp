/*某工厂生产写字台，标准写字台的台面木料尺寸规格是1.2*0.6*0.03 立方米，
老板桌的台面木料规格是1.5*1.0*0.03立方米，
儿童写字台的是1.0*0.6*0.03，
还有一种特大写字台，规格：2.0*1.2*0.05。
设某单位购买四种写字台的数量都是从键盘输入，下面的主函数用来计算制作这些台面总共需要多少立方米的木料，其中V()是一个函数，用来计算一张写字台台面的体积，请你用“带默认值参数的函数”的知识来改写程序，并给出V()函数的定义，以便使程序简单

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
下面的代码是计算四个水池子体积的：

函数v()的功能是计算水池子的体积（长*宽*高），在调用该函数时通常要写上实参，但是每次都写很多参数实在麻烦，能不能省略一个或几个不写？请你设计一下v()，使得4次调用所写的实参个数最少。
要求：
（1）编写V()函数
（2）修改主函数中的V调用，使实参个数最少。
两个函数一并提交*/
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
编写函数，用来计算i和i+1两个整数的和。主函数调用该函数对下面每一组数据进行操作。?（使用内联函数以缩短运行时间）
1? 2
2 ?3
3 ?4
.......
30000??30001
?
Input
输入一个终值，例如，输入100，则只计算到100? 101这一组数据
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
函数f()的功能是计算两个数的差，为了节省函数调用所带来的额外的时空开销，请将下面代码改写一下。
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
主函数框架如下面代码所示，其功能是，找出键盘输入数据的最大值和最小值，请按照程序框架编写被调函数并完善整个程序。
要求：不得使用指针。除了填空和函数声明外，不允许改写主程序其他部分
int main()
{
?????? int? a[10], i,? max, min;
?????? for(i=0; i<=9; i++)?
????????????? ?cin>>a[i];
?????? ____________________?? //调用函数，将10个数据中的最大值和最小值分别存入max和min中，只填写一条语句?
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

	sub(a,max,min);//调用函数，将10个数据中的最大值和最小值分别存入max和min中，只填写一条语句
	cout<<"Max is "<<max<<",Min is "<<min<<endl;
	return 0;
}
*/


/*
Description
利用new和delete，使用堆内存存储键盘输入的10个整数，并排序输出（从大到小）。
Input
输入十个整数
Output
按从大到小顺序输出10个整数
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



//值返回和引用返回值返回和引用返回
/*
下面程序生成10个整数的数组，然后根据键盘输入的三个下标，重新对三个元素赋值并输出。其中用到两个函数：get()和put()，无论哪个函数，若执行过程中遇到下标越界，则终止程序运行。请编写这两个函数，并完善整个程序。

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


#include <cstdlib>	//包含exit()函数
int main()
{
	int vals[10],a,b,c,i;
	for(i=0; i<=9; i++)
		vals[i]=i*i; //给元素赋值
	cin>>a>>b>>c;
	put(vals,a)=a*a+1;	//让数组val[a]的值变为a*a+1
	put(vals,b)=b*b+1;	
	put(vals,c)=c*c+1;
	cout<<get(vals,a)<<endl;	//输出数组val[a]的值
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