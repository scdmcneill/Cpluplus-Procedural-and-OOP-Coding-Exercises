// Write a program that simulates 2 users rolling 2 dice each.
// 1. Declare two integer variables in order to store both user's rolls.
// These values should be between 2 and 12.
// 2. Use srand(), time(NULL), and rand() in order to generate numbers between 2 and 12 for both players.
// 3. Output to the console:
// A. The numerical value of each player's roll
// B. Which player had the higher roll or display a message stating that the rolls were equal.

#include <iostream>
#include <ctime>

int main() {
	srand(time(NULL));

	int player1roll = rand() % 10 + 2;
	int player2roll = rand() % 10 + 2;

	std::cout << "Player 1 Roll: " << player1roll << '\n';
	std::cout << "Player 2 Roll: " << player2roll << '\n';

	if (player1roll > player2roll) {
		std::cout << "Player 1 had the highest roll!" << '\n';
	}
	else if (player2roll > player1roll) {
		std::cout << "Player 2 had the highest roll!" << '\n';
	}
	else {
		std::cout << "It was a tie!" << '\n';
	}

	return 0;
}