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
	int exists = 1; //Because I had to make more questions to make all the heroes accurate, the user could potentially 
	//enter a barcode that does not match with a character in the text file.
	do{
		Character Hero;

		vector<Character> UsersHero;
		vector<string> questions;
		string line;
		string HeroFileBase = ("C:\\Users\\Ian\\CS172\\");
		ifstream HeroNames(HeroFileBase + "CharacterHeroes.txt");
		int c = 2;


		if (!HeroNames)
		{
			cout << "You are not worth of being a Hero. File wont open." << endl;
		}

		while (getline(HeroNames, line))
		{
			if ((c % 2) == 0)
			{
				Hero.setName(line);
				c++;
			}
			else
			{
				Hero.setBar(line);
				UsersHero.push_back(Hero);
				c++;
			}
		}

		HeroNames.clear();
		HeroNames.close();

		ifstream HeroQuestions(HeroFileBase + "HeroesQuestions.txt");
		vector <char> FirstA, SecondA;

		while (getline(HeroQuestions, line))
		{
			questions.push_back(line);
			int Y = line.size() - 8; //because I formatted my question text file differently, these numbers
			//account for the spaces I added.
			int N = line.size() - 3;
			FirstA.push_back(line.at(Y));
			SecondA.push_back(line.at(N));
		}

		HeroQuestions.clear();
		HeroQuestions.close();

		for (int i = 0; i < questions.size(); i++)
		{
			cout << questions[i] << endl;
			makeAChoice(FirstA, SecondA, Hero, i);
		}

		evaluation(Hero, UsersHero);
		cout << endl;
		if (Hero.getName() == " ")
		{
			cout << "There is not a hero in our database that fits your data" << endl;
			cout << "Try again" << endl;
			Hero.setBar(" ");//This will reset the barcode to nothing so that the user can try again.
		}
		else
		{
			cout << "Your heroic doppleganger is: " << Hero.getName() << "!" << endl;
			exists--;//removes the user from the loop.
		}
	} while (exists = 1);
}

void Villain() //Justin's code
{
	//this is the character the user will build
	Character Villain;
	//this vector will store all characters from the file
	vector<Character> storedCharacters;
	//this vector stores all the questions
	vector<string> questions;
	//the string "line" will be very useful
	string line, file_location = "C:\\Users\\Justin\\Documents\\GitHub\\Final_Project\\The Final Project\\";

	ifstream afile(file_location + "CharacterVillains.txt");
	int c = 2;
	Character currCharacter;

	//if it can't find it it'll let us know
	if (!afile){
		cout << "You know what's not so great? The file requested can't open. That sucks." << endl;
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
