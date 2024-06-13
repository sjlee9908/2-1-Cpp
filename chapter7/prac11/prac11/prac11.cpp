#include <iostream>
using namespace std;

class Stack {
	int x[10];
	int top;
public:
	Stack() { top = 0; }
	Stack& operator<<(int n);
	bool operator!();
	void operator>>(int& n);
};


Stack& Stack::operator<<(int n)
{
	x[top] = n;
	top++;
	return *this;
}

bool Stack::operator!()
{
	return top == 0;
}

void Stack::operator>>(int& n)
{	
	top--;
	n = x[top];	
}





int main() {
	Stack stack;

	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}
