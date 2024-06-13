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
	friend Matrix& operator+(Matrix n, Matrix m);
	friend Matrix& operator+=(Matrix& n, Matrix m);
	friend bool operator==(Matrix n, Matrix m);
};

Matrix& operator+(Matrix n, Matrix m)
{
	Matrix tmp;

	tmp.a = n.a + m.a;
	tmp.b = n.b + m.b;
	tmp.c = n.c + m.c;
	tmp.d = n.d + m.d;

	return tmp;
}

Matrix& operator+=(Matrix& n, Matrix m)
{

	n.a += m.a;
	n.b += m.b;
	n.c += m.c;
	n.d += m.d;

	return n;
}

bool operator==(Matrix n, Matrix m) {
	if (n.a == m.a && n.b == m.b && n.c == m.c && n.d == m.d)
		return true;
	else
		return false;

}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;

}


