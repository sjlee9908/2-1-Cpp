#include <iostream>
#include <string>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += text;}
	void print() { cout << text << endl; }
	Buffer& append(Buffer buf, string s);
};

Buffer& Buffer::append(Buffer buf, string s) {
	text += s;
	return *this;
}

int main()
{
	Buffer buf("Hello");
	Buffer& temp = buf.append(buf, "Guys ");
	temp.print();
	buf.print();
}