#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

int main() {
	ifstream fin("words.txt");
	vector<string> v;
	string s;
	int count = 0;

	while (!fin.eof()) {
		getline(fin, s);
		v.push_back(s);
	}

	vector<string>::iterator it = v.begin();

	cout << "... words.txt ���� �ε� �Ϸ�" << endl;
	cout << "�˻��� �����մϴ�. �ܾ �Է��� �ּ���" << endl;


	while (s != "exit") {
		cout << "�ܾ�>> ";
		cin >> s;
		int len = s.size();
		count = 0;
		for (it = v.begin(); it < v.end(); it++) {
			if ((*it).substr(0, len) == s) {
				cout << (*it) << endl;
				count = 1;
			}
		}
		if (count == 0) cout << "�߰��� �� ����" << endl;
	}

}