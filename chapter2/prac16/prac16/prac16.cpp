#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	char s1[10001];
	int alp[26] = {0,};
	int count = 0;
	cout << "영문텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	cin.getline(s1, 10001, ';');

	for (int i = 0; i < strlen(s1); i++) {
		if (isalpha(s1[i]) != 0) count++;
		s1[i] = tolower(s1[i]);

		alp[s1[i] - 97]++;
	}
	cout << "총 알파벳 수 " << count <<'\n' << endl;

	for (int i = 0; i < 26; i++) {
		char ch(97 + i);
		cout << ch << " (" << alp[i] << ")" << '\t' << " : ";

		for (int j = 0; j < alp[i]; j++) {
			cout << '*';
		}
		cout << "\n";
	}

	
}