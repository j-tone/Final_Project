#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using namespace std;

class Character{
private:
	static int count;
	string name;
	string barcode;

public:
	Character();
	Character(string name, string barcode);
	int getCount()const;
	string getName()const;
	void setName(string name);
	string getBarcode()const;
	void answer1();
	void answer2();

	bool operator==(const Character &secondC);

};

#endif