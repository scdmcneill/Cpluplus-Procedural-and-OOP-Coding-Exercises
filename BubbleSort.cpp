// Create an algorithm for Bubble Sort. As you do, answer the following questions: 
// 1. What is the purpose of each loop in the algorithm?
// 2. When does each loop end?
// 3. What work is done during each loop iteration?

#include <iostream>
#include <vector>

void BubbleSort(int arr[], int sizeOfArray);

int main() {
	// Example Input
	int array[] = { 64, 34, 25, 12, 22, 11, 90 };

	BubbleSort(array, 7);

	//Example Output
	std::cout << "Sorted Array: " << '\n';
	for (int i = 0; i < 7; i++) {
		std::cout << array[i] << ' ';
	}
	
	
	return 0;
}

void BubbleSort(int arr[], int sizeOfArray) {
	for (int i = 0; i < sizeOfArray - 1; i++) { // inner loop purpose: to iterate through the array multiple times
		for (int j = 0; j < sizeOfArray - i - 1; j++) { // outer loop purpose: to compare adjacent elements and swap if needed
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j]; // could also use std::swap from <algorithm>
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
}