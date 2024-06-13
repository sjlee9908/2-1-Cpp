#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main() {
	char ch;
	ifstream fin("c:\\windows\\system.ini");
	while ((ch = fin.get()) != EOF) {
		cout << (char)toupper(ch);
	}
}