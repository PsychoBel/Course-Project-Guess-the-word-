#include "stdafx.h"
#include "Menu.h"
#include "MyWord.h"
#include "Information.h"
#include <iostream>
using namespace std;

menu::menu()
{
	
}
void menu::launch()
{
	int x;
	cout << "\n\t1.Start game!" << endl;
	cout << "\n\t2.Information game " << endl;
	cout << "\n\t3.Close programm" << endl;
	cin >> x;
	if (x == 1) {
		MyWord word;
		word.launch();
	}
	if (x == 2) {
		Information inf;
		inf.launch();
	}
	if (x = 3) {
		exit(1);
	}
	system("pause");
}
