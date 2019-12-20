#include <iostream>

using namespace std;

class Data
{
public:
	char* name;
	int day;
	int type;
	int price;
	char* contents;


	Data() {};
	Data(char *n, int d, int t, int p, char *c) : name(n), day(d), type(t), price(p), contents(c) {};
	~Data() {};
};