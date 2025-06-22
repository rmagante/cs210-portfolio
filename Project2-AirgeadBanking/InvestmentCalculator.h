#pragma once
// Developer: Ryan Magante
// Project: Project Two - Airgead Banking App
// Date: 6/7/25
// Description: Header file defining the InvestmentCalculator class.

#ifndef INVESTMENT_CALCULATOR_H
#define INVESTMENT_CALCULATOR_H

class InvestmentCalculator {
public:
	// Sets user-provided investment details
	void setUserData(double t_initial, double t_monthly, double t_interest, int t_years);

	// Displays a summary of the entered input values
	void displayInputSummary() const;

	// Calculates and displays year-end balances and interest without monthly deposits
	void displayWithoutMonthlyDeposits() const;

	// Calculates and displays year-end balances and interest with monthly deposits
	void displayWithMonthlyDeposits() const;

private:
	// Investment variables (member data)
	double m_initialInvestment;
	double m_monthlyDeposit;
	double m_annualInterest;
	int m_numYears;
};

#endif // INVESTMENT_CALCULATOR_H
