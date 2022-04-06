////////////////
//main.cpp
#include "Student.h"
#include "Teacher.h"
#include <iostream>
using namespace std;

int main()
{
	int new_score;
	char s_name[20];
	char t_name[20];
	char title[20];
	int s_age;
	int t_age;
	int year,month,day;
	int score;
	cin>>s_name>>s_age;
	cin>>year>>month>>day>>score;
	cin>>t_name>>t_age>>title;

	Student s(s_name,s_age,year,month,day,score);
	s.S_Out();

	Teacher t(t_name,t_age,title);
	t.T_Out();

	cin>>new_score;
	t.assignScore(s,new_score);
	s.S_Out();
	
	return 0;
}