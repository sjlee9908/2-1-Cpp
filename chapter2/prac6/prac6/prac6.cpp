#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1;
	string s2;

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	getline(cin, s1);
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	getline(cin, s2);
	
	if (s1 == s2) cout << "�����ϴ�";
	else cout << "���� �ʽ��ϴ�";
}