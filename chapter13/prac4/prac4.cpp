#include <iostream>
#include <fstream>
using namespace std;

int getFileSize(const char* file) {
	if (file == NULL) throw "���ܹ߻�: ���ϸ��� NULL�Դϴ�";
	ifstream fin(file);
	if (!fin) throw "���ܹ߻�: ������ �� �� �����ϴ�";
	fin.seekg(0, ios::end);
	int length = fin.tellg();
	return length;
}

int main() {
	try {
		int n = getFileSize("c:\\windows\\system.ini");
		cout << "����ũ�� = " << n << endl;
		int m = getFileSize(NULL);
		cout << "����ũ�� = " << m << endl;
		int i = getFileSize("c:\\windows\\��������.txt");
		cout << "����ũ�� = " << i << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}
}