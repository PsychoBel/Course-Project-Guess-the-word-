#include "stdafx.h"
#include "GameOver.h"
#include "menu.h"
#include "HeloGamer.h"
#include "MyWord.h"
#include "Help.h"
#include "Information.h"
#include <iostream>
#include "cl_application.h"
using namespace std;


GameOver::GameOver()
{
	
}
void GameOver::launch()
{
	cout << "You won!" << endl;
	cout << "Do you want to play again?" << endl;
	cout << "\n 1-yes, 0-no" << endl;
	bool z;
	cin >> z;
	if (!z) {
		cl_application  ob_application;
		ob_application.build_tree_objects();
		ob_application.exec_app();
		system("pause");
		exit(1);
	}
	else {
		menu myMenu;
		myMenu.launch();
		system("cls");
	}
}