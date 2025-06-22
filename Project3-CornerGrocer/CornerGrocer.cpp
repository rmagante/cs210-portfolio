// Ryan Magante
// CS210 Project Three
// Corner Grocer Program
// 06/21/25

#include "CornerGrocer.h"
#include <iostream>
#include <fstream>
#include <algorithm> // For std::transform

CornerGrocer::CornerGrocer() {}

// convert any string to lowercase
std::string CornerGrocer::ToLower(const std::string& str) const {
	std::string lowerStr = str;
	std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
	return lowerStr;
}

void CornerGrocer::LoadData(const std::string& filename) {
	std::ifstream inFile(filename);
	if (!inFile.is_open()) {
		std::cerr << "Error: Could not open file '" << filename << "'\n";
		return;
	}

	std::string item;
	while (inFile >> item) {
		++itemFrequency[ToLower(item)]; //  Normalize to lowercase
	}

	inFile.close();
}

void CornerGrocer::WriteBackupFile(const std::string& filename) {
	std::ofstream outFile(filename);
	for (const auto& pair : itemFrequency) {
		outFile << pair.first << " " << pair.second << std::endl;
	}
	outFile.close();
}

int CornerGrocer::GetItemFrequency(const std::string& item) {
	std::string searchKey = ToLower(item); //normalize user input
	if (itemFrequency.count(searchKey)) {
		return itemFrequency[searchKey];
	}
	return 0;
}

void CornerGrocer::PrintAllFrequencies() {
	for (const auto& pair : itemFrequency) {

		std::cout << pair.first << " " << pair.second << std::endl;
	}
}

void CornerGrocer::PrintHistogram() {
	for (const auto& pair : itemFrequency) {
		std::cout << pair.first << " ";

		for (int i = 0; i < pair.second; ++i) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}
