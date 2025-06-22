/// Developer : Ryan Magante
/// Date : 2025-05-24
/// Implements the clock class methods for time tracking and formatting, supports 12-hour and 24-hour
#include <iostream>
#include <iomanip>
#include "Clock.h"

Clock::Clock(int h, int m, int s) {
	hour = h % 24;
	minute = m % 60;
	second = s % 60;
}

void Clock::addHour() {
	hour = (hour + 1) % 24;
}

void Clock::addMinute() {
	minute++;
	if (minute >= 60) {
		minute = 0;
		addHour();
	}
}

void Clock::addSecond() {
	second++;
	if (second >= 60) {
		second = 0;
		addMinute();
	}
}
void Clock::display12Hour() const {
	int displayHour = hour % 12;
	if (displayHour == 0) displayHour = 12;
	std::string am_pm = (hour < 12) ? "AM" : "PM";

	std::cout << std::setw(2) << std::setfill('0') << displayHour << ":"
		<< std::setw(2) << std::setfill('0') << minute << ":"
		<< std::setw(2) << std::setfill('0') << second << " " << am_pm;
}



void Clock::display24Hour() const {
	std::cout << std::setw(2) << std::setfill('0') << hour << ":"
		<< std::setw(2) << std::setfill('0') << minute << ":"
		<< std::setw(2) << std::setfill('0') << second;
}

