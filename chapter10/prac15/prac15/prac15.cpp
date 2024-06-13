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
	cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;

	while (1) {
		cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
		cin >> choice;

		if (choice == 1) {
			string n;
			int r;
			cout << "�����ϰ� �ϴ� ���� �������� �̸��� >> ";
			cin >> r >> n;
			Circle c(r, n);
			v.push_back(c);
		}

		else if (choice == 2) {
			string n;
			cout << "�����ϰ��� �ϴ� ���� �̸��� >>";
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