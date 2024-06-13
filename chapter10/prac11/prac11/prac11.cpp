#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
public:
	string year;
	string name;
	string author;
	Book(string y, string n, string a) { year = y; name = n; author = a; }
};

int main() {
	vector<Book> v;
	string y;
	string n;
	string a;
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
	while(1){
		cout << "�⵵>>";
		getline(cin, y);
		if (y == "-1") break;

		cout << "å�̸�>>";
		getline(cin, n);

		cout << "����>>";
		getline(cin, a);

		Book b(y, n, a);
		v.push_back(b);
	}
	cout << "�� �԰�� å�� " << v.size() << "���Դϴ�." << endl;;
	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
	getline(cin, a);
	for (int i = 0; i < v.size(); i++) {
		if (v[i].author == a) cout << v[i].year << "�⵵, " << v[i].name << ", " << v[i].author << endl;
	}		
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	cin >> y;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].year == y) cout << v[i].year << "�⵵, " << v[i].name << ", " << v[i].author << endl;
	}

}
