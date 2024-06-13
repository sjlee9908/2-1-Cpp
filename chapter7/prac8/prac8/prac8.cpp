#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << "ÀÎ ¿ø" << endl; }
	friend Circle& operator++(Circle& c, int n);
	friend Circle& operator++(Circle& c);
};

Circle& operator++(Circle& c, int n)
{
	Circle tmp(c.radius);
	c.radius++;
	return tmp;
}

Circle& operator++(Circle& c)
{
	++c.radius;
	return c;
}



int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}

