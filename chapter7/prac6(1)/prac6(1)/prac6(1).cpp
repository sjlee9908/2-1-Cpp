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
	Matrix& operator+(Matrix m);
	Matrix& operator+=(Matrix m);
	bool operator==(Matrix m);
};

Matrix& Matrix::operator+(Matrix m)
{
	Matrix tmp;
	
	tmp.a = a + m.a;
	tmp.b = b + m.b;
	tmp.c = c + m.c;
	tmp.d = d + m.d;

	return tmp;
}

Matrix& Matrix::operator+=(Matrix m)
{
	a += m.a;
	b += m.b;
	c += m.c;
	d += m.d;

	return *this;
}

bool Matrix::operator==(Matrix m) {
	return (a == m.a && b == m.b && c == m.c && d == m.d);

}

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;


}


