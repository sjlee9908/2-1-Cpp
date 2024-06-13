#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ifstream fin("c:\\windows\\system.ini", ios::binary);
	int count=0;
	int ch[16];
	cout << "c:\\windows\\system.ini" << "Ãâ·Â" << endl;


	while (!fin.eof()) {
		int ch[16] = {-1,};
		for (int i = 0; i < 8; i++) {
			ch[i] = fin.get();
			cout << hex << setw(2) << setfill('0') << ch[i] << " " ;
			
		}
		cout << "\t";
		for (int i = 8; i < 16; i++) {
			ch[i] = fin.get();
			if (ch[i] < 0) { cout << "\t\t"; break; }
			cout << hex << setw(2) << setfill('0') << ch[i] << " ";
		}
		cout << "\t";
		cout << "\t";
		for (int i = 0; i < 8; i++) {
			if(isprint(ch[i])) cout << (char)ch[i] << " ";
			else cout << "." << " ";
		}
		cout << "\t";
		for (int i = 8; i < 16; i++) {
			if (isprint(ch[i])) cout << (char)ch[i] << " ";
			else cout << "." << " ";
		}
		cout << endl;
	}
}