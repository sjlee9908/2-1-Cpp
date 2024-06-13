#include <iostream>
using namespace std;

int main() {
	char ch;
	int a=0;
	while (true) {
		cin.get(ch);
		if (ch == ' ') a++;
		else if (ch == '\n') break;
	}
	cout << a;
}