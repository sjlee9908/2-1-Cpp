#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cout << "***** ��ȣ ���� ���α׷� WHO�� �����մϴ� *****" << endl;
	int choice;
	string name;
	string pw;
	map<string, string> m;

	while (1) {
		cout << "����: 1, �˻�: 2, ����:3 >> ";
		cin >> choice;

		if (choice == 1) {
			cout << "�̸� ��ȣ>> ";
			cin >> name >> pw;
			m[name] = pw;
		}
		else if (choice == 2) {
			cout << "�̸�?";
			cin >> name;
			while (1) {
			if (m[name] == "") { cout << name << "�̶� ������ �����ϴ�." << endl;  break; }
				cout << "��ȣ? ";
				cin >> pw;
				if (m[name] == pw) { cout << "���!!" << endl; break; }
				else cout << "����~~" << endl;
			}
		}
		else if (choice == 3) break;
	}
	cout << "���α׷��� �����մϴ�...";
}