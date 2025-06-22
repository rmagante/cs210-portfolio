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