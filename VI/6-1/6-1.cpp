#include <iostream>
using namespace std;
class A                         //A为基类
{public:
  void f1( );
  int i;
 protected:
  void f2( );
  int j;
private:
int k;
};

class B: public A     		   //B为A的公用派生类
{public:
  void f3( );
 protected:
  int m;
 private:
int n;
};

class C: public B              //C为B的公用派生类
{public:
void f4( );
private:
  int p;
};

int main( )
{A a1;                         //a1是基类A的对象
B b1;                          //b1是派生类B的对象
 C c1;                         //c1是派生类C的对象
return 0;
}


//(1) 在 main 函数中能否用b1.i,b1.j和b1.k引用派生类B对象b1中基类A的成员？
//    main 函数中，可以通过b1.i访问b1中基类A的成员i,但是不能通过b1.j以及b1.k访问基类A中的成员j和k.
//    原因：基类A中 i 为公有成员，j 为受保护成员，k 为私有成员，后两者不可被访问。
//    经过共有派生后，在 B 中， i 保持共有属性, j 保持受保护属性, k 保持私有属性，所以无法访问 j 和 k
//(2) 派生类B中的成员函数能否调用基类A中的成员函数f1和f2？
//    可以访问基类A的成员函数 f1,但是不能访问基类A中的成员函数 f2.
//    原因：基类 A 中 f1 为公有成员函数，而 f2 为受保护成员函数，无法访问。
//(3) 派生类B中的成员函数能否引用基类A中的数据成员i,j,k？
//    派生类B中的成员函数可以访问基类A中的数据成员i和j，但不能访问私有成员k。
//(4) 能否在main函数中用c1.i,c1.j,c1.k,c1.m,c1.n,c1.p引用基类A的成员i,j,k，派生类B的成员m,n，以及派生类C的成员p？
//    可以在main函数中使用c1.i、c1.j、c1.m、c1.n和c1.p来引用基类A的成员i、j和k，派生类B的成员m和n，以及派生类C的成员p。
//    原因: i,j,m,n 均为 public 或 protected 类型，而p为C类中自身的私有变量。
//(5) 能否在main函数中用c1.f1(),c1.f2(),c1.f3()和c1.f4()调用f1,f2,f3,f4成员函数？
//    可以访问 f1, f3, f4, 但是不能访问 f2. 原因: f2被定义为私有成员函数
//(6) 派生类C的成员函数f4能否调用基类A中的成员函数f1,f2和派生类中的成员函数f3？
//    f4 可以调用 f1, f3, 但不能调用f2.  原因: f2被定义为私有成员函数
