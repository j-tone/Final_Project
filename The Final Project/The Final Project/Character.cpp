#include "Character.h"
#include <string>
using namespace std;

int Character::count = 0;

Character::Character(){
	barcode = "";
	count++;
}
Character::Character(string name, string barcode){
	this->name = name;
	this->barcode = barcode;
	count++;
}

int Character::getCount()const{
	return count;
}
string Character::getName()const{
	return name;
}
void Character::setName(string name){
	this->name = name;
}
void Character::setBar(string barcode){
	this->barcode = barcode;
}
string Character::getBarcode()const{
	return barcode;
}
void Character::answer1(){
	barcode = barcode + "1";
}
void Character::answer2(){
	barcode = barcode + "2";
}

bool Character::operator==(const Character &secondC){
	if (secondC.getBarcode() == barcode){
		return true;
	}
	else
		return false;
}