#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char s[50];
	ifstream fin("c:\\windows\\system.ini");
	int i = 1;
	while (fin.getline(s, 50)) { 
		cout << i << " : " << s << endl;
		i++;
	}
}