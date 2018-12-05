#include "stdafx.h"
#include "cl_application.h"
#include <iostream>
using namespace std;

cl_application::cl_application()
{
	set_object_name("root");
	set_state(1);
}

void cl_application::build_tree_objects()       										
{
	myGame.set_object_name("Game");
	myGame.set_parent(this);

	myHelo.set_object_name("Hello");
	myHelo.set_parent(this);

	myHelp.set_object_name("Help");
	myHelp.set_parent(&myWord);

	myInf.set_object_name("Information");
	myInf.set_parent(this);

	myMenu.set_object_name("Menu");
	myMenu.set_parent(this);

	myWord.set_object_name("Word");
	myWord.set_parent(this);
}

int cl_application::exec_app()
{
	show_object_state();
	return 0;

}

void cl_application::show_object_state()
{
	show_state_next(this, 0);
}

void cl_application::show_state_next(cl_base * ob_parent, int level)   
{
	for (int i = 0; i < level; i++) {
		cout << "   ";
	}
	level++;

	cout << ob_parent->get_object_name() << endl;
	if (ob_parent->children.size() == 0) return;

	ob_parent->it_child = ob_parent->children.begin();              
	while (ob_parent->it_child != ob_parent->children.end())        
	{
		show_state_next((*(ob_parent->it_child)), level);
		ob_parent->it_child++; 
	}
}
