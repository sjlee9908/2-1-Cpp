#include <iostream>
using namespace std;

template <class T>
T biggest(T arr[], int size) {
	T big=arr[0];
	for (int i = 1; i < size; i++) {
		if (big < arr[i]) big = arr[i];
	}
	return big;
}


int main() {
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;
}