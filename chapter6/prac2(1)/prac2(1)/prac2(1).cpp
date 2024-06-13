#include <iostream>
#include <string>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
	Person() { id = 1; weight = 20.5; name = "Grace"; }
	Person(int i, string s) { id = i; weight = 20.5; name = s; }
	Person(int i, string s, double w) { id = i; name = s; weight= w; }
};


int main()
{
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();

}