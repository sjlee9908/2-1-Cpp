#include <iostream>
#include <string>
using namespace std;

int main() {
	int price, num, sales = 0;
	string coffee;

	while (sales <= 20000) {
		cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n주문>>";
		cin >> coffee >> num;

		if (coffee == "에스프레소") {
			sales += 2000 * num;
			cout << 2000 * num << "원입니다. 맛있게 드세요\n";
		}

		else if (coffee == "아메리카노") {
			sales += 2300 * num;
			cout << 2300 * num << "원입니다. 맛있게 드세요\n";
		}

		else if (coffee == "카푸치노") {
			sales += 2500 * num;
			cout << 2500 * num << "원입니다. 맛있게 드세요\n";
		}
	}
	cout << "오늘 " << sales << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
}