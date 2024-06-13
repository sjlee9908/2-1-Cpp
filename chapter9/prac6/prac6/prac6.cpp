#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class IntStack : public AbstractStack {
	int num[10];
	int index=0;
public:
	bool push(int n) {
		if (index == 10) return false;
		num[index] = n;
		index++;
		return true;
	}
	bool pop(int& n) {
		if (index == 10) index--;
		if (index == -1) return false;
		n = num[index];
		index--;
		return true;
	}
	int size() { return index; }
};

int main() {
	IntStack stack;
	int n;
	
	for (int i = 0; i < 11; i++) { if (!stack.push(i)) { break; } }
	cout << stack.size() << endl;
	for (int i = 0; i < 11; i++) {
		if (stack.pop(n)) { 
			cout << n << " "; 
		}
		else break;
	}
}