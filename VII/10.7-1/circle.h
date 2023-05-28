#ifndef CIRCLE_H
#define CIRCLE_H
#include"point.h"
class Circle:public Point
{public:
	Circle(float x=0,float y=0,float r=0);
	void setRadius(float);
	float getRadius() const{return radius;}
	float area() const{return 3.14159*radius*radius;}
	friend ostream & operator <<(ostream &, const Circle &);
	protected:
	float radius;
};
#endif
