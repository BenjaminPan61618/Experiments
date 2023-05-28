//6_4.cpp
#include<iostream>
using namespace std;
//声明类 Point
class Point
{public:
	Point(float x=0,float y=0);
	void setPoint(float,float);
	float getX() const{return x;}
	float getY() const{return y;}
	friend ostream & operator <<(ostream &, const Point &);
	protected:
	float x,y;
};
class Circle{};
//下面定义 Point 类的成员函数
//Point 的构造函数
Point::Point(float a, float b)
{x=a;y=b;}
//设置x和y的坐标值
void Point::setPoint(float a,float b)
{x=a;y=b;}
//重载运算符"<<",使之能输出点的坐标
ostream & operator <<(ostream & output,const Point &p)
{
	output<<"["<<p.x<<","<<p.y<<"]"<<endl;
	return output;
	}
	
	int main()
	{Point p(3.5,6.4);
		cout<<"x="<<p.getX()<<",y="<<p.getY()<<endl;
		p.setPoint(8.5,6.8);
		cout<<"p(new):"<<p<<endl;
		return 0; 
	}
