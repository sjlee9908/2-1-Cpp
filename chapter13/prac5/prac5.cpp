#include <iostream>
using namespace std;

int main() {
	int n;
	while (true) {
		try {
			cout << "����Է� >> ";
			cin >> n;
			if (n < 0 || n > 9) throw n;
			if (cin.fail()) throw "�Է¿����� �߻��Ͽ� �� �̻� �Էµ��� �ʽ��ϴ�. ���α׷��� �����մϴ�.";
			for (int i = 1; i <= 9; i++) cout << n << 'x' << i << '=' << n * i << ' ';
			cout << endl;
		}
		catch (int n) { cout << "�߸��� �Է��Դϴ�. 1~9������ ������ �Է��ϼ���" << endl; }
		catch (const char* n) {
			cout << n << endl;
			return 0;
		}
	}
}