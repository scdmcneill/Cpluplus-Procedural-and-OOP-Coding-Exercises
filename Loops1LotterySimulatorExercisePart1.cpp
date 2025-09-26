// Write a C++ program that will simulate a lottery.
// 1. Prompt the user to choose 3 numbers that he thinks will be the lottery numbers(between 0 and
// 100, 100 is not included).
// 2. Store those numbers in 3 integer variables : num1, num2, num3.
// 3. Write a loop that will simulate a lottery commission choosing 3 random numbers.This loop will
// continue to run until the 3 numbers that the user chose gets selected.This loop will keep track of how
// many iterations it takes for the loop to generate those 3 numbers.
// 4. Output the number of iterations it took for the program to generate those numbers

#include <iostream>
#include <ctime>

int main() {
	srand(time(NULL));

	int userLotteryNumber1;
	int userLotteryNumber2;
	int userLotteryNumber3;

	//User number input and validation
	std::cout << "----First Lottery Number Selection----" << '\n';
	std::cout << "Enter a number between 0 and 100, 100 is NOT included: " << '\n';
	std::cin >> userLotteryNumber1;

	if (userLotteryNumber1 < 0 || userLotteryNumber1 >= 100) {
		do {
			std::cout << "Error! Please Enter a valid number between 0 and 99!" << '\n';
			std::cin >> userLotteryNumber1;
		} while (userLotteryNumber1 < 0 || userLotteryNumber1 >= 100);
	}

	std::cout << "----Second Lottery Number Selection----" << '\n';
	std::cout << "Enter a number between 0 and 100, 100 is NOT included: " << '\n';
	std::cin >> userLotteryNumber2;

	if (userLotteryNumber2 < 0 || userLotteryNumber2 >= 100) {
		do {
			std::cout << "Error! Please Enter a valid number between 0 and 99!" << '\n';
			std::cin >> userLotteryNumber2;
		} while (userLotteryNumber2 < 0 || userLotteryNumber2 >= 100);
	}

	std::cout << "----Third Lottery Number Selection----" << '\n';
	std::cout << "Enter a number between 0 and 100, 100 is NOT included: " << '\n';
	std::cin >> userLotteryNumber3;

	if (userLotteryNumber3 < 0 || userLotteryNumber3 >= 100) {
		do {
			std::cout << "Error! Please Enter a valid number between 0 and 99!" << '\n';
			std::cin >> userLotteryNumber3;
		} while (userLotteryNumber3 < 0 || userLotteryNumber3 >= 100);
	}
	
	//Lottery number generation and iteration until numbers match user's numbers
	long iterationCounter = 0;
	int lotteryPick1, lotteryPick2, lotteryPick3;
	
	do {
		lotteryPick1 = rand() % 100;
		lotteryPick2 = rand() % 100;
		lotteryPick3 = rand() % 100;
		iterationCounter++;
	} while (lotteryPick1 != userLotteryNumber1 ||
		lotteryPick2 != userLotteryNumber2 ||
		lotteryPick3 != userLotteryNumber3);
	
	std::cout << "----Results----" << '\n';
	std::cout << "It took " << iterationCounter << " iterations before you got a winning number!" << '\n';

	return 0;
}