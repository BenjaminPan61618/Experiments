
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r, double i) {
        real = r;
        imag = i;
    }
    Complex operator+(double d) {
        return Complex(real + d, imag);
    }
    operator double() {
        return real;
    }
};

int main() {
   float r1,r2,d0;
	std::cout<<"Input Real:";
	std::cin>>r1;
	std::cout<<"Input Imaginary:";
	std::cin>>i1;
	std::cout<<"Input Double:";
	std::cin>>d0;
    Complex c1(r1, i1);
    Complex c2(r2, i2);
    double d1 = c + d;
    cout << "d1 = " << d1 << endl;
    cout << "d1 in complex form: " << d1 << " + 0i" << endl;
    return 0;
}
