// Write a C++ program that will output a random even number for the set {2, 4, 6, 8, 10} to the 
// console window.

#include <iostream>
#include <ctime>

int main() {
	srand(time(NULL));

	int numberSet[] = { 2, 4, 6, 8, 10 };

	int selection = rand() % 5;

	std::cout << "Random even Number from set {2, 4, 6, 8, 10}: " << numberSet[selection] << '\n';

	return 0;
}