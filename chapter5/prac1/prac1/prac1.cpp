#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { this->radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
};

void swap(Circle& a, Circle& b) {
	Circle tmp = a;
	a = b;
	b = tmp;
}

int main() {
	Circle donut1(1);
	Circle donut10(10);

	swap(donut1, donut10);

	cout << donut1.getRadius() << endl;
	cout << donut10.getRadius() << endl;
}