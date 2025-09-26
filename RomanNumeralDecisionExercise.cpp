// Write a program that asks the user to enter a number within the range of 1 through 10 (inclusive).
// Use if, else, or else if statements to display the Roman numeral equivalent of that number.
// Input Validation: Do not accept a number less than 1 or greater than 10.

#include <iostream>

int main() {
	int numberToConvert;
	std::string romanNumber;

	//Input validation. Prevents user entering number not in range.
	do {
		std::cout << "Enter a number within the range of 1-10 (inclusive) to convert to it's Roman " <<
			"Numeral equivalent: " << '\n';
		std::cin >> numberToConvert;

		if (numberToConvert < 1 || numberToConvert > 10) {
			std::cout << "Please enter a valid number within the range of 1-10 (inclusive)." << '\n';
		}

	} while (numberToConvert < 1 || numberToConvert > 10);

	//Inefficient Solution but meets software requirement.
	if (numberToConvert == 1) {
		romanNumber = "I";
	}
	else if (numberToConvert == 2) {
		romanNumber = "II";
	}
	else if (numberToConvert == 3) {
		romanNumber = "III";
	}
	else if (numberToConvert == 4) {
		romanNumber = "IV";
	}
	else if (numberToConvert == 5) {
		romanNumber = "V";
	}
	else if (numberToConvert == 6) {
		romanNumber = "VI";
	}
	else if (numberToConvert == 7) {
		romanNumber = "VII";
	}
	else if (numberToConvert == 8) {
		romanNumber = "VIII";
	}
	else if (numberToConvert == 9) {
		romanNumber = "IX";
	}
	else
		romanNumber = "X";

	std::cout << "Roman Numeral Equivalent: " << romanNumber << '\n';

	return 0;
}