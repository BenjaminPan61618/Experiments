
#include <iostream>
using namespace std;

class Student {
private:
    int num;
    string name;
    char sex;
public:
friend class Teacher;
    Student(int n, string na, char s) {
        num = n;
        name = na;
        sex = s;
    }
    operator int() {
        return num;
    }
    operator string() {
        return name;
    }
    operator char() {
        return sex;
    }
};

class Teacher {
private:
    int num;
    string name;
    char sex;
public:
    Teacher(Student stud) {
        num = stud.num;
        name = stud.name;
        sex = stud.sex;
    }
    void display() {
        cout << "Teacher's num: " << num << endl;
        cout << "Teacher's name: " << name << endl;
        cout << "Teacher's sex: " << sex << endl;
    }
};

int main() {
    Student stud(1001, "Tom", 'M');
    Teacher teach(stud);
    teach.display();
    return 0;
}

