#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int n) {
	cout << n << " ";
}

int main() {
	vector<int> v = { 1,2,3,4,5 };
	for_each(v.begin(), v.end(), print);//백터의 첫번째 요소부터 마지막 요소까지 검색하면서, print()에 요소를 매개변수로 집어넣음
}