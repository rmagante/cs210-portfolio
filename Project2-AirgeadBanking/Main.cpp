// Developer: Ryan Magante
// Project: Project Two - Airgead Banking App
// Date: 6/7/25
// Description: Main driver program to gather user input and run investment reports.

#include <iostream>
#include "InvestmentCalculator.h"
using namespace std;

int main() {
	InvestmentCalculator calculator;

	double initial, monthly, interest;
	int years;

	// Prompt the user for all required investment inputs
	cout << "Enter Initial Investment Amount: ";
	cin >> initial;

	cout << "Enter Monthly Deposit: ";
	cin >> monthly;

	cout << "Enter Annual Interest (%): ";
	cin >> interest;

	cout << "Enter Number of Years: ";
	cin >> years;

	// Store user input into the investment calculator
	calculator.setUserData(initial, monthly, interest, years);

	// Display the input summary for user confirmation
	calculator.displayInputSummary();

	// Display report without monthly deposits
	calculator.displayWithoutMonthlyDeposits();

	// Display report with monthly deposits
	calculator.displayWithMonthlyDeposits();

	return 0;
}
