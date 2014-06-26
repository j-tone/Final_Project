#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Character.h"
using namespace std;

void Hero();
void Villain();

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
}

void Hero() //Ian's code
{
  Character Hero;
  
  	cout << "Is a potential loss of gravity a problem?" << endl;//if no(starwars, star trek, marvel)
	cout << "Do you have affiliations with the military?" << endl;
	cout << "Do you know what E = m c ^2 means?" << endl;
	cout << "Are your parents alive?" << endl;
	cout << "Brute strength or srategy?" << endl;
	cout << "Are your heroics for personal gain or for the greater good?" << endl;
}

void Villain() //Justin's code
{
	Character Villain;
	vector<Character> storedCharacters;
	string line;
	ifstream file("C:\\Users\\Justin\\Documents\\GitHub\\Final_Project\\The Final Project\\CharacterVillains.txt");
	int c = 2;
	Character currCharacter;
	if (!file){
		cout << "Can't open the fricken damn file." << endl;
	}
	while (getline(file, line)){
		if ((c % 2) == 0){
			currCharacter.setName(line);
			c++;
		}
		else{
			currCharacter.setBar(line);
			storedCharacters.push_back(currCharacter);
			c++;
		}
	}

}
