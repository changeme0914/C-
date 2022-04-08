// Person.cpp: implementation of the Person class.
//
//////////////////////////////////////////////////////////////////////

#include "Person.h"
#include<iostream>
#include<cstring>
using namespace std;
//////////////////////////////////////////////////////////////////////

Person::Person(char* name)
{
	
	strcpy(pname,name);
}

void Person::Disp()
{
	cout<<pname<<endl;
}

