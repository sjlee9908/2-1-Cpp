#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string line;
	ifstream fin("..cpp");

	if (!fin) {
		cout << "문제발생";
	}

	while (!fin.eof()) {
		getline(fin, line);
		cout << line.substr(0, line.find("//")) << endl;
	}					

}