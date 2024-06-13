#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	cout << setw(15) << left << "Number" << setw(15) << left << "Square" << setw(15) << left << "Square Root" << endl;
	for (int i = 0; i <= 45; i+=5) {
		cout << setw(15) << setfill('_') << i << setfill('_') << setw(15) << i*i << setfill('_') << setprecision(3) <<sqrt(i) << endl;
	}

}