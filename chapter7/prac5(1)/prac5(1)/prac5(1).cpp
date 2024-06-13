#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	Color& operator+(Color b);
	bool operator==(Color b);
};

Color& Color::operator+(Color b)
{
	Color tmp;

	tmp.red = red + b.red;
	tmp.blue = blue + b.blue;
	tmp.green = green + b.green;

	return tmp;
}

bool Color::operator==(Color b)
{
	return (red == b.red && blue == b.blue && green == b.green);
	return false;
}



int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color funchsia(255, 0, 255);
	if (c == funchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}

