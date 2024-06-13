#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
using namespace std;


class UI {
public:
	static int manu() { int n; cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> "; cin >> n; return n; }
	static int select_shape() { int n; cout << "선:1, 원:2, 사각형:3 >> "; cin >> n; return n; }
	static int select_num() { int n; cout << "삭제하고자 하는 도형의 인덱스 >> "; cin >> n; return n; }
};


class GraphicEditor {
	vector<Shape*> v;
public:
	GraphicEditor() {  }
	void append();
	void remove();
	void show();
	void end();
};

void GraphicEditor::append() {
	int shape_choice = UI::select_shape();
	if (shape_choice == 1) v.push_back(new Line());
	if (shape_choice == 2) v.push_back(new Circle());
	if (shape_choice == 3) v.push_back(new Rect());
}

void GraphicEditor::remove() {
	auto it = v.begin();
	it += UI::select_num();
	delete* it;
	it = v.erase(it);
}

void GraphicEditor::end() {
	for (auto it = v.begin(); it != v.end(); it++) {
		delete* it;
	}
}

void GraphicEditor::show() {
	for (int i = 0; i < v.size(); i++) {
		cout << i << ": ";
		v[i]->paint();
	}
	cout << endl;
}


int main() {
	cout << "그래픽 에디터입니다." << endl;
	GraphicEditor* GE = new GraphicEditor();
	int manu_choice = UI::manu();

	while (manu_choice != 4) {
		if (manu_choice == 1)	GE->append();
		else if (manu_choice == 2) GE->remove();
		else if (manu_choice == 3) GE->show();

		manu_choice = UI::manu();
		if (manu_choice == 4) GE->end();
	}
	delete GE;
}

