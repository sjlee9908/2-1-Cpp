#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";
	ifstream fin(file);
	if (!fin) {
		cout << file << "열기 오류";
		return 0;
	}
	int count = 0;
	int c;
	while ((c = fin.get()) != EOF) {
		cout << (char)c;
		count++;
	}
	cout << "읽은 바이트 수는 " << count << endl;
	fin.close();
}