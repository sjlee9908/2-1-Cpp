#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[100];
	int len[5];
	cout << "5 ���� �̸��� \';\'�� �����Ͽ� �Է��ϼ���"<< '\n' << ">>";
	int max = 0;
	char lname[100];

	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i+1 << ':' << name<< '\n';
		
		if (max < strlen(name)) {
			max = strlen(name);
			strcpy(lname, name);
		}
	}
	cout << "���� �� �̸��� " << lname;
}