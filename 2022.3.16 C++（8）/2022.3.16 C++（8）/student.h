class Student
{
public:
	void Set(char* , int);  //用来设置学号和分数
	void  Edit(int);    //用来修改成绩，参数为新成绩
	void Out();         //用来输出学号和分数
protected:
	char  num[10];
	int  score;
};