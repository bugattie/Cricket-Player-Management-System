#include "edit.h"

Edit :: Edit() {
	
	data = 0;
	runs = 0;
	outs = 0;
	cents = 0;
	halfcents = 0;
	fwicks = 0;
	addwic = 0;
	bruns = 0;
	overs = 0;
}

Edit::~Edit() {}


void Edit::editBat() {
	
	std::cout << "\n============ EDITTING BATSMAN INFORMATION ============" << std::endl;
	std::cout << "\n1.Edit RUNS \n2.EDIT CENTURIES \n3.HALF CENTURIES" << std::endl;
	std::cin >> data;
	
	system("cls");
	
	if(data == 1) {
		
		std::cout << "\nEnter Runs you want to add: ";
		std::cin >> runs;
		
		run = run + runs;
	}
	
    else if(data == 2) {
    	
		std::cout << "\nEnter Centuries you want to add: ";
		std::cin >> cents;
		
		cen = cen + cents;
	}
	
	else if(data == 3) {
		
		std::cout << "\nEnter Half Centuries you want to add: ";
		std::cin >> halfcents;;
		
		halfCen = halfCen + halfcents;
	}
}

void Edit :: editBowl() {
	
	std::cout << "============ EDITTING BOWLER INFORMATION ============" << std::endl;
	std::cout << "\n\n1.Edit WICKETS \n2.FIVE WICKETS \n3.OVERS \n4.RUNS OF OVERS" << std::endl;
	std::cin >> data;
	
	if(data == 1) {
		
		std::cout << "\nEnter Wickets you want to add: ";
		std::cin >> addwic;
		
		wickets = wickets + addwic;
	}
	
    else if(data == 2) {
	
		std::cout << "\nEnter no of 5 wickets you want to add: ";
		std::cin >> fwicks;
		
		fwic = fwic + fwicks;
	}
	
	else if(data == 3) {
		
		std::cout << "\nEnter Overs you want to add: ";
		std::cin >> overs;
		
		over = over + overs;
	}
	
	else if(data == 4) {
		
		std::cout << "\nEnter no of runs of overs you want to add: ";
		std::cin >> bruns;
		
		brun = brun + bruns;
	}
}
