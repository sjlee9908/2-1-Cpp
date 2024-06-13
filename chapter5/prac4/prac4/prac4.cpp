#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) { 
		big = a;
		return true;
	}
	else {
		if (a > b) big = a;
		else big = b;
		return false;
	}

}

int main() {
	int num1, num2, n;
	cin >> num1;
	cin >> num2;

	cout << bigger(num1, num2, n) << " ";
	cout << n;

}