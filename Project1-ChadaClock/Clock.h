#pragma once
/// Developer : Ryan Magante
/// Date : 2025-05-24
/// Headerfile for clock class used in chada Tech clocks project
#ifndef CLOCK_H
#define CLOCK_H

class Clock {
private:
	int hour;
	int minute;
	int second;

public:
	Clock(int h = 0, int m = 0, int s = 0);

	void addHour();
	void addMinute();
	void addSecond();

	void display12Hour() const;
	void display24Hour() const;
};

#endif
