// Write a complete C++ program that will allow the user to check if any string of characters is a palindrome.
// The string can be either a string object or an array of characters.A palindrome is a sequence of characters that reads
// the same forwards and backwards.The program will run in a loop until the user decides that he wants to quit.

#include <iostream>
#include <string>

using namespace std;

bool quitProgram() {
	char answer;
	cout << "Do you want to continue? (Y/y)\n";
	cin >> answer;
	if (answer == 'Y' || answer == 'y') {
		return true;
	}
	else
		return false;
}

string isPalindrome(std::string& str) {
	if (equal(str.begin(), str.begin() + str.size() / 2, str.rbegin())) {
		return "You entered a Palindrome\n";
	}
	else
		return "You did not enter a Palindrome\n";
}

int main() {
	bool quit = false;
	string str;
	do {
		cout << "Enter a string: \n";
		cin >> str;
		cout << isPalindrome(str);
		quit = quitProgram();
	} while (quit);
	return 0;
}