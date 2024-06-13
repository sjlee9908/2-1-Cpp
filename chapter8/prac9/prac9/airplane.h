#include <iostream>
using namespace std;

class Seat {
	string name;
public:
	Seat(string n = "---") { name = n; }
	void res(string n) { name = n; }
	string getName() { return name; }
	void cancel() { name = "---"; }
	string show() { return name; }
};

class Schedule {
	Seat* seat;
public:
	Schedule() {
		seat = new Seat[8];
	}
	void res(int i, string n) {
		if (seat[i].getName() == "---") seat[i].res(n);
		else cout << "�̹� ����Ǿ����ϴ�." << endl;
	}
	void cancle(int i, string n) { seat[i].cancel(); }
	void show() { for (int i = 0; i < 8; i++) { cout << seat[i].show() << "\t"; } cout << endl; }
	~Schedule() { delete[] seat; }
};



class AirlineBook {
	Schedule* schedule;
public:
	AirlineBook() { schedule = new Schedule[3]; }
	void res(int t, int i, string n) { schedule[t - 1].res(i - 1, n); }
	void cancel(int t, int i, string n) { schedule[t - 1].cancle(i - 1, n); }
	void show(int i = 4) {
		if (i == 1) { cout << "07��:\t"; schedule[0].show(); }
		else if (i == 2) { cout << "12��:\t"; schedule[1].show(); }
		else if (i == 3) { cout << "17��:\t"; schedule[2].show(); }
		else {
			cout << "07��:\t"; schedule[0].show();
			cout << "12��:\t"; schedule[1].show();
			cout << "17��:\t"; schedule[2].show();
		}

	}
	~AirlineBook() { delete[] schedule; }
};

class console {
public:
	static int sel_manu;
	static int sel_time;
	static int sel_seat;
	static string sel_name;

	static void select_manu() {
		cout << endl << "����:1, ���:2, ����:3, ������:4>> ";
		cin >> sel_manu;
	}
	static void select_time() {
		cout << "07��:1, 12��:2, 17��:3>> ";
		cin >> sel_time;
	}
	static void select_seat() {
		cout << "�¼� ��ȣ>> ";
		cin >> sel_seat;
	}
	static void select_name() {
		cout << "�̸� �Է�>> ";
		cin >> sel_name;
	}
};

int console::sel_manu;
int console::sel_time;
int console::sel_seat;
string console::sel_name;
