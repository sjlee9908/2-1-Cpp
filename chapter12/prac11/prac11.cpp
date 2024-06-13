#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

int main() {
	srand((unsigned)time(0));
	ifstream fin("words.txt");
	vector<string> v;
	string s;
	char continue_ch = 'y';
	char input_ch = '0';
	int count = 1;

	while (!fin.eof()) {
		getline(fin, s);
		v.push_back(s);
	}

	vector<string>::iterator it = v.begin();



	cout << "----------------\n지금부터 행맨 게임을 시작합니다\n----------------" << endl;
	while (continue_ch == 'y') {
		int n = rand() % 25143;
		s = *(it + n);
		count = 0;
		int len = s.size();
		int spell1_index = rand() % len;
		int spell2_index = rand() % len;

		while (spell1_index == spell2_index) {
			spell1_index = rand() % len;
			spell2_index = rand() % len;
		}
		if (spell1_index > spell2_index) {
			int tmp = spell2_index;
			spell2_index = spell1_index;
			spell1_index = tmp;
		}
		char spell1 = s[spell1_index];
		char spell2 = s[spell2_index];
		s[spell1_index] = '-';
		s[spell2_index] = '-';

		while (spell1 != s[spell1_index] || spell2 != s[spell2_index]) {
			cout << s << endl;
			cout << ">> ";
			cin >> input_ch;
			count++;

			if (input_ch == spell1) {
				s[spell1_index] = input_ch;
				input_ch = '-';
				continue;
			}

			if (s[spell1_index] == spell1) {
				if (input_ch == spell2) {
					s[spell2_index] = input_ch;
					cout << s << endl;
					count = 0;
				}

			}

			if (count == 5) break;
		}

		if (count == 5) {
			cout << "5번 실패하였습니다" << endl;
			cout << *(it + n) << endl;
		}

		cout << "Next(y/n)";
		cin >> continue_ch;
	}
}