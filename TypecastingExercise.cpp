// Write a complete C++ program that meets the following requirements:
// 1. Prompt the user to input a lowercase letter.
// 2. Input and store that letter in memeory
// 3. Output: "The Uppercase Version of that letter is:"

#include <iostream>

int main() {
	char lowercaseLetter;
	
	std::cout << "Enter a lowercase letter: " << '\n';
	std::cin >> lowercaseLetter;

	char uppercaseVersion = lowercaseLetter - 32;

	std::cout << "Uppercase Version: " << uppercaseVersion;

	return 0;
}