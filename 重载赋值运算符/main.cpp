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
    tt1.Date();    //ʦ������һ��    
    tt2=tt1;         //�˴����õ��Ķδ��룿    
    tt2.Disp();    
    Tutor tt3=tt1; //�˴����õ��Ķδ��룿    
    tt3.Date();     
    tt3.Disp();  
    return 0;   

}  