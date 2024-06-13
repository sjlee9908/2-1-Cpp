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

	cout << "1부터 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextInt(1, 100)<< ' ';
	cout << endl;

	cout << "알파벳을 랜덤하게 10개 출력합니다" << endl;
	for (int i = 0; i < 10; i++) cout << Random::nextAlphabet()<< ' ';
	cout << endl;

	cout << "랜덤한 실수를 10개 출력합니다" << endl;
	for (int i = 0; i < 5; i++) cout << Random::nextDouble()<< ' ';
	cout << endl;
	for (int i = 0; i < 5; i++) cout << Random::nextDouble()<<' ';
	cout << endl;


}
