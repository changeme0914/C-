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
    s.Disp();  //��ʾѧ������Ϣ
    t.Disp();  //��ʾ��ʦ����Ϣ
    st.Disp(); //��ʾʵϰ��ʦ����Ϣ
    //t.Assign(s,90);
    //s.Disp();   
    fn(s);  //���ú���fn����ʾ����s���й���Ϣ
    fn(t);  //���ú���fn����ʾ����t���й���Ϣ
    fn(st); //���ú���fn����ʾ����st���й���Ϣ
    return 0;
}
