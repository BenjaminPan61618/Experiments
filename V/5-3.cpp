#include <iostream>
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    double getReal() const { return real; }
    double getImag() const { return imag; }
    friend Complex operator + (const Complex &a1, const Complex &a2) ;
};


Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.getReal() + c2.getReal(), c1.getImag() + c2.getImag());
}

int main() {
	float r1,r2,i1,i2;
	char judge;
	std::cout<<"Input Real #1:";
	std::cin>>r1;
	std::cin.ignore();
	std::cout<<"Is it a complex?(y/n):";
	judge=std::cin.get();
	if (judge=='y' || judge=='Y'){
	std::cout<<"Input Imaginary #1:";
	std::cin>>i1;
	}
	std::cout<<"Input Real #2:";
	std::cin>>r2;
	std::cin.ignore();
	std::cout<<"Is it a complex?(y/n):";
	judge=std::cin.get();
	if (judge=='y' || judge=='Y'){
std::cout<<"Input Imaginary #2:";
	std::cin>>i2;
	}
	
    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex c3 = c1 + c2;
    std::cout << "Sum = " << c3.getReal() << " + " << c3.getImag() << "i" << std::endl;
    return 0;
}
