#include <iostream>
using namespace std;
class A
{public:
   A( ){cout<<"constructing A "<<endl;}
   ~A( ){cout<<"destructing A "<<endl;}
};

class B  : public A
{public:
   B( ){cout<<"constructing B "<<endl;}
   ~B( ){cout<<"destructing B "<<endl;}
};

class C  : public B
{public:
   C( ){cout<<"constructing C "<<endl;}
   ~C( ){cout<<"destructing C "<<endl;}
};
int main( )
{C c1;
return 0;
}

// 预测运行结果：
// constructing A
// constructing B
// constructing C
// destructing C
// destructing B
// destructing A

// 实际运行结果：
/* constructing A 
 * constructing B 
 * constructing C 
 * destructing C 
 * destructing B 
 * destructing A
 */

/* 分析：这个程序创建了三个类A、B和C，其中B和C都是从A继承而来的。
 * 在 main 函数中，创建了一个 C 类的对象 c1。
 * 当创建这个对象时，会按照继承顺序依次调用构造函数：首先调用 A 类的构造函数，然后调用 B 类的构造函数，最后调用 C 类的构造函数。
 * 当 main 函数执行完毕，c1 对象超出其作用域，将被销毁。
 * 销毁对象时，会按照与构造函数相反的顺序依次调用析构函数：首先调用 C 类的析构函数，然后调用 B 类的析构函数，最后调用 A 类的析构函数。
 */
