#include <iostream>
#include <string>
using namespace std;

int main() {
	int price, num, sales = 0;
	string coffee;

	while (sales <= 20000) {
		cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n�ֹ�>>";
		cin >> coffee >> num;

		if (coffee == "����������") {
			sales += 2000 * num;
			cout << 2000 * num << "���Դϴ�. ���ְ� �弼��\n";
		}

		else if (coffee == "�Ƹ޸�ī��") {
			sales += 2300 * num;
			cout << 2300 * num << "���Դϴ�. ���ְ� �弼��\n";
		}

		else if (coffee == "īǪġ��") {
			sales += 2500 * num;
			cout << 2500 * num << "���Դϴ�. ���ְ� �弼��\n";
		}
	}
	cout << "���� " << sales << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
}