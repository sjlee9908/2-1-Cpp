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

Person::Person(const Person& person){	//���������
	this->id = person.id;
	int len = strlen(person.name);	//name�� ���� ����
	this->name = new char[len + 1];		//name ���ڿ� ���� �Ҵ�
	strcpy(this->name, person.name); //name�� ���ڿ� ����
	cout << "���� ������ ����. ���� ��ü�� �̸� " << this->name << endl;
}

Person::~Person(){
	if (name) delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
}


int main() {
	Person father(1, "kitae");	//1. father��ü ����
	Person daughter(father);	//2. daughter ��ü ���� ����, ���� ������ ȣ��

	cout << "daughter ���� ���� ---- " << endl;
	father.show();		//3. father��ü ���
	daughter.show();	//3. daughter ��ü ���

	daughter.changeName("Grace");	//4. dauther�� �̸��� Grace�� ����
	cout << "daughter �̸��� Grace�� ������ �� ----" << endl;
	father.show();		//5. father��ü ���
	daughter.show();	//5. daugther ��ü ���

	return 0;		//6,7 daughter ��ü �Ҹ� �� father ��ü �Ҹ�
}