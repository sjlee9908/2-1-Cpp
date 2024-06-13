#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get()로 <Enter>키까지 입력받고 출력합니다>>";
	int ch;		//EOF는 -1, EOF와 비교를 위해 int로 선언
	while ((ch = cin.get()) != EOF) {
		cout.put(ch);
		if (ch == '\n') break;
	}
}

void get2() {
	cout << "cin.get(char&)로 <Enter>키까지 입력받고 출력합니다>>";
	char ch;
	while (true) {
		cin.get(ch);
		if (cin.eof()) break;
		cout.put(ch);
		if (ch == '\n') break;
	}
}

int main() {
	get1();
	get2();
}