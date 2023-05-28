#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
  void input();

protected:
  string name;
  int age;
  char sex;
  string address;
  long tel;
  string title;
  void display();
};

class Cadre {
protected:
  string post;
  void display();
};

class Teacher_Cadre : protected Teacher, protected Cadre {
public:
  float wage;
  void display();
  void input();
};

void Teacher::display() {
  cout << "������" << name << endl;
  cout << "���䣺" << age << endl;
  cout << "�Ա�" << sex << endl;
  cout << "��ַ��" << address << endl;
  cout << "�绰��" << tel << endl;
  cout << "ְ�ƣ�" << title << endl;
}

void Teacher::input() {
  cout << "������������";
  getline(cin,name);
  cout << "���������䣺";
  cin >> age;
  cout << "�������Ա�";
  cin >> sex;
  cin.ignore();
  cout << "�������ַ��";
  getline(cin,address);
  cout << "������绰��";
  cin >> tel;
  cin.ignore();
  cout << "������ְ�ƣ�";
   getline(cin,title);
}

void Cadre::display() {
  cout << "ְ��" << post << endl;
}

void Teacher_Cadre::display() {
  Teacher::display();
  Cadre::display();
  cout << "���ʣ�" << wage << endl;
}

void Teacher_Cadre::input() {
  Teacher::input();
  cout << "������ְ��";
  cin >> post;
  cout << "�����빤�ʣ�";
  cin >> wage;
}

int main() {
  Teacher_Cadre tc;
  tc.input();
  tc.display();
  return 0;
}

