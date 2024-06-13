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

class ColorPoint : public Point {	//��Ӽ���
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();		
};

void ColorPoint::showColorPoint() {
	cout << color << ":";
	showPoint();		//�Ļ�Ŭ�������� �⺻Ŭ������� ����
}

int main() {
	Point p;	//�⺻Ŭ���� ��ü ����
	ColorPoint cp;	//�Ļ�Ŭ���� ��ü ����
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
}