#include <iostream>
using namespace std;

ostream& fivestar(ostream& outs) {
	return outs << "*****";
}

ostream& rightarrow(ostream& outs) {
	return outs << "---->";
}

ostream& beep(ostream& outs) {
	return outs << '\a';
}

int main() {
	cout << "���� �︳�ϴ�" << beep << endl;
	cout << "C" << rightarrow << "C++" << rightarrow << "java" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
}