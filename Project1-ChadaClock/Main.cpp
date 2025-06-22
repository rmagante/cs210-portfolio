/// Developer : Ryan Magante
/// Date : 2025-05-24
/// Description : Clock program that displays both 12-hour and 24-hour formats.

#include <iostream>
#include "Clock.h"

void displayClocks(const Clock& clock12, const Clock& clock24) {
	std::cout << "**************************     **************************\n";
	std::cout << "*     12-Hour Clock      *     *      24-Hour Clock     *\n";
	std::cout << "*      ";
	clock12.display12Hour();
	std::cout << "       *     *        ";
	clock24.display24Hour();
	std::cout << "         *\n";
	std::cout << "**************************     **************************\n\n";
}

void displayMenu() {
	std::cout << "**************************\n";
	std::cout << "* 1 - Add One Hour       *\n";
	std::cout << "* 2 - Add One Minute     *\n";
	std::cout << "* 3 - Add One Second     *\n";
	std::cout << "* 4 - Exit Program       *\n";
	std::cout << "**************************\n";
	std::cout << "Select an option: ";
}

int main() {
	// Initialize both clocks to 00:00:00
	Clock clock12(0, 0, 0);
	Clock clock24(0, 0, 0);

	bool running = true;

	while (running) {
		displayClocks(clock12, clock24);
		displayMenu();

		int choice;
		std::cin >> choice;

		switch (choice) {
		case 1:
			clock12.addHour();
			clock24.addHour();
			break;
		case 2:
			clock12.addMinute();
			clock24.addMinute();
			break;
		case 3:
			clock12.addSecond();
			clock24.addSecond();
			break;
		case 4:
			running = false;
			std::cout << "Exiting program...\n";
			break;
		default:
			std::cout << "Invalid option. Please try again.\n";
		}

		std::cout << "\n";
	}

	return 0;
}
