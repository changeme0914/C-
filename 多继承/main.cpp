#include<iostream>
#include "Stu_teacher.h"

using namespace std;
int main()
{

    char name[15],title[20]; 
    int age; 
    cin>>name>>age>>title;
    Person p(name);
    p.Disp();
    Student s(name,age);
    s.Disp();
    s.Study();
    Teacher t(name,title);
    t.Disp();
    t.Teach();
    Stu_teacher st(name,age); 
    st.Disp();
    st.Study(); 
    st.Teach(); 
    return 0; 
} 