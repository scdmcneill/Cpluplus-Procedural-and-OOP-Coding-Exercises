// Modify the following code so that it outputs to the console screen the position of where
// the lowest value in the array is located
// const int SIZE = 10;
// int numbers[SIZE] = {-5, -50, 9, -2, -8, 8, 0, 10, 4, -35};
// int count, lowest;
// lowest = numbers[0];
// for (count = 1; count < SIZE; count++) {
//     if (numbers[count] < lowest) {
//         lowest = numbers[count];
//     }
// cout << lowest << endl;

#include <iostream>

int main() {
	const int SIZE = 10;
	int numbers[SIZE] = { -5, -50, 9, -2, -8, 8, 0, 10, 4, -35 };
	int count, lowest, position;

	lowest = numbers[0];

	for (count = 1; count < SIZE; count++) {
		if (numbers[count] < lowest) {
			lowest = numbers[count];
		}
	}

	std::cout << "The lowest value is " << lowest << '\n';

	for (count = 0; count < SIZE; count++) {
		if (numbers[count] == lowest) {
			position = count;
		}
	}

	std::cout << "This value is located at position: " << position << '\n';
	
	return 0;
}