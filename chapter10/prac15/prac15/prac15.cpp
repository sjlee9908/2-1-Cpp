#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius, string name) { this->radius = radius; this->name = name; }
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};



int main() {
	int choice = 0;
	vector<Circle> v;
	cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;

	while (1) {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
		cin >> choice;

		if (choice == 1) {
			string n;
			int r;
			cout << "생성하고 하는 원의 반지름과 이름은 >> ";
			cin >> r >> n;
			Circle c(r, n);
			v.push_back(c);
		}

		else if (choice == 2) {
			string n;
			cout << "삭제하고자 하는 원의 이름은 >>";
			cin >> n;
			for (auto it = v.begin(); it < v.end();) {
				if (it->getName() == n) { it = v.erase(it); continue; }
				it++;
			}
		}

		else if (choice == 3) {
			for (int i = 0; i < v.size(); i++) {
				cout << v[i].getName() << endl;
			}
			cout << endl;
		}
		else break;
	}
}