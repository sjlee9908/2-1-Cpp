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
	cout << "************* 게시판입니다. *************" << endl;
	for (int i = 0; i < top; i++) cout << i << ": "<< s[i] << endl;
	cout << endl;
}


int main() {
	Board::add("중간고사는 감독없는 자율시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();

}
