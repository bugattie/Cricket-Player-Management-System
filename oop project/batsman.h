#ifndef BATSMAN_H
#define BATSMAN_H
#include"player.h"

#include <iostream>
#include <string.h>

//Single Inheritance

class Batsman: public virtual Player {
	
	protected:
		// Declaring Protected member
		int run;
		int average;
		int out;
		int cen;
		int halfCen;
		
	// Declaring Public member
	public:
		//Declaring Non-Parameterized Constructor
		Batsman();
		
		//Declaring Destructor
		~Batsman();
		
		//Declaring Batsman Info Function
		void BatsmanInfo();
		
		//Declaring Display Info Function
		void displayBatsmanInfo();
};
#endif
