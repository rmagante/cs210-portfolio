# Project 3 – Corner Grocer

### Developer Ryan Magante

This program analyzes a list of grocery items from a daily transaction log and tracks the frequency of each item. 

## Features

- Case-insensitive item frequency lookup
- Full item frequency listing
- Text-based histogram display
- Automatic creation of `frequency.dat` backup file

## Menu Options

1. Look up frequency of a single item  
2. Display all item frequencies  
3. Show a histogram using asterisks (*)  
4. Exit the program

## File Overview

- `main.cpp` – Displays the menu and handles user input
- `CornerGrocer.h` – Declares the `CornerGrocer` class and a lowercase helper
- `CornerGrocer.cpp` – Implements file reading, map-based counting, and output formatting
- `frequency.dat` – Automatically created at runtime


## 8-2 Journal:

## CS 210 Portfolio Reflection

**Project Summary:**  
The Corner Grocer project is a C++ application that tracks how often items are purchased from a grocery store transaction log. This program analyzes a list of grocery items from a daily transaction log and tracks the frequency of each item.

**What I Did Well:**  
Used C++ maps effectively for tracking, implemented a clear menu system, and structured the code cleanly across multiple files.

**Areas to Improve:**  
Improve file error handling and add dynamic scaling for the histogram. These changes would make the program more user-friendly.

**Most Challenging Part:**  
Formatting the histogram correctly. I resolved it through hours of testing.

**Transferable Skills:**  
File I/O, data structures, modular code design, and user input handling—all useful for future programming tasks.

**Code Quality:**  
Code is organized, and well-commented, for easy maintenance and future updates.