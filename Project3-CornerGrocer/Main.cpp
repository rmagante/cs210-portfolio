// Ryan Magante
// CS210 Project Three
// Corner Grocer Program
// 06/21/25

#include "CornerGrocer.h" // Include custom CornerGrocer class header
#include <iostream>       // For input/output 


void ShowMenu() {
	std::cout << "\n--- Corner Grocer Menu ---\n";
	std::cout << "1. Look up item frequency\n";
	std::cout << "2. Display all item frequencies\n";
	std::cout << "3. Display histogram\n";
	std::cout << "4. Exit\n";
	std::cout << "Enter your choice: ";
}

int main() {
	CornerGrocer grocer;    // Create CornerGrocer object
	grocer.LoadData("CS210_Project_Three_Input_File.txt");  // Load item data from input file
	grocer.WriteBackupFile("frequency.dat");                // Create backup of frequency data

	int choice;             // Store user's menu selection
	std::string item;       // Store item name for frequency lookup

	do {
		ShowMenu();
		std::cin >> choice; // Get users choice

		switch (choice) {
		case 1:         // look up specific item frequency
			std::cout << "Enter item name: ";
			std::cin >> item;
			std::cout << item << " frequency: "
				<< grocer.GetItemFrequency(item) << std::endl;
			break;

		case 2:         // display all item frequencies
			grocer.PrintAllFrequencies();
			break;

		case 3:         // Display visual histogram
			grocer.PrintHistogram();
			break;

		case 4:         // Exit program
			std::cout << "Exiting program.\n";
			break;

		default:        // Handle invalid selections
			std::cout << "Invalid option. Try again.\n";
		}
	} while (choice != 4);  // Continue until user chooses to exit

	return 0;
}
