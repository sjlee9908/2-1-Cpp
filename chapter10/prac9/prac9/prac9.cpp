#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int num;

	while (1) {
		double sum = 0;
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> num;
		if (num == 0) return 0;
		
		v.push_back(num);

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
			sum += v[i];
		}
		cout << endl << "��� = " << sum / v.size() << endl;
	}
 }