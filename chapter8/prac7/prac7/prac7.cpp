#include <iostream>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void memory_write(char x, int index) { mem[index] = x; }
	char memory_read(int index) { return mem[index]; }
	~BaseMemory() { delete[] mem; }
};

class ROM : public BaseMemory {
public:
	ROM(int s, char x[], int size) : BaseMemory(s) { 
		for (int i = 0; i < size; i++) memory_write(x[i], i);
		for (int i = size; i < s; i++) memory_write(0, i);
	}
	char read(int i) { return memory_read(i); }
};

class RAM : public BaseMemory{
public:
	RAM(int s) : BaseMemory(s) {
		for (int i = 0; i < s; i++) memory_write(0, i);
	}
	void write(int i, char x) { memory_write(x, i); }
	char read(int i) { return memory_read(i); }
};

int main() {
	char x[5] = { 'h', 'e','l','l', 'o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}