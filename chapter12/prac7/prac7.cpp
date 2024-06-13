#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini", ios::binary);//
	ofstream fout("c:\\temp\\system.txt", ios::binary);
	char ch;

	fin.seekg(0, ios::end);
	long len = fin.tellg();

	for (long i = 0; i < len; i++) {
		fin.seekg(len - i - 1, ios::beg);
		ch = fin.get();
		if (ch == 0x0A) ch = 0x0D;
		else if (ch == 0x0D) ch = 0x0A;
		fout.put(ch);
	}

	
}