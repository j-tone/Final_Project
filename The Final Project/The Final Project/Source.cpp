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

	static int QisA;
	string Human;
	string Space;
	string Supernatural;
	string Government;
	string DarkSide;
	string BatmanSyndrome;
	string RobinSyndrome;
	string PewPew;
	string NickFlamell;
	string Hiccup;
	string Destiny;
	
	do{ //Human?
		cout << "Are you Human? Yes or No?" << endl;
		cin >> Human;
		QisA = 0;
		if (Human == "Yes" || Human == "YES" || Human == "yes")
		{

			QisA++;
		}
		else if (Human == "No" || Human == "NO" || Human == "no")
		{

			QisA++;
		}
		else
		{
			cout << "That was not an acceptable response. Try again" << endl;
		}
	} while (QisA != 1);

	do{ //Space ok?
		cout << "Is a potential loss of gravity a problem? Yes or No?" << endl; //if no (Star Wars, Star Trek, Marvel)
		cin >> Space;
		if (Space == "Yes" || Space == "YES" || Space == "yes")
		{

			QisA++;
		}
		else if (Space == "No" || Space == "NO" || Space == "no")
		{

			QisA++;
		}
		else
		{
			cout << "That was not an acceptable response. Try again" << endl;
		}
	} while (QisA != 2);

	do{ //Supernatural or Natural?
		cout << "Do you believe in the Natural or the Supernatural?" << endl;
		cin >> Supernatural;
		if (Supernatural == "Yes" || Supernatural == "YES" || Supernatural == "yes")
		{

			QisA++;
		}
		else if (Supernatural == "No" || Supernatural == "NO" || Supernatural == "no")
		{

			QisA++;
		}
		else
		{
			cout << "That was not an acceptable response. Try again" << endl;
		}
	} while (QisA != 3);

	do{//Government or Military
		cout << "Do you have affiliations with the government or military? Yes or No?" << endl;
		cin >> Government;
		if (Government == "Yes" || Government == "YES" || Government == "yes")
		{

			QisA++;
		}
		else if (Government == "No" || Government == "NO" || Government == "no")
		{

			QisA++;
		}
		else
		{
			cout << "That was not an acceptable response. Try again" << endl;
		}
	} while (QisA != 4);
	
	do{//Potential Dark Side?
		cout << "Could you be mistaken for a villain? Yes or No?" << endl;
		cin >> DarkSide;
		if (DarkSide == "Yes" || DarkSide == "YES" || DarkSide == "yes")
		{

			QisA++;
		}
		else if (DarkSide == "No" || DarkSide == "NO" || DarkSide == "no")
		{

			QisA++;
		}
		else
		{
			cout << "That was not an acceptable response. Try again" << endl;
		}
	} while (QisA != 5);

	do{//Living Parents?
		cout << "Are your parents still living? Yes or No?" << endl;
		cin >> BatmanSyndrome;
		if (BatmanSyndrome == "Yes" || BatmanSyndrome == "YES" || BatmanSyndrome == "yes")
		{

			QisA++;
		}
		else if (BatmanSyndrome == "No" || BatmanSyndrome == "NO" || BatmanSyndrome == "no")
		{

			QisA++;
		}
		else
		{
			cout << "That was not an acceptable response. Try again" << endl;
		}
	} while (QisA != 6);

	do{//Leader or Follower?
		cout << "Are you a follower or a leader?" << endl;
		cin >> RobinSyndrome;
		if (RobinSyndrome == "Yes" || RobinSyndrome == "YES" || RobinSyndrome == "yes")
		{

			QisA++;
		}
		else if (RobinSyndrome == "No" || RobinSyndrome == "NO" || RobinSyndrome == "no")
		{

			QisA++;
		}
		else
		{
			cout << "That was not an acceptable response. Try again" << endl;
		}
	} while (QisA != 7);

	do{//Gun or Sword?
		cout << "Do you prefer close combat over distance?" << endl;
		cin >> PewPew;
		if (PewPew == "Yes" || PewPew == "YES" || PewPew == "yes")
		{

			QisA++;
		}
		else if (PewPew == "No" || PewPew == "NO" || PewPew == "no")
		{

			QisA++;
		}
		else
		{
			cout << "That was not an acceptable response. Try again" << endl;
		}
	} while (QisA != 8);

	do{//Mortal
		cout << "Are you mortal? Yes or No?" << endl;
		cin >> NickFlamell;
		if (NickFlamell == "Yes" || NickFlamell == "YES" || NickFlamell == "yes")
		{

			QisA++;
		}
		else if (NickFlamell == "No" || NickFlamell == "NO" || NickFlamell == "no")
		{

			QisA++;
		}
		else
		{
			cout << "That was not an acceptable response. Try again" << endl;
		}
	} while (QisA != 9);

	do{//Gentle or Agressive?
		cout << "Are you generally more gentle or more agressive?" << endl;
		cin >> Hiccup;
		if (Hiccup == "Yes" || Hiccup == "YES" || Hiccup == "yes")
		{

			QisA++;
		}
		else if (Hiccup == "No" || Hiccup == "NO" || Hiccup == "no")
		{

			QisA++;
		}
		else
		{
			cout << "That was not an acceptable response. Try again" << endl;
		}
	} while (QisA != 10);

	do{ //Following your destiny?
		cout << "Are you following your destiny? Yes or No?" << endl;
		cin >> Destiny;
		if (Destiny == "Yes" || Destiny == "YES" || Destiny == "yes")
		{

			QisA++;
		}
		else if (Destiny == "No" || Destiny == "NO" || Destiny == "no")
		{

			QisA++;
		}
		else
		{
			cout << "That was not an acceptable response. Try again" << endl;
		}
	} while (QisA != 11);
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
