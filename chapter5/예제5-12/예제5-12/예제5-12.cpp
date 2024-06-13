#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(const Person& person);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ", " << name << endl; }
};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::Person(const Person& person) {	//복사생성자
	this->id = person.id;
	int len = strlen(person.name);	//name의 문자 개수
	this->name = new char[len + 1];		//name 문자열 공간 할당
	strcpy(this->name, person.name); //name의 문자열 복사
	cout << "복사 생성자 실행 " << this->name << endl;
}

Person::~Person() {
	if (name) delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
}



void f(Person person) {		//값에 의한 호출에 의해 복사생성자 실행
	person.changeName("dummy");
}

Person g() {
	Person mother(2, "Jane");
	return mother;	//함수에서 객체를 return할 때, 복사본의 복사생성자 실행
}

int main() {
	Person father(1, "kitae");
	Person son = father;	//객체로 초기화해 객체가 생성할 때, 복사생성자 실행
	f(father);
	g();
}