#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
	string tel;
public:
	Person() { name = "noName"; tel = "noTel"; };
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) { this->name = name; this->tel = tel; }
};




int main()
{
	Person persons[3];
	string name, tel;

	cout << "이름과 전화번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">> ";
		cin >> name >> tel;
		(persons + i)->set(name, tel);
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << persons[i].getName() << " ";
	}
	cout << endl;

	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> name;

	for (int i = 0; i < 3; i++) {
		if (name == persons[i].getName()) {
			cout << "전화 번호는 " << persons[i].getTel();
			break;
		}
		else {
			cout << "등록되지 않은 이름입니다";
			break;
		};
	}
	

}