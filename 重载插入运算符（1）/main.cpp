#include"GraduateStudent.h"
#include"Student.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& out,Student& s)
{
	s.disp(out);
	return out;
}

void fn(Student&s)
{
	cout<<s;
}
int main()   
{

       char s_name[20], t_name[20];
       int  score;
       cin>>s_name>>score;
       Student s(s_name, score);   
       cin>>s_name>>score>>t_name;
       GraduateStudent g(s_name,score,t_name);      
       cout<<s<<g;   
       fn(s);
       fn(g);
       return 0;
} 