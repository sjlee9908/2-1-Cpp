#include <iostream>
using namespace std;

int* concat(int a[], int sizea, int b[], int sizeb) {
	int error_code;
	if (sizea <= 0 || sizeb <= 0) { error_code = 1; throw error_code; }
	if (a == NULL || b == NULL) { error_code = 2; throw error_code; }

	int* res = new int[sizea+sizeb];
	for (int i = 0; i < sizea; i++) {
		res[i] = a[i];
	}
	for (int i = sizea; i < sizea+sizeb; i++) {
		res[i] = b[i-sizea];
	}
	return res;
}

int main() {
	int* x = NULL;
	int y[] = { 10,20,30,40 };
	try {
		int* p = concat(x, 5, y, 4);
		for (int n = 0; n < 9; n++) cout << p[n] << ' ';
		cout << endl;
		delete[] p;
	}
	catch (int failcode) {
		cout << "오류 코드 : " << failcode << endl;
	}
}