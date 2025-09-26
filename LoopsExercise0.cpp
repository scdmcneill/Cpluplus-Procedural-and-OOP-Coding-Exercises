// Write a program that prompts the user to input a positive integer called num.
// This program will use a loop in order to validate the user input.
// This means that the program will continue to prompt the user to enter a positive integer
// until the user has inputted a positive integer for num.
// The program will then use a loop to output every even integer from 0 up to but not including
// num. You can assume that the user will only enter integers into the Console Window (not letters,
// punctuation marks, are special characters).

#include <iostream>

int main() {
	int num;

	//validation do-while loop
	do {
		std::cout << "Enter a POSITIVE integer: " << '\n';
		std::cin >> num;

		if (num < 0) {
			std::cout << "Error! Please enter a POSITIVE integer: " << '\n';
		}
	} while (num < 0);

	std::cout << "Every even integer from 0 to your num!: " << '\n';

	for (int i = 0; i < num; i++) {
		if (i % 2 == 0) {
			std::cout << i << ' ';
		}
	}

	return 0;
}