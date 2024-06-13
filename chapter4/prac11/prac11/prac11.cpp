#include <iostream>
using namespace std;


class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { size -= 1; }
	int getSize() { return size; }
};



class CoffeeVendingMachine {
	Container tong[3];
	void fill() { tong[0].fill(); tong[1].fill(); tong[2].fill();}
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};

void CoffeeVendingMachine::selectEspresso() { 
	if (tong[0].getSize() > 1 && tong[1].getSize() > 1) {
		cout << "에스프레소 드세요" << endl;
		tong[0].consume();
		tong[1].consume();
	}
	else cout << "원료가 부족합니다" << endl;
}
void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() > 1 && tong[1].getSize() > 2) {
		cout << "아메리카노 드세요" << endl;
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
	}
	else cout << "원료가 부족합니다" << endl;
}
void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() > 1 && tong[1].getSize() > 2 && tong[2].getSize() > 1) {
		cout << "설탕커피 드세요" << endl;
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
	}
	else cout << "원료가 부족합니다" << endl;
}


void CoffeeVendingMachine::show()
{
	cout << "커피 " << tong[0].getSize();
	cout << ", ";
	cout << "물 " << tong[1].getSize();
	cout << ", ";
	cout << "설탕 " << tong[2].getSize();
	cout << endl;
}

void CoffeeVendingMachine::run()
{
	int select;
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	while (1) {
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>" << endl;
		cin >> select;

		if (select == 1) selectEspresso();
		if (select == 2) selectAmericano();
		if (select == 3) selectSugarCoffee();
		if (select == 4) show();
		if (select == 5) fill();
	}
}

int main()
{
	CoffeeVendingMachine cvm1;
	cvm1.run();
	
}