#include <iostream>
using namespace std;

class Teacher {
public:
    Teacher(int num, string name, char sex) : num(num), name(name), sex(sex) {}
    void print() {
        cout << "num: " << num << endl;
        cout << "name: " << name << endl;
        cout << "sex: " << sex << endl;
    }
private:
    int num;
    string name;
    char sex;
};

class BirthDate {
public:
    BirthDate(int year, int month, int day) : year(year), month(month), day(day) {}
    void print() {
        cout << "birthday: " <<month<<"/"<<day<<"/"<< year << endl;
    }
    void setYear(int year) { this->year = year; }
    void setMonth(int month) { this->month = month; }
    void setDay(int day) { this->day = day; }
private:
    int year;
    int month;
    int day;
};

class Professor : public Teacher {
public:
    Professor(int num, string name, char sex, int year, int month, int day)
        : Teacher(num, name, sex), birthday(year, month, day) {}
    void print() {
        Teacher::print();
        birthday.print();
    }
    void setBirthday(int year, int month, int day) {
        birthday.setYear(year);
        birthday.setMonth(month);
        birthday.setDay(day);
    }
private:
    BirthDate birthday;
};

int main() {
    Professor prof1(3012, "Zhang", 'f', 1949, 10, 1);
    cout<<"original data:"<<endl;
    
    prof1.print();
    
    prof1.setBirthday(1950, 6, 1);
    
    cout << endl;
     cout<<"new data:"<<endl;
    prof1.print();
    
    return 0;
}
