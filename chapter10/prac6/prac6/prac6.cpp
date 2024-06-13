#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	retSize = sizeSrc;
	for (int i = 0; i < sizeSrc; i++) {
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				retSize--;
			}
		}
	}

	T* arr = new T[retSize];
	bool centi=true;
	int index = 0;

	for (int i = 0; i < sizeSrc; i++) {
		centi = true;
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				centi = false;
			}
		}
		if (centi) {
			arr[index] = src[i];
			index++;

		}
	}


	return arr;
}

int main() {
	int a[] = { 0,1,1,2,3,4,5,6,7,8,9,10 };
	int b[] = { 1,3,5,7,9 };
	int size;

	int* arr = remove(a, 12, b, 5, size);

	for (int i = 0; i < size; i++) {
		cout << arr[i] <<" ";
	}
	delete[] arr;
	
}