#include "batsman.h"

// Defining default constructor
Batsman::Batsman() {
	
	average = 0;
	run = 0;
	out = 0;
	cen = 0;
	halfCen = 0;
}

// Defining destructor
Batsman::~Batsman() {}


void Batsman :: BatsmanInfo() {
	
	playerInfo();
	
	std::fstream f2;
	f2.open("batsmanInfo.txt", std::ios::app);
	
	// Taking Input
	std::cout << "Enter Total Runs of his career: ";
	std::cin >> run;
	
	std::cout << "How many centuries he has: ";
	std::cin >> cen;
	
	std::cout << "How many Half centuries he has: ";
	std::cin >> halfCen;
	
	std::cout << "How many times he got out in his career: ";
	std::cin >> out;
	
	if(f2.is_open()) {
		
		f2 << run << "\t\t" << cen << "\t\t" << halfCen << "\t\t" << out << std::endl;
	}
	else {
		
		// Displaying message in case of failing in opening in file
		std::cout << "Unable to open file";
	}
	
	// Formula for Calculating Average
	average = (run / out);
}

void Batsman :: displayBatsmanInfo() {
	
	std::cout << "\nPlayer Total no of runs: " << run << std::endl;
	std::cout << "Player Total no of centuries: " << cen << std::endl;
	std::cout << "Player Total no of half centuries: " << halfCen << std::endl;
	std::cout << "No of times of Out: " << out << std::endl;
	std::cout << "Player Total Average: " << average << std::endl;
}
