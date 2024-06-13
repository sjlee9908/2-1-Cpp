#include <iostream>
#include <string>
using namespace std;

class Trace {
	static string tag[100];
	static int top;
public:
	static void put(string f, string s);
	static void print(string f = "");
};

int Trace::top = 0;
string Trace::tag[100] = { "-", };

void Trace::put(string f, string s)
{
	tag[top] = f + ":" + s;
	top++;
}

void Trace::print(string f)
{
	if (f == "") {
		cout << "-----" << f << "태그의 Trace정보를 출력합니다. -----" << endl;
		for (int i = 0; i < top; i++) {
			cout << tag[i] << endl;
		}
	}
	else {
		cout << "-----" << "모든" << " Trace정보를 출력합니다. -----" << endl;
		for (int i = 0; i < top; i++) {
			if (tag[i].find(f) != -1) cout << tag[i] << endl;
		}
	}
}


void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요 >>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}


