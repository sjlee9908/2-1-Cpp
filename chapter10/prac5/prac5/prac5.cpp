#include <iostream>
using namespace std;

template <class T>
T* concat(T* a, int sizea, T* b, int sizeb) {
	T* arr = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++) {
		arr[i] = a[i];
	}
	for (int i = 0; i < sizeb; i++) {
		arr[sizea + i] = b[i];
	}
	return arr;
}

int main() {
	int x[3] = { 1,2,3 };
	int y[3] = { 4, 5, 6 };
	int* int_arr = concat(x, 3, y, 3);
	for (int i = 0; i < 6; i++) {
		cout << int_arr[i] << " ";
	}
	cout << endl;

	double x_d[3] = { 1.1,2.2,3.3 };
	double y_d[3] = { 4.4, 5.5, 6.6 };
	double* double_arr = concat(x_d, 3, y_d, 3);
	for (int i = 0; i < 6; i++) {
		cout << double_arr[i] << " ";
	}
	delete[] int_arr;
	delete[] double_arr;
}