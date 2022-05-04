#include<iostream>
using namespace std;
#include<cstring>
template<class T1,class T2>

int sum(T1 a,T2 b)
{
	return a+b;
}
template<class T1>
int sum(T1 a,char *b)
{
	return a+strlen(b);
}
template<class T2>
int sum(char *a,T2 b)
{

	return b+strlen(a);
}

char *sum(char *a,char *b)
{
	return strcat(a,b);
}

int main()
{
     int  n1,n2;
     char c1,c2,s1[20],s2[20];
     float x1,x2;
     cin>>n1>>n2>>c1>>c2>>s1>>s2>>x1>>x2;
     cout<<sum(n1,n2)<<endl;
     cout<<sum(n1,c2)<<endl;
     cout<<sum(n1,s2)<<endl;
     cout<<sum(s1,n2)<<endl;
     cout<<sum(n1,x2)<<endl;
     cout<<sum(c1,c2)<<endl;
     cout<<sum(c1,s2)<<endl;
     cout<<sum(s1,c2)<<endl;
     cout<<sum(c1,x2)<<endl;
     cout<<sum(s1,s2)<<endl;
     cout<<sum(s1,x2)<<endl;
     cout<<sum(x1,s2)<<endl;
     cout<<sum(x1,x2)<<endl;
     return 0;
}
