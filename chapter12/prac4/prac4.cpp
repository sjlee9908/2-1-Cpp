#include <iostream>
#include <fstream>
#include <locale>
using namespace std;

int main() {
	char ch;
	ifstream fin("c:\\windows\\system.ini");
	ofstream fout("c:\\temp\\system.txt");

	while ((ch = fin.get()) != EOF) {
		ch = (char)toupper(ch);
		fout.put(ch);
	}
}