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

	cout << "�̸��� ��ȭ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		cin >> name >> tel;
		(persons + i)->set(name, tel);
	}

	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++) {
		cout << persons[i].getName() << " ";
	}
	cout << endl;

	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> name;

	for (int i = 0; i < 3; i++) {
		if (name == persons[i].getName()) {
			cout << "��ȭ ��ȣ�� " << persons[i].getTel();
			break;
		}
		else {
			cout << "��ϵ��� ���� �̸��Դϴ�";
			break;
		};
	}
	

}