#include <iostream>
#include <ctime>

int  returnWinner(int p1, int p2);

int main() {
	int p1_int_val, p2_int_val;
	std::string p1_str_val, p2_str_val;
	
	srand(time(NULL));

	p1_int_val = rand() % 3; // 0. Rock, 1. Paper, 2. Scissors
	p2_int_val = rand() % 3; // 0. Rock, 1. Paper, 2. Scissors

	// Convert int values to string values for display for player 1
	if (p1_int_val == 0) {
		p1_str_val = "Rock";
	}
	else if (p1_int_val == 1) {
		p1_str_val = "Paper";
	}
	else {
		p1_str_val = "Scissors";
	}

	// Convert int values to string values for display for player 2
	if (p2_int_val == 0) {
		p2_str_val = "Rock";
	}
	else if (p2_int_val == 1) {
		p2_str_val = "Paper";
	}
	else {
		p2_str_val = "Scissors";
	}

	std::cout << "Player 1 chose: " << p1_str_val << '\n';
	std::cout << "Player 2 chose: " << p2_str_val << '\n';
	std::cout << "The Winner is: Player " << returnWinner(p1_int_val, p2_int_val) << '\n';

	return 0;
}

int  returnWinner(int p1, int p2) {
	if (p1 == p2) {
		return 0; // Tie
	}
	else if (p1 == 0 && p2 == 2 || p1 == 1 && p2 == 0 || p1 == 2 && p2 == 1) {
		return 1; // Player 1 wins
	}
	else {
		return 2; // Player 2 wins
	}
}