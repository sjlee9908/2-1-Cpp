#include <iostream>
using namespace std;

class Board {
	static int top;
	static string s[100];
public:
	static void add(string s1);
	static void print();
};

int Board::top = 0;
string Board::s[100] = { "NoStirng", };

void Board::add(string s1)
{
	s[top] = s1;
	top++;
}

void Board::print()
{
	cout << "************* �Խ����Դϴ�. *************" << endl;
	for (int i = 0; i < top; i++) cout << i << ": "<< s[i] << endl;
	cout << endl;
}


int main() {
	Board::add("�߰����� �������� ���������Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();

}
