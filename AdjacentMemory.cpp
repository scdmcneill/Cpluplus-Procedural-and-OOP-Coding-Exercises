// Write a program that uses the sizeof function to provide evidence that array elements are stored 
// in adjacent memory locations.

#include <iostream>
using namespace std;

int main() {
	int numbers[5] = { 10, 20, 30, 40, 50 };

	cout << "Address of each array element:\n";
	for (int i = 0; i < 5; i++) {
		cout << "Element " << i << " (" << numbers[i] << ") is at address: " << &numbers[i] << '\n';
	}

	cout << "Size of each Element: " << sizeof(numbers[0]) << " bytes\n";
	cout << "Difference between consecutive addresses: " << '\n';

	for (int i = 0; i < 4; i++) {
		cout << "&numbers[" << i + 1 << "] - &numbers[" << i << "] = "
			<< (reinterpret_cast<char*>(&numbers[i + 1]) - reinterpret_cast<char*>(&numbers[i])) << " bytes\n";
	}
	return 0;
}
