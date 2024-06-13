#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;

	cout << "문자열 입력>>";
	getline(cin, s, '\n');

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'a') count++;
	}
	cout << "문자 a는 " << count << "개 있습니다.";
}