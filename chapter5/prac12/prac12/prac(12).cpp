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

Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	scores = new int[size];
	for (int i = 0; i < size; i++) scores[i] = dept.scores[i];
}

Dept::~Dept() {
	delete[] scores;
}

void Dept::read() {
	cout << "10개 점수 입력>> ";
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {
	return scores[index] > 60;
}

int countPass(Dept dept) {
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
	cout << "60점 이상은 " << n << "명";
}

//(2). countPass가 실행될 때, 매개변수 객체가 생성되면서 복사 생성자가 호출된다. 얕은 복사로 인해 scores의 메모리를 공유하게 되고 소멸자를 실행할 때 실행오류가 발생한다
