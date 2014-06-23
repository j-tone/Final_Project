#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Character.h"
using namespace std;

int main()
{
	string answer;
	cout << "Do you prefer freedom or subjugation?" << endl;
	cout << "Answer: ";
	cin >> answer;

	if (answer == "freedom" || answer == "Freedom" || answer == "FREEDOM")
	{
		Hero();
	}

	else if (answer == "subjugation" || answer == "Subjugation" || answer == "SUBJUGATION")
	{
		Villain();
	}

void Hero() //Ian's code
{
  Character Hero;
  fstream file("Character.txt", ios::in|ios::out);
  
}

void Villain() //Justin's code
{
  Character Villain;
  fstream file("Charatcter.txt", ios::in|ios::out);
  
}
