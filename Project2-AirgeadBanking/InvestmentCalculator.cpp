// Developer: Ryan Magante
// Project: Project Two - Airgead Banking App
// Date: 6/7/25
// Description: Function definitions for InvestmentCalculator class.

#include <iostream>
#include <iomanip>
#include "InvestmentCalculator.h"
using namespace std;

// Store the user-input values in private member variables
void InvestmentCalculator::setUserData(double t_initial, double t_monthly, double t_interest, int t_years) {
	m_initialInvestment = t_initial;
	m_monthlyDeposit = t_monthly;
	m_annualInterest = t_interest;
	m_numYears = t_years;
}

// Display the input values back to the user
void InvestmentCalculator::displayInputSummary() const {
	cout << "---------------------------------------\n";
		cout << "Input Summary\n";
		cout << "----------------------------------------\n";
		cout << "Initial Investment Amount: $" << m_initialInvestment << endl;
	cout << "Monthly Deposit: $" << m_monthlyDeposit << endl;
	cout << "Annual Interest Rate: " << m_annualInterest << "%" << endl;
	cout << "Number of Years: " << m_numYears << endl;
	cout << "Press Enter to continue...";
		cin.ignore();
	cin.get();
}

void InvestmentCalculator::displayWithoutMonthlyDeposits() const {
	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
		cout << "=========================================================\n";
		cout << left << setw(6) << "Year"
		<< setw(22) << "Year End Balance"
		<< "Year End Earned Interest" << endl;
	cout << "---------------------------------------------------------\n";

		double yearEndBalance = m_initialInvestment;
	double interestEarned;

	for (int year = 1; year <= m_numYears; ++year) {
		interestEarned = yearEndBalance * (m_annualInterest / 100);
		yearEndBalance += interestEarned;

		cout << left << setw(6) << year
			<< "$" << setw(21) << fixed << setprecision(2) << yearEndBalance
			<< "$" << fixed << setprecision(2) << interestEarned << endl;
	}
}


void InvestmentCalculator::displayWithMonthlyDeposits() const {
	cout << "\nBalance and Interest With Additional Monthly Deposits\n";
		cout << "======================================================\n";
		cout << left << setw(6) << "Year"
		<< setw(22) << "Year End Balance"
		<< "Year End Earned Interest" << endl;
	cout << "------------------------------------------------------\n";

		double yearEndBalance = m_initialInvestment;
	double totalInterest = 0;

	for (int year = 1; year <= m_numYears; ++year) {
		double yearlyInterest = 0;

		for (int month = 1; month <= 12; ++month) {
			yearEndBalance += m_monthlyDeposit;
			double monthlyInterest = yearEndBalance * (m_annualInterest / 100) / 12;
			yearEndBalance += monthlyInterest;
			yearlyInterest += monthlyInterest;
		}

		cout << left << setw(6) << year
			<< "$" << setw(21) << fixed << setprecision(2) << yearEndBalance
			<< "$" << fixed << setprecision(2) << yearlyInterest << endl;
	}
}

