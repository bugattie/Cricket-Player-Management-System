#ifndef EDIT_H
#define EDIT_H

#include "batsman.h"
#include "bowler.h"

#include<iostream>

class Edit: public Batsman, public Bowler {
	
	// Declaring Protected Member
	protected:
		int data;
		int runs;
		int outs;
		int cents;
		int halfcents;
		int fwicks;
		int addwic;
		int bruns;
		int overs;
		
	// Declaring Public Variable
	public:
		// Intializing Non-Parameterized Constructor
		Edit();
		
		// Intializing Destructor
		~Edit();
		
		// Declaring function of editting batsman information
		void editBat();
		
		// Declaring function of editting bowler information
		void editBowl();
};
#endif
