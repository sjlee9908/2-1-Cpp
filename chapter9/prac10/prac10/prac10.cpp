#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
using namespace std;


class UI {
public:
	static int manu() { int n; cout << "����:1, ����:2, ��κ���:3, ����:4 >> "; cin >> n; return n; }
	static int select_shape() { int n; cout << "��:1, ��:2, �簢��:3 >> "; cin >> n; return n; }
	static int select_num() { int n; cout << "�����ϰ��� �ϴ� ������ �ε��� >> "; cin >> n; return n; }
};


class GraphicEditor {
	Shape* pStart = NULL, * pLast;
public:
	GraphicEditor() { pStart = NULL; pLast = NULL; }
	void append();
	void remove();
	void show();
	void end();
};

void GraphicEditor::append() {
	int shape_choice = UI::select_shape();
	if (pStart == NULL) {
		if (shape_choice == 1) pStart = new Line();
		else if (shape_choice == 2) pStart = new Circle();
		else if (shape_choice == 3) pStart = new Rect();
		pLast = pStart;
	}
	else {
		if (shape_choice == 1) pLast = pLast->add(new Line());
		else if (shape_choice == 2) pLast = pLast->add(new Circle());
		else if (shape_choice == 3) pLast = pLast->add(new Rect());	
	}
}

void GraphicEditor::remove() {
	Shape* p = pStart;
	Shape* exp = pStart;
	int num_choice = UI::select_num();
	
	if (num_choice == 0) {
		pStart = p->getNext();
		delete p;
	}
	else {
		int i = 0;
		while (i != num_choice) {
			i++;
			exp = p;
			p = p->getNext();
		}
		exp->add(p->getNext());
		delete p;
	}
}

void GraphicEditor::end() {
	Shape* p = pStart;
	while (p != NULL) {
		Shape* q = p->getNext();
		delete p;
		p = q;
	}
}

void GraphicEditor::show() {
	Shape* p = pStart;
	int i = 0;
	while (p!= NULL) {
		cout << i << ": ";
		i++;
		p->paint();
		p=p->getNext();
	}
}


int main() {
	cout << "�׷��� �������Դϴ�." << endl;
	GraphicEditor* GE = new GraphicEditor();
	int manu_choice = UI::manu();
	
	while (manu_choice!=4) {
		if (manu_choice == 1)	GE->append();
		else if (manu_choice == 2) GE->remove();
		else if (manu_choice == 3) GE->show();

		manu_choice = UI::manu();
		if (manu_choice == 4) GE->end();
	}
	delete GE;
}

