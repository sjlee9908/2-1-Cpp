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
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter{
private:
	string SourceString = "��";
	string DestString = "�޷�";
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
