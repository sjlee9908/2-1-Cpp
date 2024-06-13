#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) { this->name = name; this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager() { delete[] p; }
	void searchByName();
	void searchByArea();
};

CircleManager::CircleManager(int size) {
	p = new Circle[size];
	this->size = size;
	string name;
	int r;

	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> r;
		p[i].setCircle(name, r);
	}

}

void CircleManager::searchByName()
{
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) { cout << name << "�� ������ " << p[i].getArea() << endl; }
	}
}

void CircleManager::searchByArea()
{
	int area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�" << endl;

	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
	}
	cout << endl;
}


int main() 
{
	int n;
	string name;
	double area;

	cout << "���� ���� >> ";
	cin >> n;
	CircleManager cm(n);
	cm.searchByName();
	cm.searchByArea();
}
