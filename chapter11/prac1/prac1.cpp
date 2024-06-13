#include <iostream>
using namespace std;

int main() {
	char ch;
	int a = 0;
	while ((ch = cin.get()) != '\n') {
		if (ch == 'a') a++;
	}
	cout << a;
}