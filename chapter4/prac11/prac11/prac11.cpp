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
		cout << "���������� �弼��" << endl;
		tong[0].consume();
		tong[1].consume();
	}
	else cout << "���ᰡ �����մϴ�" << endl;
}
void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() > 1 && tong[1].getSize() > 2) {
		cout << "�Ƹ޸�ī�� �弼��" << endl;
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
	}
	else cout << "���ᰡ �����մϴ�" << endl;
}
void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() > 1 && tong[1].getSize() > 2 && tong[2].getSize() > 1) {
		cout << "����Ŀ�� �弼��" << endl;
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
	}
	else cout << "���ᰡ �����մϴ�" << endl;
}


void CoffeeVendingMachine::show()
{
	cout << "Ŀ�� " << tong[0].getSize();
	cout << ", ";
	cout << "�� " << tong[1].getSize();
	cout << ", ";
	cout << "���� " << tong[2].getSize();
	cout << endl;
}

void CoffeeVendingMachine::run()
{
	int select;
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
	while (1) {
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>>" << endl;
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