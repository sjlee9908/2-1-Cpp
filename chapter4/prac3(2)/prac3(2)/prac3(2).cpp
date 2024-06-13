#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	int index = 0;

	cout << "문자열 입력>>";
	getline(cin, s, '\n');

	while (1) {
		if (s.find('a', index) == -1) break;
		else {
			index = s.find('a', index)+1;
			count++;
		}
	}

	cout << "문자 a는 " << count << "개 있습니다.";
}