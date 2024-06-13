#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Histogram {
	string str;
public:
	Histogram(string s) { str = s; cout << s; }
	void put(string s) { str.append(s); cout << s;}
	void putc(char c) { string s; s += c; str.append(s); cout << c; }
	void print();
};

void Histogram::print() 
{
	int alp[26] = {0,};
	int count = 0;
	
	for (int i = 0; i < str.length(); i++) {
		str[i] = tolower(str[i]);
		if (str[i] >= 97 && str[i] <= 122) {
			alp[str[i] - 97]++;
			count++;
		}
	}

	cout << "ÃÑ ¾ËÆÄºª ¼ö " << count << endl << endl;

	for (int i = 0; i < 26; i++) {
		char c = 97 + i;
		cout << c << " (" << alp[i] << ")" << "\t";
		for (int j = 0; j < alp[i]; j++) cout << "*";
		cout << endl;
	}
}

int main() 
{
	Histogram elsevisHisto("Wise men say, only fools rush in But I can't help, ");
	cout << endl;
	elsevisHisto.put("falling in love with you");
	elsevisHisto.putc('-');
	elsevisHisto.put("Elvis presley");
	cout << endl << endl;
	elsevisHisto.print();
}