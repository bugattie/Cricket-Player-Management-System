#include "player.h"

// Defining Non-Parametrized Constructor
Player :: Player() {
	
	name = "";
	age = 0;
	match = 0;
}

// Defining Player Info Function
void Player :: playerInfo() {
	
	std::fstream f1;
	f1.open("batsmanInfo.txt", std::ios::app);
	
	// Taking Player Name as Input from user
	std::cout << "\nEnter The Player Name: ";
	std::cin >> name;
	
	// Taking Player Age as Input from user
	std::cout << "Enter The Player Age: ";
	std::cin >> age;
	
	// Taking Player Match as Input from user
	std::cout << "Enter The Player No of Matches: ";
	std::cin >> match;
	
	if(f1.is_open()) {
		
		f1 << "Name\t" << "Age\t" << "Matches\t" << "Total Runs\t" << "Centuries\t" << "Half Century\t " << "Out" << std::endl;
		f1 << name << "\t" << age << "\t" << match << "\t";
	}
	else {
		
		// Displaying message in case of failing in opening in file
		std::cout << "Unable to open file";
	}
	
	f1.close();
}

// Defining Display Function
void Player :: displayInfo() {
	
	std::cout << "\nPlayer Name is: " << name << std::endl;
	std::cout << "Player Age is: "<< age << std::endl;
	std::cout << "Player No of Matches is: " << match << std::endl;
}

// Defining destructor
Player :: ~Player() {}
