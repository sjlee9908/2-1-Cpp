#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea()
{
	return 3.14*radius*radius;
}

int main() {
	int count = 0;
	Circle circles[3];

	for (int i = 0; i < 3; i++) {
		int r;
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> r;
		circles[i].setRadius(r);

		if (circles[i].getArea() > 100) count++;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다";
	
}