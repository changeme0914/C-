#include<iostream>
using namespace std;
#include"StuTeacher.h"

void f(Person &ss)
{
	ss.Disp();
}
int main()

{

    char name[10],title[10];

    int score,age;

    cin>>name>>score;

    Student s(name,score);

    cin>>name>>title;

    Teacher t(name,title);

    cin>>name>>score>>title>>age;

    StuTeacher st(name,score,title,age);

    f(s);

    f(t);

    f(st);

    st.Edit(s,90);

    s.Disp();

    return 0;

}