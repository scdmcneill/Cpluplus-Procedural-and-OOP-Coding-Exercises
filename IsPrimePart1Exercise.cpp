// Write a C++ program that uses a function called IsPrime to determine if a number is prime or not.
// IsPrime takes in an integer as an argument.IsPrime returns true if the number inputted is
// prime.It returns false otherwise.
// The main function will call IsPrime in a loop and use the returned value to output a message
// indicating if the number is prime or not.The main function will continue to use the loop until
// the user indicates that they want to quit.You can assume that the user will always enter a
// positive integer.

#include <iostream>
#include <cmath>

bool isPrime(int num);

int main() {
	bool quit = false;
	int userNumber;

	do {
		std::cout << "Enter a positive integer to check if it's prime (or enter 0 to exit)" << '\n';
		std::cin >> userNumber;

		if (userNumber == 0) {	//User wants to quit
			quit = true;
		}
		else if (userNumber < 0) {
			std::cout << "Please enter a positive integer!" << '\n';	//User input validation
			std::cin >> userNumber;
		}
		else {	//Check if number is a prime number
			if (isPrime(userNumber)) {
				std::cout << userNumber << " is a prime number!" << '\n';
			}
			else {
				std::cout << userNumber << " is NOT a prime number!" << '\n';
			}
		}
	} while (!quit);

	return 0;
}

bool isPrime(int num) {
	if (num == 1) {
		return false;
	}
	else if (num == 2) {
		return true;
	}
	else {
		for (int i = 2; i <= std::sqrt(num); i++) {
			if (num % i == 0) {
				return false;
			}
		}
	}
	return true;
}