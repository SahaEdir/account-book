#include <iostream>
#include "Data.h"

using namespace std;

class DataFunc :public Data
{
	Data info;
public:
	void CreateData()
	{
		int x, y, z;
		char a[150], b[150];

		cout << "사용자명: " << endl;
		cin >> a;
		int bufferSizeA = strlen(a) + 1;
		char* pa = new char[strlen(a)];
		strcpy_s(pa, bufferSizeA, a);

		cout << "날짜: ";
		cin >> x;

		cout << "지출/수입: ";
		cin >> y;

		cout << "금액: ";
		cin >> z;

		cout << "내용: ";
		cin >> b;
		int bufferSizeB = strlen(b) + 1;
		char* pb = new char[strlen(b)];
		strcpy_s(pb, bufferSizeB, b);

		info = Data(pa, x, y, z, pb); //초기화
	}

	void print(void)
	{
		cout << "이름ㅣ날짜ㅣ지출/수입ㅣ가격ㅣ내용" << endl;
		cout << info.name << " " << info.day << " " << info.type << " " << info.contents << endl;
	}
};

int main()
{
	DataFunc a;
	a.CreateData();
	a.print();
}