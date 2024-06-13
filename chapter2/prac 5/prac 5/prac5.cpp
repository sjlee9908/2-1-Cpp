#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char s[100];
	int count = 0;

	cin.getline(s, 100);

	for (int i = 0; i < strlen(s); i++) {
		if ('x' == s[i]) count++;
	}
	cout << "x의 개수는 " << count;
}