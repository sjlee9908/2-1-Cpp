#include <iostream>
#include <string>
using namespace std;

class Printer {
protected:
	string model;
	string manu;
	int printedCount;
	int availableCount;
	virtual void show() = 0;
	virtual void print(int n) = 0;
	
};

class InkJetPrinter : public Printer {
	int availableInk;
public:
	InkJetPrinter(string model, string manu, int availableCount, int availableInk);
	void printInkJet(int pages);
	void show() { cout << model << " ," << manu << " ,���� ���� " << availableCount << ", ���� ��ũ " << availableInk << endl; }
	void print(int n) { printedCount += n; availableCount -= n; };
};
InkJetPrinter::InkJetPrinter(string model, string manu, int availableCount, int availableInk)
{
	this->model = model;
	this->manu = manu;
	this->availableCount = availableCount;
	this->availableInk = availableInk;
}
void InkJetPrinter::printInkJet(int pages)
{
	if (pages <= availableCount && pages <= availableInk) {
		cout << "����Ʈ�Ͽ����ϴ�." << endl;
		print(pages);
		availableInk -= pages;
	}
	else {
		cout << "���� �Ǵ� ��ũ�� ������ ����Ʈ �� �� �����ϴ�" << endl;
	}
}


class LaserPrinter : public Printer {
	int availableToner;
public:
	LaserPrinter(string model, string manu, int availableCount, int availableToner);
	void printLaser(int pages);
	void show() { cout << model << " ," << manu << " ,���� ���� " << availableCount << ", ���� ��� " << availableToner << endl; }
	void print(int n) { printedCount += n; availableCount -= n; };
};
LaserPrinter::LaserPrinter(string model, string manu, int availableCount, int availableToner)
{
	this->model = model;
	this->manu = manu;
	this->availableCount = availableCount;
	this->availableToner = availableToner;
}
void LaserPrinter::printLaser(int pages)
{
	if (pages <= availableCount && pages <= availableToner) {
		cout << "����Ʈ�Ͽ����ϴ�." << endl;
		print(pages);
		availableToner -= pages;
	}
	else {
		cout << "���� �Ǵ� ��ʰ� ������ ����Ʈ �� �� �����ϴ�" << endl;
	}
}


int main() {
	InkJetPrinter* inkprinterPtr = new InkJetPrinter("OfficeJet V40", "HP", 5, 10);
	LaserPrinter* laserprinterPtr = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
	char choice;
	int select;
	int pages;

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	inkprinterPtr->show();
	laserprinterPtr->show();

	while (1) {
		cout << endl << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> select >> pages;
		if (select == 1) inkprinterPtr->printInkJet(pages);
		else laserprinterPtr->printLaser(pages);

		inkprinterPtr->show();
		laserprinterPtr->show();

		cout << "��� ����Ʈ �Ͻðڽ��ϱ�?(y/n)>>";
		cin >> choice;
		if (choice == 'n') { break; }
	}
	delete inkprinterPtr;
	delete laserprinterPtr;

}

