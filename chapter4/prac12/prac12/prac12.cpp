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
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> r;
		p[i].setCircle(name, r);
	}

}

void CircleManager::searchByName()
{
	string name;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) { cout << name << "의 면적은 " << p[i].getArea() << endl; }
	}
}

void CircleManager::searchByArea()
{
	int area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다" << endl;

	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
	}
	cout << endl;
}


int main() 
{
	int n;
	string name;
	double area;

	cout << "원의 개수 >> ";
	cin >> n;
	CircleManager cm(n);
	cm.searchByName();
	cm.searchByArea();
}
