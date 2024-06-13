#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {	//������
	this->id = id;
	int len = strlen(name);		//name�� ���ڰ���
	this->name = new char[len + 1];		//name�� ���ڿ����� �����Ҵ�
	strcpy(this->name, name);	//name�� ���ڿ� ����
}

Person::~Person() {
	if (name)
		delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
}

int main()
{
	Person father(1, "kitae");	//1. father��ü ����
	Person daughter(father);	//2. daughter��ü ���� ����, ����Ʈ ���� ������ ȣ��

	cout << "daughter ��ü ���� ���� ----" << endl;
	father.show();	//3. father ��ü ���
	daughter.show();	//3. daughter��ü ���

	daughter.changeName("Grace");	//4. daughter�� �̸� Grace�� ����
	cout << "daughter �̸��� Grace�� ������ �� ----" << endl;
	father.show();		//5. father��ü ���
	daughter.show();	//5. father��ü ���

	return 0;			//6,7 daughter ��ü �Ҹ� �� father��ü �Ҹ�
}