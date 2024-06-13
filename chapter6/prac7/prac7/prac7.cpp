#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max)
{
	return rand()%max+min;
}

char Random::nextAlphabet()
{
	if (rand() % 2) return rand() % 26 + 65;
	else return rand() % 26 + 97;
}

double Random::nextDouble()
{
	return (double)rand()/100000;
}


int main() {

	Random::seed();

	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextInt(1, 100)<< ' ';
	cout << endl;

	cout << "���ĺ��� �����ϰ� 10�� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextAlphabet()<< ' ';
	cout << endl;

	cout << "������ �Ǽ��� 10�� ����մϴ�" << endl;
	for (int i = 0; i < 5; i++) cout << Random::nextDouble()<< ' ';
	cout << endl;
	for (int i = 0; i < 5; i++) cout << Random::nextDouble()<<' ';
	cout << endl;


}
