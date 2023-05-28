 
#include<iostream>
using namespace std;
class Shape{
public:
    virtual double getArea()=0;
};
class Circle:public Shape{
public:
    Circle(double r){
        this->r=r;
    }
    double getArea(){
        return 3.14*r*r;
    }
private:
    double r;
};
class Rectangle:public Shape{
public:
    Rectangle(double a,double b){
        this->a=a;
        this->b=b;
    }
    double getArea(){
        return a*b;
    }
private:
    double a,b;
};
class Triangle:public Shape{
public:
    Triangle(double a,double b){
        this->a=a;
        this->b=b;
    }
    double getArea(){
        return a*b/2;
    }
private:
    double a,b;
};
void printArea(Shape &s){
    cout<<s.getArea()<<endl;
}
int main(){
    Circle c(2);
    Rectangle r(2,3);
    Triangle t(2,3);
    printArea(c);
    printArea(r);
    printArea(t);
    return 0;
}
