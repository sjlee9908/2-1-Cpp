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
		sum += (*arr2D+i)->get();	//��ü ������ �迭�� �̸����� ������ ������ �Ҷ� *�� �ٿ��� �����ϴ�
									//�ֳĸ� ��ü ������ �迭�� �̸��� ���� �迭�� �̸�(������)�� ����Ű�� �����̴�
									//���� �迭 ��ü�� ��ü�� �������̱� ������ ������ �����ʴ´�
									//���� *�� ���δٸ� ������ �迭�� ����Ű�� ���� �迭�� �����Ƿ�
									//���� �迭���� ������ ������ ����������
									//�� ���ҹ迭�� ���� ��ü�� ����Ű�� �ȴ�
	cout << endl << sum;

}