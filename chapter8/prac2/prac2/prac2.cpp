#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int r=0, string name="NoName") : Circle(r) {
		this->name = name;
	}
	void setNamedCircle(int r, string name){
		this->name = name;
		setRadius(r);
	}
	void show() { cout << "�������� " << getRadius() << "�� " << name; }
	string getName() { return name; }
};

int main() {
	NamedCircle pizza[5];
	int r;
	int big_r=0;
	int index = 0;
	string name;

	
	
	cout << "5 ���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	for (int i = 1; i < 6; i++) {
		cout << i << ">>";
		cin >> r >> name;
		pizza[i-1].setNamedCircle(r, name);
		if (big_r < r) {
			big_r = r;
			index = i-1;
		}
	}

	cout << "���� ������ ū ���ڴ� " << pizza[index].getName() << "�Դϴ�" << endl;

}