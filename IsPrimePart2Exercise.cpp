#include <iostream>
#include <cmath>
#include <vector>

bool isPrime(int num);

int main() {
	bool quit = false;
	

	do {
		int userNumber;
		std::vector<int> primeNumbers;
		

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
			for (int i = 1; i <= userNumber; i++) {
				if (isPrime(i)) {
					primeNumbers.push_back(i);
				}
			}
		}

		std::cout << "The following are all of the prime numbers from 1 up to " << userNumber << ": " << '\n';
		
		for (int prime : primeNumbers) {
			std::cout << prime << ' ';
		}
		std::cout << '\n';

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