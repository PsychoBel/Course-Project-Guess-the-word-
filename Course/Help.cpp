#include "stdafx.h"
#include "Help.h"
#include "MyWord.h"
#include <iostream>
using namespace std;


Help::Help()
{
}
void Help::help(string Mass) {
	cout << "What letter would you like to know?\n";
	int digitNum;
	cin >> digitNum;
	cout << Mass[digitNum-1] << endl;;
}