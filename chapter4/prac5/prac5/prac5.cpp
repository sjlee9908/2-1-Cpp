#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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
		int n = rand() % len;
		char a = rand() % 26;

		s[n] = a + 97;

		cout << s << endl;
	}
	
}