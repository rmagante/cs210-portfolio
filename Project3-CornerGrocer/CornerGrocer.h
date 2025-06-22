// Ryan Magante
// CS210 Project Three
// Corner Grocer Program
// 06/21/25

#ifndef CORNER_GROCER_H
#define CORNER_GROCER_H

#include <string>
#include <map>

class CornerGrocer {
private:
	std::map<std::string, int> itemFrequency; // stores item names and their counts

		// helper to convert string to lowercase
	std::string ToLower(const std::string& str) const;

public:
	CornerGrocer(); // default constructor
	void LoadData(const std::string& filename); // reads data from input file
	void WriteBackupFile(const std::string& filename); // saves data to backup file
	int GetItemFrequency(const std::string& item); // returns count for specific item
	void PrintAllFrequencies(); // displays all items and their frequencies
	void PrintHistogram(); // shows frequency data as text histogram
};

#endif
