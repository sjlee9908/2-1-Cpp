#include <iostream>
#include <string>
using namespace std;

class Phone {
	string name;
	string telnum;
	string address;
public:
	Phone(string name = "", string telnum = "", string address = "") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend istream& operator>>(istream& is, Phone& p);
	friend ostream& operator<<(ostream& os, Phone& p);
};

istream& operator>>(istream& is, Phone& p)
{
	cout << "�̸�: ";
	getline(is, p.name);
	cout << "��ȭ��ȣ: ";
	getline(is, p.telnum);
	cout << "�ּ�: ";
	getline(is, p.address);

	return is;
}

ostream& operator<<(ostream& os, Phone& p)
{
	cout << "(" << p.name << "," << p.telnum << "," << p.address << ")";
	return os;
}

int main() {
	Phone girl, boy;
	cin >> girl >> boy;
	cout << girl << endl << boy << endl;
}