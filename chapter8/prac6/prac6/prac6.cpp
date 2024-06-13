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

	cout << "ť�� ������ 5���� ������ �Է��϶�>>";

	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);
	}

	cout << "ť�� �뷮:" << mStack.capacity() << ", ť�� ũ��:" << mStack.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";

	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mStack.length() << endl;
}


