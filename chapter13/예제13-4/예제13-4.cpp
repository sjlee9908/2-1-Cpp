#include <iostream>
using namespace std;

int main() {
	int n, sum, average;
	while (true) {
		cout << "���� �Է��ϼ��� >>";
		cin >> sum;
		cout << "�ο����� �Է��ϼ��� >>";
		cin >> n;
		try {
			if (n <= 0) throw n;	//����Ž�� , ���ܹ߻� catch(int x)������� ����
			else average = sum / n;
		}
		catch (int x) {
			cout << "���� �߻�!! " << x << "���� ���� �� ����" << endl;
			average = 0;
			cout << endl;
			continue; //continue�� ������ ��� ���
		}
		cout << "��� = " << average << endl << endl;
	}
}