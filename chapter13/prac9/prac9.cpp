#include <iostream>
using namespace std;

extern "C" int get();

int main() {
	int a = get();
	int b = get();
	cout << "���� " << a * b << "�Դϴ�.";
}