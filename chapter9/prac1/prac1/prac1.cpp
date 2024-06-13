#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter{
private:
	string SourceString = "원";
	string DestString = "달러";
	double convert(double won) { return won/ratio; }
	string getSourceString() { return SourceString; }
	string getDestString() { return DestString; }
public:
	WonToDollar(double ratio) : Converter(ratio) {}
};

int main() {
	WonToDollar wd(1010);
	wd.run();

}
