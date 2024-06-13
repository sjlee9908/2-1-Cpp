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
			cout << "0~9 ������ ���� �Է� >> ";
			a = get();
			cout << "0~9 ������ ���� �Է� >> ";
			b = get();
			cout << a << "x" << b << "=" << a * b << endl;
		}
		catch (const char* s) {
			cout << s << "���� �߻�, ����� �� ����" << endl;
		}
	}
}