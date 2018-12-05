#include "stdafx.h"
#include "Information.h"
#include "menu.h"
#include <iostream>
using namespace std;

Information::Information()
{
	
};
void Information::launch()
{
	system("cls");
	cout << "Instruction" << endl;
	cout << "\tTo start the game, press 1;" << endl;
	cout << "\tIf you want to leave the game - press '3';" << endl;
	cout << "\tHere, with the help of the calculator, determine who thinks the word, and who guesses it;" << endl;
	cout << "\Enter the word you guessed;" << endl;
	cout << "\tNow let the second player try to guess it." << endl;
	cout << "\tIf guesser needs help, he can ask it for a computer" << endl;
	cout << "\n\t 1.Go to the menu. \n 2.Exit the game" << endl;
	bool x;
	cin >> x;
	if (x) {
		menu men;
		men.launch();
	}
	else
	{
		exit(1);
	};
	system("pause");

	system("cls");
}