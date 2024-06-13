#include <iostream>
using namespace std;

class Matrix {
	int a, b, c, d;
public:
	Matrix(int aa=0, int bb=0, int cc=0, int dd=0){
		a = aa; b = bb;
		c = cc; d = dd;
	}
	void show() {
		cout << "Matrix = { " << a << ' ' << b << ' ' << c << ' ' << d << ' ' << "}" << endl;
	}
	
};

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
}