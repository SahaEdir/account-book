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

		cout << "����ڸ�: " << endl;
		cin >> a;
		int bufferSizeA = strlen(a) + 1;
		char* pa = new char[strlen(a)];
		strcpy_s(pa, bufferSizeA, a);

		cout << "��¥: ";
		cin >> x;

		cout << "����/����: ";
		cin >> y;

		cout << "�ݾ�: ";
		cin >> z;

		cout << "����: ";
		cin >> b;
		int bufferSizeB = strlen(b) + 1;
		char* pb = new char[strlen(b)];
		strcpy_s(pb, bufferSizeB, b);

		info = Data(pa, x, y, z, pb); //�ʱ�ȭ
	}

	void print(void)
	{
		cout << "�̸��ӳ�¥������/���ԤӰ��ݤӳ���" << endl;
		cout << info.name << " " << info.day << " " << info.type << " " << info.contents << endl;
	}
};

int main()
{
	DataFunc a;
	a.CreateData();
	a.print();
}