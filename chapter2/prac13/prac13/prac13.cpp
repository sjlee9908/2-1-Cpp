#include <iostream>
using namespace std;

int main() {
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";
	int choice, num;
	while (1) {
		cout << "«��:1, ¥��:2, ������:3 ����:4>>";
		cin >> choice;
		if (choice == 4) {
			cout << "���� ������ �������ϴ�.";
			return 0;
		}

		else if (choice == 3) {
			cout << "���κ�?";
			cin >> num;
			cout << "������ " << num << "�κ� ���Խ��ϴ�\n";
		}

		else if (choice == 2) {
			cout << "���κ�?";
			cin >> num;
			cout << "¥�� " << num << "�κ� ���Խ��ϴ�\n";
		}

		else if (choice == 1) {
			cout << "���κ�?";
			cin >> num;
			cout << "«�� " << num << "�κ� ���Խ��ϴ�\n";
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���!!\n";
		}
	}

}