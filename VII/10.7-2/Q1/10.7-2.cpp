#include <iostream>
using namespace std;
class Point
{public:
  Point(float a,float b):x(a),y(b){}
  ~Point(){cout<<"executing Point destructor"<<endl;}
  private:
  float x;
  float y;
};

class Circle:public Point
{public:
Circle(float a,float b,float r):Point(a,b),radius(r){}
  ~Circle(){cout<<"executing Circle destructor"<<endl;}
   private:
  float radius;
};

int main()
{Point *p=new Circle(2.5,1.8,4.5);
 Circle *pc=new Circle(2.5,1.8,4.5);
 delete p;
 return 0;
}


//运行结果：
//executing Point destructor


/* 分析：
 * 在程序中创建了一个指向 Circle 对象的 Point 指针 p，然后又创建了一个 Circle 对象 pc。
 * 当我们使用 delete 关键字删除 p 指针时，它会调用 Point 类的析构函数，但是 Circle 类的析构函数不会被调用。
 * 这是因为 p 指针的类型是 Point，而不是 Circle。因此，只有 Point 类的析构函数被调用，输出 "executing Point destructor"。
 * 而当我们删除 pc 指针时，它会调用 Circle 类的析构函数，输出 "executing Circle destructor"。
 */
