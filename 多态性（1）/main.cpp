#include<iostream>
using namespace std;
#include "Stu_teacher.h"

void fn(Person &person)
{
	person.Disp();
}

int main()
{
    char name[20],title[20];
    int age,month,day,year,score;
    cin>>name>>age>>year>>month>>day>>score;
    Student s(name,age,year,month,day,score);
    cin>>name>>age>>title;
    Teacher t(name,age,title);
    cin>>name>>age>>year>>month>>day>>score>>title;
    Stu_teacher st(name,age,year,month,day,score,title);
    s.Disp();  //显示学生的信息
    t.Disp();  //显示教师的信息
    st.Disp(); //显示实习老师的信息
    //t.Assign(s,90);
    //s.Disp();   
    fn(s);  //调用函数fn，显示参数s的有关信息
    fn(t);  //调用函数fn，显示参数t的有关信息
    fn(st); //调用函数fn，显示参数st的有关信息
    return 0;
}
