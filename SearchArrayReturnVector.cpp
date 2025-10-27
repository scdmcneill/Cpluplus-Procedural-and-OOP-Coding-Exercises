// Write a C++ function that will search a 5x5 2D array of integers. Name this function Search_Even. 
// The 5x5 array will be passed as an argument to that function. The funciton will return a vector that contains 
// every location of where all of the even numbers are located.
// If the array contains no even numbers, the vector will only contain the value -1.
// Write a complete C++ program that will demonstrate this function working. Output to the console screen
// a message indicating that the array contained no even numbers if this is the case. Alternatively,
// output to the console screen the locations of each even number (one x and one y coordinate per line).
// Making an algorith before attempting to code this program will be helpful to you.

#include <iostream>
#include <vector>

const int SIZE = 5;

std::vector<std::pair<int, int>> Search_Even(int arr[5][5]);

int main() {
	
	int array[SIZE][SIZE] = {
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5}
	};

	std::vector<std::pair<int, int>> evenLocations;

	evenLocations = Search_Even(array);

	// output results
	for (const auto& location : evenLocations) {
		if (location.first == -1 && location.second == -1) {
			std::cout << "The array contained no even numbers.\n";
		}
		else {
			std::cout << "Even number found at location: (" << location.first << ", " << location.second << ")\n";
		}
	}

	
	return 0;
}

// Search_Even function
std::vector<std::pair<int, int>> Search_Even(int arr[5][5]) {
	std::vector<std::pair<int, int>> locations;
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (arr[i][j] % 2 == 0) {
				locations.push_back(std::make_pair(i, j));
			}
		}
	}
	if (locations.empty()) {
		locations.push_back(std::make_pair(-1, -1));
	}

	return locations;
}