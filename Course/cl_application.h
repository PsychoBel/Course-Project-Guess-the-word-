#pragma once
#ifndef CL_APPLICATION_H
#define CL_APPLICATION_H
#include "cl_base.h"
#include "GameOver.h"
#include "HeloGamer.h"
#include "Help.h"
#include "Information.h"
#include "menu.h"
#include "MyWord.h"


class cl_application : public cl_base
{
public:
	cl_application();               
	void build_tree_objects();    
	int exec_app();
	void show_object_state();     
private:
	void show_state_next(cl_base * ob_parent, int level); 
	GameOver myGame;
	HeloGamer myHelo;
	Help myHelp;
	Information myInf;
	menu myMenu;
	MyWord myWord;
};

#endif // CL_APPLICATION_H
