#include <iostream>
using namespace std;

int main()
{
	int* p = new int[5];
	cout << "���� 5�� �Է�>>";

	double sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		sum += p[i];
	}

	cout << "��� " << sum / 5;

	delete[] p;
}