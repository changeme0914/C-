#include <fstream>
#include <iostream>
using namespace std;
int  main()
{
    short age;
	int score;
    fstream myfile("F:\\a.dic",ios::in|ios::binary);
    myfile.read((char *)&age,2);
	myfile.read((char *)&score,4);
	cout<<age<<","<<score<<endl;
    myfile.close();
    return 0;
} 
