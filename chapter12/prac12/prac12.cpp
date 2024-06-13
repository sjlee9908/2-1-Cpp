#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

int main() {
	ifstream fin("words.txt");
	vector<string> v;
	string s="";
	int count = 0;

	while (!fin.eof()) {
		getline(fin, s);
		v.push_back(s);
	}

	vector<string>::iterator it;
	cout << "... words.txt 파일 로딩 완료" << endl;
	cout << "검색을 시작합니다. 단어를 입력해 주세요" << endl;




	while (s != "exit") {
		cout << "단어>> ";
		cin >> s;
		for (it = v.begin(); it < v.end(); it++) {
			if (s.size() != (*it).size()) continue;
			count = 0;

			for (int i = 0; i < s.size(); i++) {
				if (s[i] != (*it)[i]) {
					count += 1;
				}
			}

			if (count == 1) {
				cout << (*it) << endl;
			}
		}
	}


}
