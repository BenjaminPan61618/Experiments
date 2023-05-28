#include"cylinder.h"
Cylinder::Cylinder(float a,float b,float r,float h):Circle(a,b,r)
{height=h;}
void Cylinder::setHeight(float h)
{height=h;}
ostream & operator <<(ostream & output,const Cylinder &cy)
{
	output<<"Center=["<<cy.x<<","<<cy.y<<"],r="<<cy.radius<<",height="<<cy.height<<",area="<<cy.area()<<",volume="<<cy.volume()<<endl;
	return output;
	}

