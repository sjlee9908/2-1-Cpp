#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini", ios::binary|ios::in);
	char s[20];
	int count = 0;

	while (!fin.eof()) {
		fin.read(s, 20);
		int n = fin.gcount();
		count += n;
	}
	cout << count;
}