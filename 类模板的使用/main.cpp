#include<string>
#include<iostream>
using namespace std;
template<class T1,class T2>
class Student
{
	public:
		Student(T1,T2);
		void GetStu();
	protected:
		T1 number;
		T2 score;
};

template <class T1, class T2>
Student<T1, T2>::Student(T1 a,T2 b)
{
	number=a;
	score=b;
}

template <class T1, class T2>
void Student<T1, T2>::GetStu()
{
     cout<<"Num:"<<number<<","<<"Score:"<<score<<endl;
}



int main() 
{ 
    string str; 
    int n,s; 
    float x; 
    cin>>str>>s;
	Student<string,int> s1(str,s);
    //���ɵ�1������
    cin>>n>>s;
	Student<int,int> s2(n,s);
   //���ɵ�2������
    cin>>n>>x; 
	Student<int,float> s3(n,x);
   //���ɵ�3������
	s1.GetStu();
	s2.GetStu();
	s3.GetStu();
	return 0;
}
