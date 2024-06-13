#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << "�� ��" << endl; }
	friend Circle& operator++(Circle& c, int n);
	friend Circle& operator++(Circle& c);
	friend Circle& operator+(int n, Circle& c);
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

Circle& operator+(int n, Circle& c)
{
	Circle tmp;
	tmp.radius = c.radius + n;
	return tmp;
}


int main() {
	Circle a(5), b(4);
	b = 1+a;
	a.show();
	b.show();
}

