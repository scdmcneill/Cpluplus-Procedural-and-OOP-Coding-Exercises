// Redesign the selection sort function that is found in Program 8-5 such that the outer loop will call
// a function. This function will do the work of the inner loop.
// The purpose of this exercise is to help you understand how Selection Sort works.
// Program 8-5:
// void selectionSort(int array[], int size) {
//     int startScan, minIndex, minValue;
//     for (startScan = 0; startScan < (size - 1); startScan++) {
//		 minIndex = startScan;
//		 minValue = array[startScan];
//		 for (int index = startScan + 1; index < size; index++) {
//			 if (array[index] < minValue) {
//				 minValue = array[index];
//				 minIndex = index;
//			 }
//		 }
//		 array[minIndex] = array[startScan];
//		 array[startScan] = minValue;
//	 }
//	}

#include <iostream>

// Function prototypes
void selectionSort(int array[], int size);
void findMinIndexAndValue(int array[], int size, int startScan, int& minIndex, int& minValue);

int main() {
	// Example Input
	int array[] = { 64, 25, 12, 22, 11 };
	
	selectionSort(array, 5);

	// Example Output
	std::cout << "Sorted Array: " << '\n';
	for (int i = 0; i < 5; i++) {
		std::cout << array[i] << ' ';
	}

	return 0;
}

void selectionSort(int array[], int size) {
	int startScan, minIndex, minValue;
	for (startScan = 0; startScan < (size - 1); startScan++) {
		findMinIndexAndValue(array, size, startScan, minIndex, minValue);
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

void findMinIndexAndValue(int array[], int size, int startScan, int& minIndex, int& minValue) {
	minIndex = startScan;
	minValue = array[startScan];
	for (int index = startScan + 1; index < size; index++) {
		if (array[index] < minValue) {
			minValue = array[index];
			minIndex = index;
		}
	}
}