#include <iostream>
#include <string>
using namespace std;

int main() {
	string song("Falling in love with you");
	string elvis("Elvis Presley");

	string singer;

	cout << song + "�� �θ� ������";			//+�� ���ڿ� ����
	cout << "(��Ʈ : ù���ڴ� "<< elvis[0] << ")?";		//[]������ ���

	getline(cin, singer);		//getline()�� stringŸ���� C++���ڿ��� �Է¹ޱ� ���� �����Ǵ� �����Լ�
	if (singer == elvis)
		cout << "�¾ҽ��ϴ�";
	else
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�." << endl;
}