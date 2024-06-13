#include <iostream>
using namespace std;

class Comparable {
public:
	virtual bool operator > (Comparable& op2) = 0;
	virtual bool operator < (Comparable& op2) = 0;
	virtual bool operator == (Comparable& op2) = 0;
};


class Circle : public Comparable {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
	bool operator > (Comparable& op2) { 
		Circle* c = (Circle*)&op2;
		return this->radius > c->getRadius();
	}
	bool operator < (Comparable& op2) {
		Circle* c = (Circle*)&op2;
		return this->radius < c->getRadius();
	}
	bool operator == (Comparable& op2) {
		Circle* c = (Circle*)&op2;
		return this->radius == c->getRadius();
	}
};

template <class T>
T bigger(T a, T b) {
	if (a > b) return a;
	else return b;
}

int main() {
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20�� 50�� ū ���� " << c << endl;

	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle�� pizza �� ū ���� �������� " << y.getRadius() << endl;
}
