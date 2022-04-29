#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	int i=0;
	char student[100]={0};
	fstream myfile("F:\\a.dic",ios::in|ios::binary);
	if(myfile.fail())
		cout<<"error"<<endl;
	
	for(i=0;i<5;i++)
	{
		myfile>>student;
		cout<<student<<"  ";
		myfile>>student;

		cout<<student<<"  ";
		myfile>>student;

		cout<<student<<endl;
	}
	myfile.close();
	return 0;
}