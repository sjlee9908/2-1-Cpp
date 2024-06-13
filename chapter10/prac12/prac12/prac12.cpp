#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class word {
public:
	string eng;
	string kor;
	word(string e, string k) { eng = e; kor = k; }
};

void choice_2(vector<word>& v) {
	cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료" << endl;
	int sel;

	while (1) {
		random_shuffle(v.begin(), v.end());

		string arr[4]={"","","",""};
		arr[0] = v[0].kor;
		arr[1] = v[1].kor;
		arr[2] = v[2].kor;
		arr[3] = v[3].kor;
		random_shuffle(arr, arr + 4);

		cout << v[0].eng << "?" << endl;

		for (int i = 0; i < 4; i++) {
			cout << "(" << i+1 << ")" << arr[i]<<" ";
		}
		cin >> sel;
		if (sel == -1) { cout << endl; break; }
		if (arr[sel-1] == v[0].kor) cout << "Excellent !!" << endl;
		else cout << "No. !!" << endl;
	}
}

void choice_1(vector<word>& v) {
	cout << "영어 단어에 exit을 입력하면 입력 끝" << endl;
	string e, k;
	while (1) {
		cout << "영어 >>";
		cin >> e;
		
		if (e == "exit") { cout << endl; break; }

		cout << "한글 >>";
		cin >> k;
		word w(e, k);
		v.push_back(w);
	}
}


int main() {
	srand((unsigned)time(0));
	int choice;
	
	vector<word> v;
	word n1("honey", "자기");
	v.push_back(n1);
	word n2("doll", "인형");
	v.push_back(n2);
	word n3("painting", "그림");
	v.push_back(n3);
	word n4("stock", "주식");
	v.push_back(n4);
	word n5("lover", "애인");
	v.push_back(n5);
	word n6("photo", "사진");
	v.push_back(n6);
	word n7("bear", "곰");
	v.push_back(n7);
	
	cout << "***** 영어 어휘 테스트를 시작합니다. *****" << endl;
	while (1) {
		cout << "어휘 삽입: 1, 어휘 테스트: 2, 프로그램 종료:그 외키 >> ";
		cin >> choice;
		if (choice == 1) choice_1(v);
		else if (choice == 2) choice_2(v);
		else break;
	}
}