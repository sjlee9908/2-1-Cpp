#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cout << "***** 암호 관리 프로그램 WHO을 시작합니다 *****" << endl;
	int choice;
	string name;
	string pw;
	map<string, string> m;

	while (1) {
		cout << "삽입: 1, 검사: 2, 종료:3 >> ";
		cin >> choice;

		if (choice == 1) {
			cout << "이름 암호>> ";
			cin >> name >> pw;
			m[name] = pw;
		}
		else if (choice == 2) {
			cout << "이름?";
			cin >> name;
			while (1) {
			if (m[name] == "") { cout << name << "이란 유저는 없습니다." << endl;  break; }
				cout << "암호? ";
				cin >> pw;
				if (m[name] == pw) { cout << "통과!!" << endl; break; }
				else cout << "실패~~" << endl;
			}
		}
		else if (choice == 3) break;
	}
	cout << "프로그램을 종료합니다...";
}