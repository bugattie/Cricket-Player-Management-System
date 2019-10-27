#include "bowler.h"

Bowler :: Bowler() {
	
	bawAvg=0;
	wickets=0;
	brun=0;
	fwic=0;
	over=0;
	economy=0;
}

Bowler::~Bowler() {}

void Bowler::BowlerInfo() {
	
	playerInfo();
	
	std::fstream f3;
	f3.open("bowlerInfo.txt", std::ios::app);
	
	
	std::cout << "\nEnter the numbers of wicket he got: ";
	std::cin >> wickets;
	
	std::cout << "Enter the numbers of runs he gave: ";
	std::cin >> brun;
	
	std::cout << "How many times he got 5 wickets: ";
	std::cin >> fwic;
	
	std::cout << "Enter the numbers of overs he bowl: ";
	std::cin >> over;
	
	if(f3.is_open()) {
		
		f3 << "Number of wickets: " << wickets << std::endl;
		f3 << "Number of runs: " << brun << std::endl;
		f3 << "Fall of Wickets: " << fwic << std::endl;
		f3 << "Overs of wickets: " << over << std::endl;
	}
	else {
		
		// Displaying message in case of failing in opening in file
		std::cout << "Unable to open file";
	}
	
	//Formula for Calculating Economy
	economy = (brun / over);
	
	//Formula for Calculating Average
	bawAvg = (brun / wickets);
}

void Bowler::displayBawlerInfo(){
	
	std::cout << "\nPlayer Total no wickets: " << wickets << std::endl;
	std::cout << "Player Total no runs he gave: " << brun << std::endl;
	std::cout << "Player Total no of 5 wickets: " << fwic << std::endl;
	std::cout << "Player Total no overs he bowl: " << over << std::endl;
	std::cout << "Player Economy: " << economy << std::endl;
	std::cout << "Player Bawling Average: " << bawAvg << std::endl;
}
