#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
public:
	string year;
	string name;
	string author;
	Book(string y, string n, string a) { year = y; name = n; author = a; }
};

int main() {
	vector<Book> v;
	string y;
	string n;
	string a;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	while(1){
		cout << "년도>>";
		getline(cin, y);
		if (y == "-1") break;

		cout << "책이름>>";
		getline(cin, n);

		cout << "저자>>";
		getline(cin, a);

		Book b(y, n, a);
		v.push_back(b);
	}
	cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;;
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	getline(cin, a);
	for (int i = 0; i < v.size(); i++) {
		if (v[i].author == a) cout << v[i].year << "년도, " << v[i].name << ", " << v[i].author << endl;
	}		
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> y;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].year == y) cout << v[i].year << "년도, " << v[i].name << ", " << v[i].author << endl;
	}

}
