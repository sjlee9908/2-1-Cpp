#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char s1[100];
	while (1) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
		cin.getline(s1, 100);

		if (strcmp(s1, "yes") == 0) {
			cout << "�����մϴ�...";
			return 0;
		}


	}
}