#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int num;

	while (1) {
		double sum = 0;
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> num;
		if (num == 0) return 0;
		
		v.push_back(num);

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
			sum += v[i];
		}
		cout << endl << "평균 = " << sum / v.size() << endl;
	}
 }