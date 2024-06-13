#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	Book(const Book& b);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};

Book::Book(const char* title, int price)
{
	this->title = new char[strlen(title)+1];
	strcpy(this->title,title);
	this->price = price;
}

Book::Book(const Book& b)
{
	this->title = new char[strlen(b.title)+1];
	strcpy(this->title, b.title);
	this->price = b.price;
}

Book::~Book()
{
	delete[] title;
}

void Book::set(const char* title, int price) 
{
	if(this->title != NULL) delete[] this->title;
	this->title = new char[50];
	strcpy(this->title, title);
	this->price = price;
}

//(2)Book::Book(const Book& b)
//{
//	this->title = b.title;
//  this->price = b.price;
//}



int main()
{
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}
