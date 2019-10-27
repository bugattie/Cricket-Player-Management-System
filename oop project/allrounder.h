#ifndef ALLROUNDER_H
#define ALLROUNDER_H

#include "batsman.h"
#include "bowler.h"

#include <iostream>
#include <string>

class Allrounder : public Batsman, public Bowler {
		
	public:
		// Declaring Non-Parameterized Constructor
		Allrounder();
		
		// Declaring Destructor
		~Allrounder();
};
#endif
