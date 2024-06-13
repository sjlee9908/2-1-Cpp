#include <iostream>
#include <string>
using namespace std;

class Book;
void operator+=(Book& b, int n);
void operator-=(Book& b, int n);

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	friend void operator+=(Book& b, int n);
	friend void operator-=(Book& b, int n);
};

void operator+=(Book& b, int n) {
	b.price += n;
}
void operator-=(Book& b, int n) {
	b.price -= n;
}

int main() {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}