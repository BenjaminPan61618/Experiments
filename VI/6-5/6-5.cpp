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
  cout << "姓名：" << name << endl;
  cout << "年龄：" << age << endl;
  cout << "性别：" << sex << endl;
  cout << "地址：" << address << endl;
  cout << "电话：" << tel << endl;
  cout << "职称：" << title << endl;
}

void Teacher::input() {
  cout << "请输入姓名：";
  getline(cin,name);
  cout << "请输入年龄：";
  cin >> age;
  cout << "请输入性别：";
  cin >> sex;
  cin.ignore();
  cout << "请输入地址：";
  getline(cin,address);
  cout << "请输入电话：";
  cin >> tel;
  cin.ignore();
  cout << "请输入职称：";
   getline(cin,title);
}

void Cadre::display() {
  cout << "职务：" << post << endl;
}

void Teacher_Cadre::display() {
  Teacher::display();
  Cadre::display();
  cout << "工资：" << wage << endl;
}

void Teacher_Cadre::input() {
  Teacher::input();
  cout << "请输入职务：";
  cin >> post;
  cout << "请输入工资：";
  cin >> wage;
}

int main() {
  Teacher_Cadre tc;
  tc.input();
  tc.display();
  return 0;
}
