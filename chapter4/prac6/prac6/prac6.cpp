#include <iostream>
#include <string>
using namespace std;

int main()
{
	srand((unsigned)time(0));

	string s;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;


	while (1) {
		cout << ">>";
		getline(cin, s, '\n');
		if (s == "exit") break;

		int len = s.length();

		for (len--; len >= 0; len--) {
			cout << s[len];
		}
		cout << endl;
	}

}