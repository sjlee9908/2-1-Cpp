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
		else cout << "이미 예약되었습니다." << endl;
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
		if (i == 1) { cout << "07시:\t"; schedule[0].show(); }
		else if (i == 2) { cout << "12시:\t"; schedule[1].show(); }
		else if (i == 3) { cout << "17시:\t"; schedule[2].show(); }
		else {
			cout << "07시:\t"; schedule[0].show();
			cout << "12시:\t"; schedule[1].show();
			cout << "17시:\t"; schedule[2].show();
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
		cout << endl << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
		cin >> sel_manu;
	}
	static void select_time() {
		cout << "07시:1, 12시:2, 17시:3>> ";
		cin >> sel_time;
	}
	static void select_seat() {
		cout << "좌석 번호>> ";
		cin >> sel_seat;
	}
	static void select_name() {
		cout << "이름 입력>> ";
		cin >> sel_name;
	}
};

int console::sel_manu;
int console::sel_time;
int console::sel_seat;
string console::sel_name;
