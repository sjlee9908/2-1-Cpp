#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class word {
public:
	string eng;
	string kor;
	word(string e, string k) { eng = e; kor = k; }
};

void choice_2(vector<word>& v) {
	cout << "���� ���� �׽�Ʈ�� �����մϴ�. 1~4 �� �ٸ� �Է½� ����" << endl;
	int sel;

	while (1) {
		random_shuffle(v.begin(), v.end());

		string arr[4]={"","","",""};
		arr[0] = v[0].kor;
		arr[1] = v[1].kor;
		arr[2] = v[2].kor;
		arr[3] = v[3].kor;
		random_shuffle(arr, arr + 4);

		cout << v[0].eng << "?" << endl;

		for (int i = 0; i < 4; i++) {
			cout << "(" << i+1 << ")" << arr[i]<<" ";
		}
		cin >> sel;
		if (sel == -1) { cout << endl; break; }
		if (arr[sel-1] == v[0].kor) cout << "Excellent !!" << endl;
		else cout << "No. !!" << endl;
	}
}

void choice_1(vector<word>& v) {
	cout << "���� �ܾ exit�� �Է��ϸ� �Է� ��" << endl;
	string e, k;
	while (1) {
		cout << "���� >>";
		cin >> e;
		
		if (e == "exit") { cout << endl; break; }

		cout << "�ѱ� >>";
		cin >> k;
		word w(e, k);
		v.push_back(w);
	}
}


int main() {
	srand((unsigned)time(0));
	int choice;
	
	vector<word> v;
	word n1("honey", "�ڱ�");
	v.push_back(n1);
	word n2("doll", "����");
	v.push_back(n2);
	word n3("painting", "�׸�");
	v.push_back(n3);
	word n4("stock", "�ֽ�");
	v.push_back(n4);
	word n5("lover", "����");
	v.push_back(n5);
	word n6("photo", "����");
	v.push_back(n6);
	word n7("bear", "��");
	v.push_back(n7);
	
	cout << "***** ���� ���� �׽�Ʈ�� �����մϴ�. *****" << endl;
	while (1) {
		cout << "���� ����: 1, ���� �׽�Ʈ: 2, ���α׷� ����:�� ��Ű >> ";
		cin >> choice;
		if (choice == 1) choice_1(v);
		else if (choice == 2) choice_2(v);
		else break;
	}
}