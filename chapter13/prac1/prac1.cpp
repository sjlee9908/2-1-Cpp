#include <iostream>
using namespace std;

int sum(int a, int b) {
	if (a > b) throw "�߸��� �Է�";
	if (a<0 || b<0) throw "���� ó�� �ȵ�";
	int res = 0;

	for (; a <= b; a++) {
		res += a;
	}
	return res;
}


int main() {
	try {
		cout << sum(2, 5) << endl;
		cout << sum(-1, 5) << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}
}