#include <iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	void sort();
public:
	SortedArray();
	SortedArray(SortedArray& src);
	SortedArray(int p[], int size);
	~SortedArray();
	SortedArray operator+ (SortedArray& op2);
	SortedArray& operator= (const SortedArray& op2);
	void show();
};

void SortedArray::sort() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			if (p[j] > p[j + 1]) {
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
}

SortedArray::SortedArray()
{
	size = 4;
	p = new int[size];
}

SortedArray::SortedArray(SortedArray& src)
{
	size = src.size;
	p = new int[size];
	memcpy(p, src.p, sizeof(int) * size);
}

SortedArray::SortedArray(int p[], int size)
{
	this->size = size;
	this->p = new int[size];
	memcpy(this->p, p, sizeof(int)*size);
}

SortedArray::~SortedArray()
{
	delete[] p;
}

SortedArray SortedArray::operator+(SortedArray& op2)
{
	int* pp = new int[size + op2.size];

	memcpy(pp, this->p, sizeof(int)*size);
	memcpy(pp + size, op2.p, sizeof(int)*op2.size);
	
	SortedArray arr(pp, size + op2.size);

	return arr;

}

SortedArray& SortedArray::operator=(const SortedArray& op2)
{
	delete[] p;
	size = op2.size;
	p = new int[size];
	memcpy(p, op2.p, sizeof(int)*size);

	return *this;
}

void SortedArray::show()
{
	sort();
	cout << "배열 출력 : ";
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}




int main() {
	int n[] = { 2, 20, 6 };
	int m[] = { 10,7,8,30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();
}