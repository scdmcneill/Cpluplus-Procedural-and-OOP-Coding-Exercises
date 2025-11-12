#include <iostream>
#include <vector>

using namespace std;

struct Stock {
	string stockName;
	float day1Price;
	float day2Price;
	float percentChange;
};

float findPercentChange(const Stock& stock) {
	return ((stock.day2Price - stock.day1Price) / stock.day1Price) * 100;
}

Stock greatestChange(const vector<Stock>& stocks) {
	Stock greatestChange = stocks[0];
	for (int i = 0; i < stocks.size(); ++i) {
		for (const Stock& stock : stocks) {
			if (stock.percentChange > greatestChange.percentChange) {
				greatestChange = stock;
			}
		}
	}
	return greatestChange;
}

int main() {
	int stockCount;

	cout << "How many stocks would you like to enter?\n";
	cin >> stockCount;
	vector<Stock> stocks(stockCount);

	for (int i = 0; i < stockCount; ++i) {
		cout << "Enter Stock Name: \n";
		cin >> stocks[i].stockName;
		cout << "Enter Day 1 Price: $";
		cin >> stocks[i].day1Price;
		cout << "Enter Day 2 Price: $";
		cin >> stocks[i].day2Price;

		stocks[i].percentChange = findPercentChange(stocks[i]);
		
	}
	Stock bestStock = greatestChange(stocks);
	cout << "The stock with the greatest change was " << bestStock.stockName << '\n';
	cout << "Day 1 Price: " << bestStock.day1Price << '\n';
	cout << "Day 2 Price: " << bestStock.day2Price << '\n';
	cout << "Percent Change: " << bestStock.percentChange << '%';


	return 0;
}