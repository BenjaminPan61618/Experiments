#include <iostream>
using namespace std;
class A
{public:
   A( ){a=0;b=0;}
   A(int i){a=i;b=0;}
   A(int i,int j){a=i;b=j;}
   void display( ){cout<<"a="<<a<<" b="<<b;}
private:
   int a;
   int b;
 };

class B  : public A
{public:
   B( ){c=0;}
   B(int i):A(i){c=0;}
   B(int i,int j):A(i,j){c=0;}
   B(int i,int j,int k):A(i,j){c=k;}
   void display1( )
{display();
     cout<<" c="<<c<<endl;
}
   private:
int c;
};

int main( )
{   B b1;
    B b2(1);
    B b3(1,3);
    B b4(1,3,5);
    b1.display1( );
    b2.display1( );
    b3.display1( );
    b4.display1( );
return 0;
}

// 我的预测结果:
/* a=0 b=0 c=0
 * a=1 b=0 c=0
 * a=1 b=3 c=0
 * a=1 b=3 c=5
 */
 
// 实际输出结果:
/* a=0 b=0 c=0
 * a=1 b=0 c=0
 * a=1 b=3 c=0
 * a=1 b=3 c=5
 */


/* 这个程序定义了两个类 A 和 B，其中, B 是 A的子类。
 * A 有三个构造函数，分别是默认构造函数、含一个参数的构造函数和含两个参数的构造函数。
 * B 有四个构造函数，分别是默认构造函数、含一个参数的构造函数、含两个参数的构造函数和含三个参数的构造函数。
 * 在B的构造函数中，使用了A的构造函数来初始化A的成员变量。
 * 在main函数中，分别创建了四个B类的对象b1、b2、b3和b4，并分别调用了它们的display1函数来输出它们的成员变量。
 * 其中b1使用了默认构造函数，b2使用了含一个参数的构造函数，b3使用了含两个参数的构造函数，b4使用了含三个参数的构造函数。
 */
