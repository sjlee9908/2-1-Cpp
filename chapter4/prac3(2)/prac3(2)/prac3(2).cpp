#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	int index = 0;

	cout << "���ڿ� �Է�>>";
	getline(cin, s, '\n');

	while (1) {
		if (s.find('a', index) == -1) break;
		else {
			index = s.find('a', index)+1;
			count++;
		}
	}

	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";
}