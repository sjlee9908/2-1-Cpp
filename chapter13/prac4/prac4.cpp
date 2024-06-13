#include <iostream>
#include <fstream>
using namespace std;

int getFileSize(const char* file) {
	if (file == NULL) throw "예외발생: 파일명이 NULL입니다";
	ifstream fin(file);
	if (!fin) throw "예외발생: 파일을 열 수 없습니다";
	fin.seekg(0, ios::end);
	int length = fin.tellg();
	return length;
}

int main() {
	try {
		int n = getFileSize("c:\\windows\\system.ini");
		cout << "파일크기 = " << n << endl;
		int m = getFileSize(NULL);
		cout << "파일크기 = " << m << endl;
		int i = getFileSize("c:\\windows\\없는파일.txt");
		cout << "파일크기 = " << i << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}
}