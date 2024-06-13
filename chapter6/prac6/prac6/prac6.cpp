#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size)
{
	int* p = new int[size*2];
	for (int i = 0; i < size; i++) p[i] = s1[i];
	for (int i = 0; i < size; i++) p[size+i] = s2[i];

	return p;
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s2[i] == s1[j]) s1[j] = NULL;
		}
		if (s1[i] != NULL) retSize++;
	}
	if (retSize == 0) return NULL;

	int* p = new int[retSize];
	for (int i = 0; i < size; i++) {
		if (s1[i] != NULL) p[i] = s1[i];
	}

	return p;
}


int main() {
	int x[5];
	int y[5];
	int retSize=0;

	cout << "������ 5 �� �Է��϶�. �迭 x�� �����Ѵ�>>>";
	for (int i = 0; i < 5; i++) cin >> x[i];
	cout << "������ 5 �� �Է��϶�. �迭 y�� �����Ѵ�>>>";
	for (int i = 0; i < 5; i++) cin >> y[i];


	int* p = ArrayUtility2::concat(x, y, 5);
	cout << "��ģ ���� �迭�� ����Ѵ�" << endl;
	for (int i = 0; i < 10; i++) cout << p[i] << ' ';
	cout << endl;

	p = ArrayUtility2::remove(x, y, 5, retSize);
	cout << "��ģ ���� �迭�� ����Ѵ�. ������ " << retSize << endl;
	for (int i = 0; i < retSize; i++) cout << p[i] << ' ';
}
