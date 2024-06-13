#include <iostream>
using namespace std;

void grade(int score) {
	try {
		if (score <= 0 || score >= 100) throw score;
		if (score < 60) cout << "F" << endl;
		else if (score < 70) cout << "D" << endl;
		else if (score < 80) cout << "C" << endl;
		else if (score < 90) cout << "B" << endl;
		else if (score < 100) cout << "A" << endl;
	}
	catch (int i) {
		cout << i << " = 유효하지 않음";
	}
}

int main() {
	grade(93);
}