#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char s1[100];

	cout << "문자열 입력>>";
	cin.getline(s1, 100);

	for (int i = 1; i <= strlen(s1); i++) {
		for (int j = 0; j < i; j++) {
			cout << s1[j];
		}
		cout << '\n';
	}

}