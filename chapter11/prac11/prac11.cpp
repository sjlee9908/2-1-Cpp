#include <iostream>
using namespace std;

istream& pos(istream& is) {
	cout << "��ġ��? ";
	return is;
}

int main() {
	int x, y;
	cin >> pos >> x;
	cin >> pos >> y;
	cout << x << ',' << y << endl;
}