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
	void show() { cout << model << " ," << manu << " ,남은 종이 " << availableCount << ", 남은 잉크 " << availableInk << endl; }
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
		cout << "프린트하였습니다." << endl;
		print(pages);
		availableInk -= pages;
	}
	else {
		cout << "용지 또는 잉크가 부족해 프린트 할 수 없습니다" << endl;
	}
}


class LaserPrinter : public Printer {
	int availableToner;
public:
	LaserPrinter(string model, string manu, int availableCount, int availableToner);
	void printLaser(int pages);
	void show() { cout << model << " ," << manu << " ,남은 종이 " << availableCount << ", 남은 토너 " << availableToner << endl; }
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
		cout << "프린트하였습니다." << endl;
		print(pages);
		availableToner -= pages;
	}
	else {
		cout << "용지 또는 토너가 부족해 프린트 할 수 없습니다" << endl;
	}
}


int main() {
	InkJetPrinter* inkprinterPtr = new InkJetPrinter("OfficeJet V40", "HP", 5, 10);
	LaserPrinter* laserprinterPtr = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
	char choice;
	int select;
	int pages;

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	inkprinterPtr->show();
	laserprinterPtr->show();

	while (1) {
		cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> select >> pages;
		if (select == 1) inkprinterPtr->printInkJet(pages);
		else laserprinterPtr->printLaser(pages);

		inkprinterPtr->show();
		laserprinterPtr->show();

		cout << "계속 프린트 하시겠습니까?(y/n)>>";
		cin >> choice;
		if (choice == 'n') { break; }
	}
	delete inkprinterPtr;
	delete laserprinterPtr;

}

