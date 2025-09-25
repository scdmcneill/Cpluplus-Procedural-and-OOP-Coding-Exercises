// Write a program that accomplishes the following :
// 1. Prompts the user to enter the length of 1 side of a square.
// 2. Input that value into an integer variable called side.
// 3. Calculate the perimeter using the formula : perimeter = 4 * side.
// 4. Output to the console screen the square’s perimeter.

#include <iostream>

int main() {
	int side;

	std::cout << "Enter the length of one side of a square: " << '\n';
	std::cin >> side;

	int perimeter = 4 * side;

	std::cout << "The perimeter of the square is: " << perimeter << '\n';	

	return 0;
}