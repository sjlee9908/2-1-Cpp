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
	cout << "c:\\windows\\system.ini ���� �б� �Ϸ�" << endl;
	cout << "���ι�ȣ�� �Է��ϼ���" << endl;


	while (select_line >0) {
		cout << ": ";
		cin >> select_line;
		if (select_line > v.size()) continue;
		else {
			cout << *(it + select_line -1) << endl;
		} 
	}
}