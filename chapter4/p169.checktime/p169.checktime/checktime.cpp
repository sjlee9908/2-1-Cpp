#include <iostream>
using namespace std;

class Sample {
	int a;
public:
	Sample() { a = 100; cout << a << ' '; }
	Sample(int x) { a = x; cout << a << ' '; }
	Sample(int x, int y) { a = x * y; cout << a << ' '; }
	int get() { return a; }
};

int main() {
	Sample arr2D[2][2] = { {Sample(2,3),Sample(2,4)} ,{Sample(5),Sample()} };

	int sum = 0;
	for (int i = 0; i < 2; i++)
		sum += (*arr2D+i)->get();	//객체 다차원 배열의 이름으로 포인터 연산을 할때 *을 붙여야 가능하다
									//왜냐면 객체 다차원 배열의 이름은 내부 배열의 이름(포인터)을 가리키기 때문이다
									//내부 배열 자체가 객체의 포인터이기 때문에 연산이 되지않는다
									//만약 *를 붙인다면 다차원 배열이 가리키는 원소 배열을 받으므로
									//원소 배열에서 포인터 연산이 가능해진다
									//즉 원소배열의 원소 객체를 가리키게 된다
	cout << endl << sum;

}