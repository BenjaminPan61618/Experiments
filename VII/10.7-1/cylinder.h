#ifndef CYLINDER_H
#define CYLINDER_H
#include"circle.h"
class Cylinder:public Circle
{public:
	Cylinder(float x=0,float y=0,float r=0,float h=0);
	void setHeight(float);
	float getHeight() const{return height;}
	float area() const{return 2*Circle::area()+2*3.14159*radius*height;}
	float volume() const{return Circle::area()*height;}
	friend ostream & operator <<(ostream &, const Cylinder &);
	protected:
	float height;
};
#endif
