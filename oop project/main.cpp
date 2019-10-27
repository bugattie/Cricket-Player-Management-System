#include "player.cpp"
#include "batsman.cpp"
#include "bowler.cpp"
#include "allrounder.cpp"
#include "edit.cpp"

#include <iostream>
#include <conio.h>

int main() {
	
	// Creating objects of Class Allrounder
	Allrounder A1;
	
	// Creating objects of Class EDIT
	Edit E1;
	
	Player p1;
	std::cout << p1.name;
	
	// Declaring Variable for Taking Input from User
	int input{0};
	
	for(int i = 0; ;i++) {
		
		std::cout << "\n============ MAIN MENU ============" << std::endl;
		std::cout << "\nPress the number between 1 to 5 to select the given below Menu" << std::endl;
		std::cout << "\n1. MAKE NEW PROFILE \n2. EDIT PROFILE \n3. SHOW PROFILE \n4. SEARCH PROFILE \n5. EXIT" << std::endl;
		std::cin >> input;
		
		system("cls");
		
		// Applying If-Else Condition for selecting the menu	
		if(input == 1) {
		
			std::cout << "\n============ PLAYER PROFILE ============" << std::endl;
			std::cout << "\n1. BATSMAN \n2. BOWLER \n3. ALLROUNDER" << std::endl;
			std::cin >> input;
			
			system("cls");
		
			if(input == 1) {
				
				std::cout<<"\n============ BATSMAN INFORMATION ============" << std::endl;
				A1.BatsmanInfo();
			}
			
			else if(input == 2) {
				
				std::cout << "\n============ BOWLER INFORMATION ============" << std::endl;
				A1.BowlerInfo();
			}
			
			else if(input == 3) {
				
				std::cout << "\n============ ALLROUNDER INFORMATION ============" << std::endl;
				A1.BatsmanInfo();
				A1.BowlerInfo();
			}
		
		}
		system("cls");
	
		if(input == 2) {
			
			std::cout << "\n============ EDITTING OPTION ============" << std::endl;
			std::cout << "\n1. EDIT BATSMAN INFO \n2. EDIT BOWLER INFO" << std::endl;
			std::cin >> input;
			
			system("cls");
			
			if(input == 1) {
				E1.editBat();
			}
			
			else if(input == 2) {
				E1.editBowl();
			}
		}
		system("cls");
		if(input == 3) {
			
			std::string readData, find;
			int flag=0;
			
			
			std::cout << "\nEnter name to be searched: ";
			std::cin >> find;
			
			std::ifstream if2("batsmanInfo.txt");
			
			
			if(if2.is_open()) {
				
				
				getline(if2, readData);
				std::cout << readData<< "\n";
				
				while(getline(if2, readData))
				{
					if(readData[0] == find[0] && readData[1] == find[1] && readData[2] == find[2])
						flag = 1;
						
					if(flag == 1) {
					
						std::cout << readData<< "\n";
						flag = 0;
					}
				}
				
				
			}
		}
		if(input == 4) {
			
			std::string findName, readData;
			
			std::cout << "Enter name to be searched: ";
			std::cin >> findName;
			
			std::ifstream if2("batsmanInfo.txt");
			
			if(if2.is_open()) {
				
				while(getline(if2, readData)) {
					
					if(readData.find(findName) != std::string::npos) {
						
						std::cout << "Profile found" << std::endl;
					}
				}
				if2.close();
			}
			else {
				
				std::cout << "Unable to open file" << std::endl;
			}
		}
		if(input == 5) {
			
			break;
		}
	}
	
	getch();
	return 0;
}

