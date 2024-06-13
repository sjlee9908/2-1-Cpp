#include <iostream>
#include <cstring>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}
	Dept(const Dept& dept);
	~Dept();
	int getSize() { return size; }
	void read();
	bool isOver60(int index);
};



Dept::~Dept() {
	delete[] scores;
}

void Dept::read() {
	cout << "10�� ���� �Է�>> ";
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {
	return scores[index] > 60;
}

int countPass(Dept& dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;
	}
	return count;
}

int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60�� �̻��� " << n << "��";
}

//(2). countPass�� ����� ��, �Ű����� ��ü�� �����Ǹ鼭 ���� �����ڰ� ȣ��ȴ�. ���� ����� ���� scores�� �޸𸮸� �����ϰ� �ǰ� �Ҹ��ڸ� ������ �� ��������� �߻��Ѵ�