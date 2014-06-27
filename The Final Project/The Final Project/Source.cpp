#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Character.h"
using namespace std;

void Hero();
void Villain();
void makeAChoice(vector<char> &Option1, vector<char> &Option2, Character &User, int i);
void evaluation(Character &User, vector<Character> cList);

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
	//this is the character the user will build
	Character Villain;
	//this vector will store all characters from the file
	vector<Character> storedCharacters;
	//this vector stores all my questions
	vector<string> questions;
	//the string "line" will be very useful
	string line, file_location = "C:\\Users\\Justin\\Documents\\GitHub\\Final_Project\\The Final Project\\";

	ifstream afile(file_location + "CharacterVillains.txt");
	int c = 2;
	Character currCharacter;

	//if it can't find it it'll let us know
	if (!afile){
		cout << "Can't open the fricken damn file." << endl;
	}

	//so, for each line it gets from the file with all of the characters,
	//it will put the first into the current Character's name
	//and the second into it's "barcode". Then it appends it to the vector that stores all of the characters.
	//int c is there to let the program know when to grab a "name" or "barcode."
	while (getline(afile, line)){
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
	//cleanup
	afile.clear();
	afile.close();

	ifstream qfile(file_location + "QuestionsVillains.txt");
	vector<char> firstA, secondA;

	//this was tricky. Each line read from the questions file is added to the vector for questions.
	//In order to get the appropriate answers, it will find each option for the first answer or second answer
	//and add them to the vector for "First answers" or "second answers," respectively
	while (getline(qfile, line)){
		questions.push_back(line);
		int y = line.size() - 5;
		int n = line.size() - 2;
		firstA.push_back(line.at(y));
		secondA.push_back(line.at(n));
	}
	//more cleanup
	qfile.clear();
	qfile.close();

	//for as long as there are questions, it will give a choice.
	//because there's a vector for both first answers and second answers,
	//int i proves useful in getting the answers that correspond to the current question
	for (int i = 0; i < questions.size(); i++){
		cout << questions[i] << endl;
		makeAChoice(firstA, secondA, Villain, i);
	}

	evaluation(Villain, storedCharacters);
	cout << endl;
	cout << "You received the character, " << Villain.getName() << "!\n";

	//the goal was to make it compatible with any text files (questions and answers) with the same layout and "barcode" system.
	//all that needs to be changed are the "CharacterVillains.txt" and "QuestionsVillains.txt"
}

void makeAChoice(vector<char> &Option1, vector<char> &Option2, Character &User, int i){
	char choice;
	cout << "Which do you choose?\n";
	do{
		cin >> choice;
		if (choice == Option1[i]){
			User.answer1();
		}
		else if (choice == Option2[i]){
			User.answer2();
		}
		else
			cout << "You must enter something valid, dumkoph!\n";
	} while ((choice != Option1[i]) && (choice != Option2[i]));
	//the user will have to answer one of the current answers.
	//it will create the barcode for User depending on which answer is given: the first one, or the second one. A 1, or a 2.
}

void evaluation(Character &User, vector<Character> cList){
	//goes through and finds the characters with the same barcode as the user.
	//this determines the character that the user made! It's a list!
	for (int i = 0; i < cList.size(); i++){
		if (User == cList[i]){
			Character Final(cList[i].getName(), cList[i].getBarcode());
			User = Final;
		}
	}
}
