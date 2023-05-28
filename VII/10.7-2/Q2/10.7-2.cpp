#include <iostream>
using namespace std;
class Point
{public:
  Point(float a,float b):x(a),y(b){}
  virtual ~Point(){cout<<"executing Point destructor"<<endl;}
  private:
  float x;
  float y;
};

class Circle:public Point
{public:
Circle(float a,float b,float r):Point(a,b),radius(r){}
  virtual ~Circle(){cout<<"executing Circle destructor"<<endl;}
   private:
  float radius;
};

int main()
{Point *p=new Circle(2.5,1.8,4.5);
 delete p;
 return 0;
}

/* 运行结果:
 * executing Circle destructor
 * executing Point destructor
 */


/* 分析：
 * 将 Point 类的析构函数声明为 virtual 函数后，在使用 delete 删除 p 指针时，它会调用 Circle 类的析构函数。
 * 因为 p 指针指向的是 Circle 对象。因此，Circle 类的析构函数被调用，输出 "executing Circle destructor"。
 * 这是因为在程序中，我们创建了一个 Circle 对象并将其赋值给一个 Point 指针。当我们调用 delete p 时，程序会首先调用 Circle 的析构函数，然后再调用 Point 的析构函数。
 */
