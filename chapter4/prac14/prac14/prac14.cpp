#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player
{
	string name;
	int a, b, c;
public:
	Player() { name = "noName"; }
	void setName(string n) { name = n; }
	string getName() { return name; }
};

class GamblingGame {
	Player p[2];
	int a, b, c;
	void randNum();
public:
	void init();
	int gameplay();
};

void GamblingGame::init() {
	srand((unsigned)time(0));
	string n;

	cout << "ù��° ���� �̸�>>";
	cin >> n;
	p[0].setName(n);
	cout << "�ι�° ���� �̸�>>";
	cin >> n;
	cin.ignore();
	p[1].setName(n);
}

int GamblingGame::gameplay()
{
	while (1) {
		for (int i = 0; i < 2; i++) {
			cout << p[i].getName() << ":";
			cin.get();
			randNum();
			cout << "\t\t" << a << '\t' << b << '\t' << c << '\t';
			if (a == b && b == c) {
				cout << p[i].getName() << "�� �¸�!!" << endl;
				return 0;
			}
			else {
				cout << "�ƽ�����!" << endl;
			}
		}
	}
}

void GamblingGame::randNum()
{
	a = rand() % 3;
	b = rand() % 3;
	c = rand() % 3;
}

int main()
{
	cout << "***** ���� ������ �����մϴ� *****" << endl;
	GamblingGame gg;
	gg.init();
	gg.gameplay();


}

