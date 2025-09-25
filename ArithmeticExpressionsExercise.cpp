// Write a program that will :
// 1. Prompt the user to input a number of minutes.
// 2. Output the equivalent number of hours and minutes.

#include <iostream>

int main() {
	int totalMinutes;

	std::cout << "Enter the number of minutes: " << '\n';
	std::cin >> totalMinutes;

	int hours = totalMinutes / 60;
	int remainingMinutes = totalMinutes % 60;

	std::cout << totalMinutes << " minutes is equivalent to "
		<< hours << " hours and "
		<< remainingMinutes << " minutes." << '\n';

	return 0;
}