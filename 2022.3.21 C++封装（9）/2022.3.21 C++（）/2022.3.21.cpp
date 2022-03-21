#define _CRT_SECURE_NO_WARNINGS 1
//设计立方体类
//#include <iostream>
//using namespace std;
//class Cube 
//{
//public:
//	void setLength(int a)
//	{
//		length = a;
//	}
//	void setWidth(int b)
//	{
//		width = b;
//	}
//	void setHeight(int c)
//	{
//		height = c;
//	}
//	int getLength(){
//		return length;
//	}
//	int getWidth(){
//		return width;
//	}
//	int getHeight(){
//		return height;
//	}
//	int getArea(){
//		return 2 * (length * width + length * height + width * height);
//	}
//	int getVolume(){
//		return length * width * height;
//	}
//private:
//	int length;
//	int width;
//	int height;
//	// write your code here......
//};
//int main() 
//{
//	int length, width, height;
//	cin >> length;
//	cin >> width;
//	cin >> height;
//
//	Cube c;
//	c.setLength(length);
//	c.setWidth(width);
//	c.setHeight(height);
//
//	cout << c.getLength() << " "
//		<< c.getWidth() << " "
//		<< c.getHeight() << " "
//		<< c.getArea() << " "
//		<< c.getVolume() << endl;
//
//	return 0;
//}

//点和圆的关系
#include<cmath>
#include <iostream>
using namespace std;

// 点类
class Pointer
{
private:
	int x;  // x 坐标
	int y;  // y 坐标
public:
	void setX(int x) 
	{
		this->x = x;
	}
	int getX()
	{
		return x;
	}
	void setY(int y) 
	{
		this->y = y;
	}
	int getY()
	{
		return y;
	}

};

// 圆类
//class Circle 
//{
//
//private:
//	Pointer center; // 圆心
//	int radius; // 半径
//
//public:
//	void setCenter(int x, int y)
//	{
//		center.setX(x);
//		center.setY(y);
//	}
//
//	void setRadius(int radius)
//	{
//		this->radius = radius;
//	}
//
//	// write your code here......
//	void isPointerInCircle(Pointer p){
//		//（x1,y1）表示p点的坐标
//		int x1 = p.getX();
//		int y1 = p.getY();
//		//（x2,y2）表示圆心的坐标
//		int x2 = center.getX();
//		int y2 = center.getY();
//		//dist表示圆心到p点的距离
//		int dist = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
//		//如果距离小于半径，则在圆内
//		if (dist<radius){
//			cout << "in" << endl;
//		}
//		//如果距离等于半径，则在圆上
//		else if (dist == radius){
//			cout << "on" << endl;
//		}
//		//如果距离大于半径，则在圆外
//		else{
//			cout << "out" << endl;
//		}
//	}
//
//};
//
//int main()
//{
//
//	// 键盘输入点的坐标
//	int x, y;
//	cin >> x;
//	cin >> y;
//
//	// 创建一个点
//	Pointer p;
//	p.setX(x);
//	p.setY(y);
//
//	// 创建一个圆
//	Circle c;
//	c.setCenter(5, 0);
//	c.setRadius(5);
//
//	// 判断点和圆的关系
//	c.isPointerInCircle(p);
//
//	return 0;
//}


//构造函数
#include <iostream>
#include <string>
using namespace std;
// Person类
class Person
{
public:
	string name;    // 姓名
	int age;    // 年龄

	// write your code here......
	Person(string n, int a)
	{
		name = n;
		age = a;
	}


	void showPerson()
	{
		cout << name << " " << age << endl;
	}
};
int main()
{
	string name;
	int age;
	cin >> name;
	cin >> age;
	Person p(name, age);
	p.showPerson();
	return 0;
}
