#include <iostream>
#include <string>
using namespace std;

void allocate2DArray(int**& Array, const unsigned int& numOfRows, const unsigned int& numOfCols) {
	Array = new int* [numOfRows];
	for (unsigned int i = 0; i < numOfRows; ++i) {
		Array[i] = new int[numOfCols]();
	}
}

void deallocate2DArray(int**& Array, const unsigned int& numOfRows) {
	if (Array != NULL) {
		for (unsigned int i = 0; i < numOfRows; ++i) {
			delete[] Array[i];
		}
		delete[] Array;
	}
	Array = nullptr;
}

int main() {
	int** twoDptr;
	unsigned int numOfRows = 2, numOfCols = 3;
	allocate2DArray(twoDptr, numOfRows, numOfCols);
	deallocate2DArray(twoDptr, numOfRows);
	return 0;
}