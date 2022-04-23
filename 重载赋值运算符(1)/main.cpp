#include"Tutor.h"
#include<iostream>
using namespace std;
int main()    
{ 
    char name1[15],name2[15];
    int score,age;
    cin>>name1>>score>>name2>>age;
    Tutor tt1(name1,score,name2,age),tt2;    
    tt1.Disp();     
    tt1.Date();    //师生碰面一次    
    tt2=tt1;         //此处调用的哪段代码？    
    tt2.Disp();    
    Tutor tt3=tt1; //此处调用的哪段代码？    
    tt3.Date();     
    tt3.Disp();  
    return 0;   

}  