// Write a program that uses a function called Output_Array_Info.
// Output_Array_Info Properties:
// Input Parameters:
// 1.  A pointer to an integer called array_ptr. This will be used to point to an array of integers.
// 2.  An integer that stores the size of the array.
// Steps Taken inside of the Output_Array_Info function:
// 1. Output every integer value for the array that array_ptr is pointing to. Do not use brackets([])
// to output the integer values. Use the indirect operator (*).
// 2. Output every memory address location for the array that array_ptr is pointing to.
// Use the indirection operator (*) not brackets([]).
// The main function will perform the following steps:
// 1. Declare an array of 5 integers called numbers.
// 2. Declare a pointer to an integer called pointer.
// 3. Have a pointer point to the numbers array.
// 4. Pass pointer and size of the array as parameters to the Output_Array_Info function.

#include <iostream>

void Output_Array_Info(int* array_ptr, int size);

int main() {
	int numbers[5] = { 10, 20, 30, 40, 50 };
	int* pointer = numbers;

	Output_Array_Info(pointer, 5);

	return 0;
}

void Output_Array_Info(int* array_ptr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << "The value " << *(array_ptr + i) << " is stored in address: " << (array_ptr + i) << '\n';
	}
	
}