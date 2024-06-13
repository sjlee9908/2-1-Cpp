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

Person::Person(const Person& person) {	//���������
	this->id = person.id;
	int len = strlen(person.name);	//name�� ���� ����
	this->name = new char[len + 1];		//name ���ڿ� ���� �Ҵ�
	strcpy(this->name, person.name); //name�� ���ڿ� ����
	cout << "���� ������ ���� " << this->name << endl;
}

Person::~Person() {
	if (name) delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
}



void f(Person person) {		//���� ���� ȣ�⿡ ���� ��������� ����
	person.changeName("dummy");
}

Person g() {
	Person mother(2, "Jane");
	return mother;	//�Լ����� ��ü�� return�� ��, ���纻�� ��������� ����
}

int main() {
	Person father(1, "kitae");
	Person son = father;	//��ü�� �ʱ�ȭ�� ��ü�� ������ ��, ��������� ����
	f(father);
	g();
}