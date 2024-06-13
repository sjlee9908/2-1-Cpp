#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini");
	vector<string> v;
	string s;
	int select_line=1;
	while(!fin.eof()){
		getline(fin, s);
		v.push_back(s);
	}

	vector<string>::iterator it = v.begin();
	cout << "c:\\windows\\system.ini 파일 읽기 완료" << endl;
	cout << "라인번호를 입력하세요" << endl;


	while (select_line >0) {
		cout << ": ";
		cin >> select_line;
		if (select_line > v.size()) continue;
		else {
			cout << *(it + select_line -1) << endl;
		} 
	}
}