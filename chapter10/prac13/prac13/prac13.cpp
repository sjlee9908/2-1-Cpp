#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	cout << "***** 점수 관리 프로그램 HIGH SCORE을 시작합니다 *****" << endl;
	int choice;
	string name;
	int score;
	map<string, int> m;

	while (1) {
		cout << "입력: 1, 조회: 2, 종료:3 >> ";
		cin >> choice;

		if (choice == 1) {
			cout << "이름과 점수>> ";
			cin >> name >> score;
			m[name] = score;
		}
		else if (choice == 2) {
			cout << "이름>> " ;
			cin >> name;
			if (m[name] == 0) cout << name << "이란 사람은 존재하지 않음" << endl;
			else cout << name << "의 점수는 " << m[name] << endl;
		}
		else if (choice == 3) break;
	}
	cout << "프로그램을 종료합니다...";
}