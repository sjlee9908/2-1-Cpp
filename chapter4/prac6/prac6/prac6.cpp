#include <iostream>
#include <string>
using namespace std;

int main()
{
	srand((unsigned)time(0));

	string s;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;


	while (1) {
		cout << ">>";
		getline(cin, s, '\n');
		if (s == "exit") break;

		int len = s.length();

		for (len--; len >= 0; len--) {
			cout << s[len];
		}
		cout << endl;
	}

}