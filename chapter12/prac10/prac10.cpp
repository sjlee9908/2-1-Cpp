#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin1("cpp1.jpg");
	ifstream fin2("cpp2.jpg");

	while (!fin1.eof() || !fin2.eof()) {
		if (fin1.get() != fin2.get()) {
			cout << "같지 않습니다" << endl;
			return 0;
		}
	}
	if (fin1.eof() != fin2.eof()) {
		cout << "같지 않습니다" << endl;
		return 0;
	}
	cout << "같습니다" << endl;
}