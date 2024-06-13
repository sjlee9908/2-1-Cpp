#include <iostream>
using namespace std;

int main() {
	cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');

	cout.put('c').put('+').put('+').put(' ');
	
	char str[] = "i love programming";
	cout.write(str, 6);
}