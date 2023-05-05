#include <iostream>
#include <cmath>
using namespace std;

class Ctriangle {
private:
	float a, b, c, peri, area;
public:
	
	void calculate_peri() {
		peri = a + b + c;
	}
	void calculate_area() {
		area = (1.0 / 4) * sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a));
	}
	int getperi() { return peri; }
	int getarea() { return area; }
	void display() { cout << "Perimeter: " << peri << endl << "Area: " << area; }
	void setabc(int a1, int b1, int c1) { a = a1; b = b1; c = c1; }
};

int main()
{
	float a, b, c;
	do {
		cin >> a >> b >> c;
		if (a + b<c)
			cout << "It's not a triangle!" << endl;
		else {
			Ctriangle Tri1;
			Tri1.setabc(a, b, c);
			Tri1.calculate_peri();
			Tri1.calculate_area();
			Tri1.display();
		}
	} while (a + b >= c);
	return 0;
}