#include <iostream>
using namespace std;

class A
{public:
void f1( );
protected:
void f2( );
private:
int i;
};

class B: public A
{public:
void f3( );
int k;
private:
int m;
};

class C: protected B
{public:
void f4( );
protected:
int m;
private:
int n;
};

class D: private C
{public:
void f5( );
protected:
int p;
private:
int q;
};
int main()
{A a1;
  B b1;
  C c1;
  D d1;
}

/*
A：
- 公共成员函数f1()可以被A自身,B,C,D,main访问。
- 保护成员函数f2()只能从A自身,B,C,D中访问。
- 私有成员变量i只能从类内部访问。

类B：
- 公共成员函数f3()可以被A,B自身,C,D,main访问。
- 公共成员变量k可以被A,B自身,C,D,main访问。
- 私有成员变量m只能被B自身访问。
- 继承自类A的公共成员函数f1()和保护成员函数f2()在类B中的访问权限不变。

类C：
- 公共成员函数f4()可以被A,B,C自身,D,main访问。
- 保护成员变量m可以被C自身和D访问。
- 私有成员变量n只能被C访问。
- 继承自类B的公共成员函数f3()和公共成员变量k在类C中变为保护成员，只能被C和D中访问。
- 继承自类A的公共成员函数f1()和保护成员函数f2()在类C中的访问权限不变。

类D：
- 公共成员函数f5()可以被A,B,C,D自身,main访问。
- 保护成员变量p只能被自身D访问。
- 私有成员变量q只能被自身D访问。
- 继承自类C的公共成员函数f4()在类D中变为保护成员，只能被D访问。
- 继承自类B的公共成员函数f3()、公共成员变量k和保护成员变量m在类D中变为私有成员，只能从类内部访问。
- 继承自类A的公共成员函数f1()和保护成员函数f2()在类D中的访问权限不变。
*/
