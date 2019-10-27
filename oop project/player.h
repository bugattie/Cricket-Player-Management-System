#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <fstream>
#include <string.h>


class Player {
	
	public:
		// Initializing public member of Player Class
		int match;
		std::string name;
		int age;
		
		// Intializing Non-Parameterized Constructor
		Player();
		
		// Intializing Destructor
		~Player();
		
		// Intializing Function of PlayerInformation
		void playerInfo();
		
		// Intializing Display Function to display the output
		void displayInfo();
		
};
#endif
