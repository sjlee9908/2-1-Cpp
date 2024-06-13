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
	friend void operator>>(Matrix m, int x[4]);
	friend void operator<<(Matrix& m, int y[4]);
};

void operator>>(Matrix m, int x[4]) {
	x[0] = m.a;
	x[1] = m.b;
	x[2] = m.c;
	x[3] = m.d;
}

void operator<<(Matrix& m, int y[4]) {
	m.a = y[0];
	m.b = y[1];
	m.c = y[2];
	m.d = y[3];
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


