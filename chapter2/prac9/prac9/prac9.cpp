#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[50];
	char address[999];
	int age;

	cout << "�̸���?";
	cin.getline(name, 50);
	cout << "�ּҴ�?";
	cin.getline(address, 999);
	cout << "���̴�?";
	cin >> age;

	cout << name << ", " << address << ", " << age << "��";

}