// Time.h: interface for the Time class.
//Time.h
class Time  
{
public:
	Time(int s=0,int f=0,int m=0);
	void disp();
	Time operator-(Time &);
	Time& operator--();
	Time operator--(int);
protected:
	int shi;
	int fen;
	int miao;

};