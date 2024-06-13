#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

class ColorPoint : public Point {	//상속선언
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();		
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();		//파생클래스에서 기본클래스멤버 접근
}

int main() {
	Point p;	//기본클래스 객체 생성
	ColorPoint cp;	//파생클래스 객체 생성
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
}