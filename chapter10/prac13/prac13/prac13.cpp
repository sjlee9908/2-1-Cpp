#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cout << "***** ���� ���� ���α׷� HIGH SCORE�� �����մϴ� *****" << endl;
	int choice;
	string name;
	int score;
	map<string, int> m;

	while (1) {
		cout << "�Է�: 1, ��ȸ: 2, ����:3 >> ";
		cin >> choice;

		if (choice == 1) {
			cout << "�̸��� ����>> ";
			cin >> name >> score;
			m[name] = score;
		}
		else if (choice == 2) {
			cout << "�̸�>> " ;
			cin >> name;
			if (m[name] == 0) cout << name << "�̶� ����� �������� ����" << endl;
			else cout << name << "�� ������ " << m[name] << endl;
		}
		else if (choice == 3) break;
	}
	cout << "���α׷��� �����մϴ�...";
}