#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char s1[100];
	while (1) {
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin.getline(s1, 100);

		if (strcmp(s1, "yes") == 0) {
			cout << "종료합니다...";
			return 0;
		}


	}
}