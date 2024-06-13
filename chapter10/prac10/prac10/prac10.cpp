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
	cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
	cout << "����� ������ �Է��ϼ���(no no�̸� �Է� ��)" << endl;
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
		cout << v[index].nation << "�� ������?";
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

	Nation n1("����", "������");
	v.push_back(n1);
	Nation n2("�Ϻ�", "����");
	v.push_back(n2);
	Nation n3("�ѱ�", "����");
	v.push_back(n3);
	Nation n4("�̱�", "�ͽ���");
	v.push_back(n4);
	Nation n5("�߱�", "����¡");
	v.push_back(n5);
	Nation n6("�ε�", "������");
	v.push_back(n6);
	Nation n7("����", "īƮ����");
	v.push_back(n7);
	Nation n8("Ÿ�̿�", "Ÿ�̺���");
	v.push_back(n8);
	Nation n9("������", "�ĸ�");
	v.push_back(n9);


	cout << "***** ������ ���� ���߱� ������ �����մϴ� *****" << endl;
	
	while (1) {
		cout << "�����Է�: 1, ����: 2, ����: 3>>";
		cin >> choice;
		if (choice == 1) choice_1(v);
		else if (choice == 2) choice_2(v);
		else if (choice == 3) return 0;

	}


}