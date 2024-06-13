#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack : public BaseArray {
	int index;
public:
	MyStack(int capacity) : BaseArray(capacity) { int index = 0; };
	void push(int n);
	int capacity();
	int length();
	int pop();
};

void MyStack::push(int n)
{
	put(index, n);
	index++;
}

int MyStack::capacity()
{
	return getCapacity();
}

int MyStack::length()
{
	return index;
}

int MyStack::pop()
{
	index--;
	return get(index);
}


int main() {
	MyStack mStack(100);
	int n;

	cout << "큐에 삽입할 5개의 정수를 입력하라>>";

	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);
	}

	cout << "큐의 용량:" << mStack.capacity() << ", 큐의 크기:" << mStack.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";

	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "큐의 현재 크기 : " << mStack.length() << endl;
}


