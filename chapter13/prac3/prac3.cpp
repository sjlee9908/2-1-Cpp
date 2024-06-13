#include <iostream>
using namespace std;

int get() throw(const char*) {
	int i;
	cin >> i;
	if (i < 0 || i>9) throw "input fault";
	return i;
}

int main() {
	int a, b;
	while (1) {
		try {
			cout << "0~9 사이의 정수 입력 >> ";
			a = get();
			cout << "0~9 사이의 정수 입력 >> ";
			b = get();
			cout << a << "x" << b << "=" << a * b << endl;
		}
		catch (const char* s) {
			cout << s << "예외 발생, 계산할 수 없음" << endl;
		}
	}
}