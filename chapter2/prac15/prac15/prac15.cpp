#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	while (1) {
		char s1[100];
		char * s2[3];
		int num1, num2;
		int res;

		cout << "? ";
		cin.getline(s1, 100);

		char* ptr = strtok(s1, " ");

		for(int i=0; i<3; i++)
		{
			s2[i] = ptr;
			ptr = strtok(NULL, " ");
		}

		num1 = atoi(s2[0]);
		num2 = atoi(s2[2]);
		if (strcmp(s2[1], "+")==0) res = num1 + num2;
		else if (strcmp(s2[1], "-")==0) res = num1 - num2;
		else if (strcmp(s2[1], "*")==0) res = num1 * num2;
		else if (strcmp(s2[1], "/")==0) res = num1 / num2;
		else if (strcmp(s2[1], "%")==0) res = num1 % num2;

		cout << s2[0] << " " << s2[1] << " " << s2[2] << " = " << res << "\n";

	}
}

