#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char name[10], dept[20];
	int sid;

	cout << "�̸�>>";
	cin >> name;
	cout << "�й�(���ڷ�)>>";
	cin >> sid;
	cout << "�а�>>";
	cin >> dept;

	ofstream fout("c:\\temp\\student.txt");	// ���ڿ��� \���ڸ� ����Ϸ��� �ΰ��� \\�� �ʿ���
	if (!fout) {
		cout << "c:\\temp\\student.txt ������ �� �� ����";
		return 0;
	}
	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;
	fout.close();
}