#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";
	ifstream fin(file);
	if (!fin) {
		cout << file << "���� ����";
		return 0;
	}
	int count = 0;
	int c;
	while ((c = fin.get()) != EOF) {
		cout << (char)c;
		count++;
	}
	cout << "���� ����Ʈ ���� " << count << endl;
	fin.close();
}