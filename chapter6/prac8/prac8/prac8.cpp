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
		cout << "-----" << f << "�±��� Trace������ ����մϴ�. -----" << endl;
		for (int i = 0; i < top; i++) {
			cout << tag[i] << endl;
		}
	}
	else {
		cout << "-----" << "���" << " Trace������ ����մϴ�. -----" << endl;
		for (int i = 0; i < top; i++) {
			if (tag[i].find(f) != -1) cout << tag[i] << endl;
		}
	}
}


void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ��� >>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է¹޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main() {
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}


