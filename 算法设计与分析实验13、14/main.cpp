/*#include<iostream>
#include<cstdio>
#include<sstream>
#include<iomanip>
using namespace std;   
#define N 15   
int n; //皇后个数   
int sum=0; //可行解个数   
int x[N]; //皇后放置的列数    
int place(int k)   
{   
    int i;   
    for(i=1;i<k;i++)   
      if(abs(k-i)==abs(x[k]-x[i])||x[k]==x[i])   
        return 0;   
    return 1;   
}    
int queen(int t)   
{  
	if(t>n) //当放置的皇后超过n时，可行解个数加1，此时n必须大于0   
      sum++;   
    else 
		for(int i=1;i<=n;i++)   
		{   
		    x[t]=i; //标明第t个皇后放在第i列   
            if(place(t)) //如果可以放在某一位置，则继续放下一皇后   
			queen(t+1);    
		}   
	return sum;   
}   
int main()   
{   
    int t;  
    while(cin>>n)   
    {   
		sum=0;
        if(n==0) 
			break;   
        cout<<queen(1)<<endl;   
	}
    return 0;   
} */


#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;
 
int dp[1010][1010];

int max(int num1,int num2)
{
	return num1>num2?num1:num2;
}

int main()
{
    int n=6,v,N,l;
    int mg[1010],val[1010];
	cin >> N;
	l=N;
    while (N--)
	{
		
        memset(dp,0,sizeof(dp));
    	for(int i=1;i<=6;i+=2)
    	{
    		scanf("%d %d",&mg[i],&val[i]);
			mg[i+1]=mg[i];
			val[i+1]=val[i];
		}
        cin >> v;
		
		for(i=1;i<=n;i++)
		{
			for(int j=0;j<=v;j++)
			{
				if(j-mg[i]>=0)
				{
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-mg[i]]+val[i]);
				}
				else
				{
					dp[i][j]=dp[i-1][j];//务必注意此处
				}
			}
		}
		cout<<"Case "<<l<<": "<<dp[n][v]<<endl;
	}
    return 0;
}
