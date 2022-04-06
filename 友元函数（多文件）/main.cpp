#include"Student.h"
#include"Teacher.h"
int main()
{
	Student s1("Marry");
	Teacher t1;
	t1.assignGrades(s1,4);
	s1.disp();
	t1.assignGrades(s1,5);
	s1.disp();
	return 0;
}  
