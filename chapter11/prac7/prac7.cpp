#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main() {
	char ch;
	cout << setw(8) << left << "dec" << setw(8) << left << "hexa" << setw(8) << left << "char";
	cout << setw(8) << left << "dec" << setw(8) << left << "hexa" << setw(8) << left << "char";
	cout << setw(8) << left << "dec" << setw(8) << left << "hexa" << setw(8) << left << "char";
	cout << setw(8) << left << "dec" << setw(8) << left << "hexa" << setw(8) << left << "char" << endl;
	cout << setw(8) << left << "---" << setw(8) << left << "----" << setw(8) << left << "----";
	cout << setw(8) << left << "---" << setw(8) << left << "----" << setw(8) << left << "----";
	cout << setw(8) << left << "---" << setw(8) << left << "----" << setw(8) << left << "----";
	cout << setw(8) << left << "---" << setw(8) << left << "----" << setw(8) << left << "----" << endl;

	for (int i = 0; i < 128; i+=4) {
		for (int j = i; j < i + 4; j++) {
			if (isprint(i)) ch = j;
			else ch = '.';
			cout << setw(8) << left << dec << j << setw(8) << left << hex << j << setw(8) << left << ch;
		}
		cout << endl;

	}
}