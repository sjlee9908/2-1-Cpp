#include <iostream>
#include <string>
using namespace std;

int main() {
	string song("Falling in love with you");
	string elvis("Elvis Presley");

	string singer;

	cout << song + "를 부른 가수는";			//+로 문자열 연결
	cout << "(힌트 : 첫글자는 "<< elvis[0] << ")?";		//[]연산자 사용

	getline(cin, singer);		//getline()은 string타입의 C++문자열을 입력받기 위해 제공되는 전역함수
	if (singer == elvis)
		cout << "맞았습니다";
	else
		cout << "틀렸습니다. " + elvis + "입니다." << endl;
}