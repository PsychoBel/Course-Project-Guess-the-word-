#pragma once
#ifndef CL_BASE_H
#define CL_BASE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;



class cl_base
{
public:
	vector < cl_base *  > children; 
	vector < cl_base *  > ::iterator it_child; 


	cl_base(cl_base * p_parent = 0);           
	void set_object_name(string object_name);  
	string get_object_name();                  
	void set_parent(cl_base * p_parent);       
	void add_child(cl_base * p_child);        
	void set_state(char c_state);          
	char get_state();

private:
	string object_name; 
	cl_base * p_parent;   
	char c_state; 
};

#endif 