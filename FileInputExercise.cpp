#include <iostream>
#include <fstream>

int main() {
	std::ifstream inputFile("words.txt");
	if (!inputFile) {
		std::cerr << "Error opening file!" << '\n';
	}
	
	int wordCount = 0;
	
	for (std::string word; inputFile >> word; ) {
		std::cout << word << ' ';
		++wordCount;
	}

	std::cout << "\nWord Count: " << wordCount << '\n';
	
	return 0;
}