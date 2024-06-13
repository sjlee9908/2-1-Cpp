#include <iostream>
#include <iomanip>
using namespace std;

ostream& star(ostream& os, int s) {
	for (int i = 0; i < s; i++) cout << "*";
	return os;
}

class coffeMachine {
	int coffee;
	int sugar;
	int cream;
	int water;
	int cup;
public:
	coffeMachine() { cout << "-----��ǰ Ŀ�� ���Ǳ��մϴ�.-----" << endl; fill(); }
	void sell_coffee() { 
		cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
		coffee -= 1; cream -= 1; water -= 1; cup -= 1;
		show();
	}
	void sell_sugar_coffee() { 
		cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
		coffee -= 1; sugar -= 1; water -= 1; cup -= 1;
		show();
	}
	void sell_black_coffee() { 
		cout << "���ִ� �� Ŀ�� ���Խ��ϴ�~~" << endl; 
		coffee -= 1; water -= 1; cup -= 1; 
		show();
	}
	void fill() { 
		cout << "��� ���� ä��ϴ�" << endl;
		coffee = 3; sugar = 3; cream = 3; water = 3; cup = 3; 
		show();
	}
	void show() {
		cout << setw(10) << left << "Coffee";  star(cout, coffee) << endl;
		cout << setw(10) << left << "Sugar";  star(cout, sugar) << endl;
		cout << setw(10) << left << "CREAM";  star(cout, cream) << endl;
		cout << setw(10) << left << "Water";  star(cout, water) << endl;
		cout << setw(10) << left << "Cup";  star(cout, cup) << endl << endl;

	}
};

int main() {
	coffeMachine m;
	int sel;
	while (1) {
		cout << endl << "���� Ŀ��:0, ���� Ŀ��:1, �� Ŀ��:2, ä���:3, ����:4>> ";
		cin >> sel;
		if (sel == 0) m.sell_coffee();
		else if (sel == 1) m.sell_sugar_coffee();
		else if (sel == 2) m.sell_black_coffee();
		else if (sel == 3) m.fill();
		else if (sel == 4) break;		
	}
}