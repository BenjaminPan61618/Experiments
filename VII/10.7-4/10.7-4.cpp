 
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
class Square:public Shape{
public:
    Square(double a){
        this->a=a;
    }
    double getArea(){
        return a*a;
    }
private:
    double a;
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
class Trapezoid:public Shape{
public:
    Trapezoid(double a,double b,double h){
        this->a=a;
        this->b=b;
        this->h=h;
    }
    double getArea(){
        return (a+b)*h/2;
    }
private:
    double a,b,h;
};
class Triangle:public Shape{
public:
    Triangle(double a,double h){
        this->a=a;
        this->h=h;
    }
    double getArea(){
        return a*h/2;
    }
private:
    double a,h;
};
int main(){
    Shape *p[5];
    p[0]=new Circle(2);
    p[1]=new Square(3);
    p[2]=new Rectangle(2,3);
    p[3]=new Trapezoid(2,3,4);
    p[4]=new Triangle(2,3);
    double sum=0;
    for(int i=0;i<5;i++){
        sum+=p[i]->getArea();
    }
    cout<<"The sum of the areas is: "<<sum<<endl;
    return 0;
}
