#include <iostream>
#include <string>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius=1, string name = "") { this->radius = radius; this->name = name; }
	friend istream& operator>> (istream& is, Circle& c);
	friend ostream& operator<< (ostream& os, Circle& c);
};

istream& operator>> (istream& is, Circle& c) {

	cout << "������ >> ";
	is >> c.radius;
	cout << "�̸� >> ";
	is >> c.name;
	return is;
}

ostream& operator<<(ostream& os, Circle& c)
{
	os << "(������" << c.radius << "�� " << c.name << ")";
	return os;
}

int main() {
	Circle d, w;
	cin >> d >> w;
	cout << d << w << endl;

}