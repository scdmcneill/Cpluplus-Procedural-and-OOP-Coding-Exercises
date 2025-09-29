// Given the following array -> int numbers[1000];
// Rewrite the following lines of code such that it only uses 5 lines:
// numbers[0] = 2;
// cout << numbers[0] << ' ';
// numbers[1] = 4;
// cout << numbers[1] << ' ';
// numbers[2] = 6;
// cout << numbers[2] << ' ';
//... Assign multiples of 2 to each element of the numbers array
// numbers[999] = 2000;
// cout << numbers[999] << ' ';
// Use a loop to do this.

#include <iostream>

int main() {
	int numbers[1000];

	for (int i = 0; i < 1000; i++) {
		numbers[i] = 2 * (i + 1); // Store even numbers from 2 to 2000
	}

	return 0;
}