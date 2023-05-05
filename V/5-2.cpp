#include <iostream>
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    double getReal() const { return real; }
    double getImag() const { return imag; }
    
    Complex operator+(const Complex& c) const {
    return Complex(real + c.real, imag + c.imag);
}

    
    Complex operator-(const Complex& c) const {
    return Complex(real - c.real, imag -c.imag);
}
	Complex operator*(const Complex& c) const {
    double real_part = real * c.real - imag * c.imag;
    double imag_part = real * c.imag + imag * c.real;
    return Complex(real_part, imag_part);
}

Complex operator/(const Complex& c) const {
    double denominator = c.real * c.real + c.imag * c.imag;
    double real_part = (real * c.real + imag * c.imag) / denominator;
    double imag_part = (imag * c.real - real * c.imag) / denominator;
    return Complex(real_part, imag_part);
};
};

int main() {
	float r1,r2,i1,i2;
	std::cout<<"Input Real #1:";
	std::cin>>r1;
	std::cout<<"Input Imaginary #1:";
	std::cin>>i1;
	std::cout<<"Input Real #2:";
	std::cin>>r2;
	std::cout<<"Input Imaginary #2:";
	std::cin>>i2;
    Complex c1(r1, i1);
    Complex c2(r2, i2);
    Complex c3 = c1.operator+(c2);
    Complex c4 = c1.operator-(c2);
    Complex c5 = c1.operator*(c2);
    Complex c6 = c1.operator/(c2);
	std::cout << r1<<"+"<<i1<<"i"<<" + "<<r2<<"+"<<i2<<"i = " << c3.getReal() << "+" << c3.getImag() << "i" << std::endl;
    std::cout << r1<<"+"<<i1<<"i"<<" - "<<r2<<"+"<<i2<<"i = " << c4.getReal() << "+" << c4.getImag() << "i" << std::endl;
    std::cout << r1<<"+"<<i1<<"i"<<" * "<<r2<<"+"<<i2<<"i = " << c5.getReal() << "+" << c5.getImag() << "i" << std::endl;
    std::cout << r1<<"+"<<i1<<"i"<<" / "<<r2<<"+"<<i2<<"i = " << c6.getReal() << "+" << c6.getImag() << "i" << std::endl;
    return 0;
}
