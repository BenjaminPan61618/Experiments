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

// Ԥ�����н����
// constructing A
// constructing B
// constructing C
// destructing C
// destructing B
// destructing A

// ʵ�����н����
/* constructing A 
 * constructing B 
 * constructing C 
 * destructing C 
 * destructing B 
 * destructing A
 */

/* ������������򴴽���������A��B��C������B��C���Ǵ�A�̳ж����ġ�
 * �� main �����У�������һ�� C ��Ķ��� c1��
 * �������������ʱ���ᰴ�ռ̳�˳�����ε��ù��캯�������ȵ��� A ��Ĺ��캯����Ȼ����� B ��Ĺ��캯���������� C ��Ĺ��캯����
 * �� main ����ִ����ϣ�c1 ���󳬳��������򣬽������١�
 * ���ٶ���ʱ���ᰴ���빹�캯���෴��˳�����ε����������������ȵ��� C �������������Ȼ����� B ������������������� A �������������
 */

