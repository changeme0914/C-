/*
#include <iostream>
using namespace std;

int fib (int n)
{
    if (n <= 0) //base case
        return 0;
    else if (n == 1) //base case
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n;
	cout<<"请输入>:"<<endl;
	cin>>n;
	cout<<"第"<<n<<"个斐波那契数为>:"<<endl;
	cout<<fib(n)<<endl;
    return 0;
}*/
/*

#include<iostream>
using namespace std;

int fib(int* F,int n)
{
	int i;
	if(n==0)
		return F[0];
	else if(n==1)
		return F[1];
	else for(i=2;i<=n;i++)
	{
		F[i]=F[i-1]+F[i-2];
	}
	return F[n];
}
int main()
{
	int n,num;
	int F[10];
	cout<<"请输入>:"<<endl;
	cin>>n;
	F[0]=0;
	F[1]=1;
	num=fib(F,n);
	cout<<"第"<<n<<"个斐波那契数为>:"<<endl;
	cout<<num<<endl;
	return 0;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;

void moveDisks(int n, string a, string c, string b)
{
	if(n==1)
	{
		cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
	}
    else
    {
        moveDisks(n-1,a,b,c);
        cout << "Move disk "<<n<<" from "<< a<< " to " << c<< endl;
        moveDisks(n-1,b,c,a);
    }
}

int main()
{
	int x;
	cin>>x;
    moveDisks (x, "A", "C", "B");
    return 0;
}
*/
#include <iostream>
//#include <algorithm>
using namespace std;
int main()
{
    int n,i;
    long long way[55];
    way[1]=1;
    way[2]=2;
    for(i=3;i<=50;i++)
        way[i]=way[i-1]+way[i-2];
    while(cin>>n)
        cout<<way[n]<<endl;
    return 0;
}
