#include <iostream>
#include <fstream>
using namespace std;

int main() {
	try {
		const char* srcFile = "c:\\Temp\\desert.jpg";
		const char* destFile = "c:\\Temp\\copydesert.jpg";

		ifstream fsrc(srcFile, ios::in | ios::binary);
		if (!fsrc) throw "열기오류";

		ofstream fdest(destFile, ios::out | ios::binary);
		if (!fdest) throw "열기오류";

		int c;

		while ((c = fsrc.get()) != EOF) {
			fdest.put(c);
		}
		cout << srcFile << "을 " << destFile << "로 복사 완료" << endl;
		fsrc.close();
		fdest.close();
	}

	catch (const char* s) { cout << s << endl; }
}