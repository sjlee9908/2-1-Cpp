#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "airplane.h"
using namespace std;


int main()
{
	cout << "***** �Ѽ��װ��� ���� ���� ȯ���մϴ� *****\n";
	AirlineBook* airline;
	airline = new AirlineBook;

	while (1) {
		console::select_manu();
		if (console::sel_manu == 4) { break; }
		else if (console::sel_manu == 1) {
			console::select_time();
			airline->show(console::sel_time);

			console::select_seat();
			console::select_name();
			airline->res(console::sel_time, console::sel_seat, console::sel_name);
		}
		else if (console::sel_manu == 2) {
			console::select_time();
			airline->show(console::sel_time);

			console::select_seat();
			console::select_name();
			airline->cancel(console::sel_time, console::sel_seat, console::sel_name);
		}
		else if (console::sel_manu == 3) {
			airline->show();
		}
	}
	cout << "���� �ý����� �����մϴ�.";
	delete airline;
}