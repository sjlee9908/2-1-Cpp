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



class KmToMile : public Converter {
private:
	string SourceString = "Km";
	string DestString = "Mile";
	double convert(double km) { return km / ratio; }
	string getSourceString() { return SourceString; }
	string getDestString() { return DestString; }
public:
	KmToMile(double ratio) : Converter(ratio) {}
};

int main() {
	KmToMile toMile(1.609344);
	toMile.run();
}
