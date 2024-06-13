#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini");
	ofstream fout("c:\\temp\\system.txt");
	long byte_count = 0;
	char ch;
	int i=0;

	fin.seekg(0, ios::end);
	long length = fin.tellg();
	fin.seekg(0, ios::beg);


	cout << "복사 시작..." << endl;
	while (!fin.eof()) {
		ch=fin.get();
		fout.put(ch);
		byte_count += fin.gcount();
		if (byte_count == length / 10) {
			i += 10;
			cout << "." << length/10 << "B " << i << "%" << endl;
			byte_count = 0;
		}
	}
	cout << "." << length / 10 << "B " << i+10 << "%" << endl;
	cout << length << "B 복사 완료";
}