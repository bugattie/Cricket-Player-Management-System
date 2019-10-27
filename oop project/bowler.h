#ifndef BOWLER_H
#define BOWLER_H

#include "player.h"

#include <iostream>

class Bowler: public virtual Player {
	
	protected:
		//Declaring Protected member 
		int bawAvg;
		int wickets;
		int brun;
		int fwic;
		int over;
		int economy;
		
		//Declaring Public member
		public:
			//Declaring Non-Parameterized Constructor
			Bowler();
			
			//Declaring Destructor
			~Bowler();
			
			//Declaring Batsman Info Function
			void BowlerInfo();
			
			//Declaring Display Info Function
			void displayBawlerInfo();	
};
#endif
