#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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
		int n = rand() % len;
		char a = rand() % 26;

		s[n] = a + 97;

		cout << s << endl;
	}
	
}