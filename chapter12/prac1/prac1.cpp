#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char s[50];
	ifstream fin("C:\\temp\\test.txt");
	while (fin.getline(s, 50)) {
		cout << s << endl;
	}
}