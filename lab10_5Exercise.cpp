// Write a program that determines how many consonants are in an entered string of 50 characters or less. 
// Output the entered string and the number of consonants in the string.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countConsonants(const std::string& str) {
	int consonantCount = 0;
	std::vector<char> consonants = { 'b', 'c', 'd', 'f', 'g', 'h', 'j',
									'k', 'l', 'm', 'n', 'p', 'q', 'r',
									's', 't', 'v', 'w', 'x', 'z' };
	for (char c : str) {
		c = std::tolower(c);
		auto consSearch = std::find(consonants.begin(), consonants.end(), c);
		if (consSearch != consonants.end()) {
			consonantCount += 1;
		}
	}
	return consonantCount;
}

int main() {
	string testString = "testing to see if this works"; // 15 consonants
	cout << countConsonants(testString);

	return 0;
}