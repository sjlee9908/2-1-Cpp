#include <iostream>
using namespace std;

int main()
{
	double arr[5];
	double max = 0;
	cout << "�ټ����� �Ǽ��� �Է��϶�>>";

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		if (i == 0) max = arr[0];
		if (max < arr[i]) max = arr[i];
	}

	cout << "���� ū �� = " << max << endl;

}