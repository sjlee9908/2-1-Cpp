#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin1("cpp1.jpg");
	ifstream fin2("cpp2.jpg");

	while (!fin1.eof() || !fin2.eof()) {
		if (fin1.get() != fin2.get()) {
			cout << "���� �ʽ��ϴ�" << endl;
			return 0;
		}
	}
	if (fin1.eof() != fin2.eof()) {
		cout << "���� �ʽ��ϴ�" << endl;
		return 0;
	}
	cout << "�����ϴ�" << endl;
}