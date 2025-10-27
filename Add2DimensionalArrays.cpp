// Write a program that contains a function Summation. Summation will compute the sum of two 2-dimensional arrays
// and store the result in a separate array.
// Summation Function details:
// Input Parameters:
// 1.  2D array n1
// 2.  2D array n2
// 3.  2D array sum. This array will store the results
// this function does not return any value.

#include <iostream>

void summation(int n1[2][3], int n2[2][3], int sum[2][3]);

int main() {
	int n1[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int n2[2][3] = { {10, 20, 30}, {40, 50, 60} };

	int sum[2][3];

	summation(n1, n2, sum);

	// Display sum array
	std::cout << "Sum of the two arrays is: \n";
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << sum[i][j] << ' ';
		}
		std::cout << '\n';
	}
	return 0;
}

// summation function
void summation(int n1[2][3], int n2[2][3], int sum[2][3]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i][j] = n1[i][j] + n2[i][j];
		}
	}
}