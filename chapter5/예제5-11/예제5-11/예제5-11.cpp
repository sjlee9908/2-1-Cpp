#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


class Person{
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(const Person& person);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ", " << name << endl; }
};

Person::Person(int id, const char* name){
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}

Person::Person(const Person& person){	//복사생성자
	this->id = person.id;
	int len = strlen(person.name);	//name의 문자 개수
	this->name = new char[len + 1];		//name 문자열 공간 할당
	strcpy(this->name, person.name); //name의 문자열 복사
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

Person::~Person(){
	if (name) delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
}


int main() {
	Person father(1, "kitae");	//1. father객체 생성
	Person daughter(father);	//2. daughter 객체 복사 생성, 복사 생성자 호출

	cout << "daughter 생성 직후 ---- " << endl;
	father.show();		//3. father객체 출력
	daughter.show();	//3. daughter 객체 출력

	daughter.changeName("Grace");	//4. dauther의 이름을 Grace로 변경
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();		//5. father객체 출력
	daughter.show();	//5. daugther 객체 출력

	return 0;		//6,7 daughter 객체 소멸 후 father 객체 소멸
}