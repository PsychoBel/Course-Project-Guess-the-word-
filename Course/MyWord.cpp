#include "stdafx.h"
#include "MyWord.h"
#include "GameOver.h"
#include "Help.h"
#include <iostream>
#include <cstring>
#include <ctime>
#include <string>
using namespace std;

 
MyWord::MyWord()
{
	
};

void MyWord::launch() {
	system("cls");
	srand(time(NULL));

	int N;
	string Mass;
	string Mass1;
	cout << "Enter your word:\n";
	cin >> Mass;
	N = Mass.size();
	Mass1 = Mass;
	string Mass2;
	Mass1.resize(N);
	Mass2.resize(N);
	int tmp = N;
	for (int i = 0; i < N; i++) {
		int t = rand() % tmp;
		Mass2[i] = Mass1[t];
		Mass1[t] = Mass1[tmp - 1];
		--tmp;
	};
	system("cls");
	string MIXword;
	bool x;
	do {
		cout << "\t Start game" << endl;
		cout << "\t Code word:" << Mass2 << endl;
		cout << "\n Do you need help? If 'No'- press 0;  If 'Yes'- press 1" << endl;
		cin >> x;
		cout << "\t Enter the word:" << endl;
		if (x == 1) {
			Help my;
			my.help(Mass);
		}
		cin >> MIXword;
		system("cls");
		if (MIXword != Mass) {
			cout << MIXword << ": is a wrong word!" << endl;
		}
	} while (MIXword != Mass);
	system("cls");
	GameOver game;
	game.launch();
}