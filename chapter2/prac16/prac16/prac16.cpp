#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	char s1[10001];
	int alp[26] = {0,};
	int count = 0;
	cout << "�����ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
	cin.getline(s1, 10001, ';');

	for (int i = 0; i < strlen(s1); i++) {
		if (isalpha(s1[i]) != 0) count++;
		s1[i] = tolower(s1[i]);

		alp[s1[i] - 97]++;
	}
	cout << "�� ���ĺ� �� " << count <<'\n' << endl;

	for (int i = 0; i < 26; i++) {
		char ch(97 + i);
		cout << ch << " (" << alp[i] << ")" << '\t' << " : ";

		for (int j = 0; j < alp[i]; j++) {
			cout << '*';
		}
		cout << "\n";
	}

	
}