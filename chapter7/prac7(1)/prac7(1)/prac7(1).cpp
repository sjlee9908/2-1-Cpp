#include <iostream>
using namespace std;

class Matrix {
	int a, b, c, d;
public:
	Matrix(int aa = 0, int bb = 0, int cc = 0, int dd = 0) {
		a = aa; b = bb;
		c = cc; d = dd;
	}
	void show() {
		cout << "Matrix = { " << a << ' ' << b << ' ' << c << ' ' << d << ' ' << "}" << endl;
	}
	void operator>>(int x[4]);
	void operator<<(int y[4]);
};

void Matrix::operator>>(int x[4]) {
	x[0] = a;
	x[1] = b;
	x[2] = c;
	x[3] = d;
}

void Matrix::operator<<(int y[4]) {
	a=y[0];
	b=y[1];
	c=y[2];
	d=y[3];
}


int main() {
	Matrix a(4, 3, 2, 1), b;

	int x[4], y[4] = { 1,2,3,4 };

	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;

	b.show();
}


