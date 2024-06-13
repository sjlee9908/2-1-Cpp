#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Nation {
public:
	string nation;
	string capital;
	Nation(string n, string c) { nation = n; capital = c; }

};

void choice_1(vector<Nation>& v) {
	string n;
	string c;
	cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
	cout << "나라와 수도를 입력하세요(no no이면 입력 끝)" << endl;
	while (1) {
		int centi = 0;
		cout << v.size()+1 << ">>";
		cin >> n >> c;
		if (n == "no" && c == "no") break;
		for (int i = 0; i < v.size(); i++) {
			if (v[i].nation == n) {
				cout << "already exists" << endl;
				centi = 1;
				break;
			}
		}
		if (centi != 1) {
			Nation nat(n, c);
			v.push_back(nat);
		}
	}
}

bool choice_2(vector<Nation>& v) {
	string c;
	int index = 0;
	while (1) {
		index = rand() % v.size();
		cout << v[index].nation << "의 수도는?";
		cin >> c;
		if (v[index].capital == c) cout << "Correct !!" << endl;
		else if (c == "exit") return false;
		else cout << "NO !!" << endl;
	}
}




int main() {
	vector<Nation> v;
	int choice;
	srand((unsigned int)time(NULL));

	Nation n1("독일", "베를린");
	v.push_back(n1);
	Nation n2("일본", "도쿄");
	v.push_back(n2);
	Nation n3("한국", "서울");
	v.push_back(n3);
	Nation n4("미국", "와싱턴");
	v.push_back(n4);
	Nation n5("중국", "베이징");
	v.push_back(n5);
	Nation n6("인도", "뉴델리");
	v.push_back(n6);
	Nation n7("네팔", "카트만두");
	v.push_back(n7);
	Nation n8("타이완", "타이베이");
	v.push_back(n8);
	Nation n9("프랑스", "파리");
	v.push_back(n9);


	cout << "***** 나라의 수도 맞추기 게임을 시작합니다 *****" << endl;
	
	while (1) {
		cout << "정보입력: 1, 퀴즈: 2, 종료: 3>>";
		cin >> choice;
		if (choice == 1) choice_1(v);
		else if (choice == 2) choice_2(v);
		else if (choice == 3) return 0;

	}


}