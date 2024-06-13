#include <iostream>
using namespace std;

int main() {
	int n;
	while (true) {
		try {
			cout << "양수입력 >> ";
			cin >> n;
			if (n < 0 || n > 9) throw n;
			if (cin.fail()) throw "입력오류가 발생하여 더 이상 입력되지 않습니다. 프로그램을 종료합니다.";
			for (int i = 1; i <= 9; i++) cout << n << 'x' << i << '=' << n * i << ' ';
			cout << endl;
		}
		catch (int n) { cout << "잘못된 입력입니다. 1~9사이의 정수만 입력하세요" << endl; }
		catch (const char* n) {
			cout << n << endl;
			return 0;
		}
	}
}