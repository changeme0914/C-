#define _CRT_SECURE_NO_WARNINGS 1
//�����������
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

//���Բ�Ĺ�ϵ
#include<cmath>
#include <iostream>
using namespace std;

// ����
class Pointer
{
private:
	int x;  // x ����
	int y;  // y ����
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

// Բ��
//class Circle 
//{
//
//private:
//	Pointer center; // Բ��
//	int radius; // �뾶
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
//		//��x1,y1����ʾp�������
//		int x1 = p.getX();
//		int y1 = p.getY();
//		//��x2,y2����ʾԲ�ĵ�����
//		int x2 = center.getX();
//		int y2 = center.getY();
//		//dist��ʾԲ�ĵ�p��ľ���
//		int dist = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
//		//�������С�ڰ뾶������Բ��
//		if (dist<radius){
//			cout << "in" << endl;
//		}
//		//���������ڰ뾶������Բ��
//		else if (dist == radius){
//			cout << "on" << endl;
//		}
//		//���������ڰ뾶������Բ��
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
//	// ��������������
//	int x, y;
//	cin >> x;
//	cin >> y;
//
//	// ����һ����
//	Pointer p;
//	p.setX(x);
//	p.setY(y);
//
//	// ����һ��Բ
//	Circle c;
//	c.setCenter(5, 0);
//	c.setRadius(5);
//
//	// �жϵ��Բ�Ĺ�ϵ
//	c.isPointerInCircle(p);
//
//	return 0;
//}


//���캯��
#include <iostream>
#include <string>
using namespace std;
// Person��
class Person
{
public:
	string name;    // ����
	int age;    // ����

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
