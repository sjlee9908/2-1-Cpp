#include <iostream>
using namespace std;

int getExp(int base, int exp) { //음수가 넘어오는 상황에 대처하지 않음
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base;
	return value;
}

int main() {
	int v = getExp(2, 3);
	cout << "2의 3승은 " << v << "입니다." << endl;
	int e = getExp(2, -3);
	cout << "2의 -3승은 " << e << "입니다." << endl; //1이 아니라 1/8
}