#include "point.h"
#include "circle.h"
#include "cylinder.h"
#include "point.cpp"
#include "circle.cpp"
#include "cylinder.cpp"
using namespace std;
int main(){
    int x1,y1,r1,h1;
    cout<<"Output x1,y1,r1,h1:";
    cin>>x1>>y1>>r1>>h1;
    Point p(x1,y1);
    Circle circle1(x1,y1,r1);
    Cylinder cylinder1(x1,y1,r1,h1);
    cout<<"Point p:"<<endl;
    cout<<p<<endl;
    cout<<"Circle circle1:"<<endl;
    cout<<circle1<<endl;
    cout<<"Cylinder cylinder1"<<endl;
    cout<<cylinder1<<endl;
    return 0;
}
