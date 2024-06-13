#include <iostream>
using namespace std;

int main() {
	char eng[30];
	char kor[30];
	while (true) {
		cin.get(eng, 30, ';');
		if (cin.eof()) break;
		cin.ignore(1);
		cin.get(kor, 30);
		cin.ignore(1);
		cout << eng << endl;
	}
}