// Random Numbers Exercise 1
// Write a program that uses srand(), time(NULL), and rand() in order to:
// 1. Output a random number between 1 and 6 (1 and 6 inclusive) to the console screen.
// 2. Output a random letter between A and Z (A and Z inclusive) to the console screen.

#include <iostream>
#include <ctime>

int main() {
	
	srand(time(NULL));

	int randomNumber = rand() % 6 + 1;

	std::cout << "Random Number: " << randomNumber << '\n';

	char randomLetter = rand() % 26 + 'A';

	std::cout << "Random Letter: " << randomLetter << '\n';

	return 0;
}