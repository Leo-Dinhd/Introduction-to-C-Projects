//Exercise 3: Campus Coffee Kiosk
//Ask for drink size (S, M, or L) and whether whipped
// cream is added (1/0). Print the total.
//Goal: Practice if / else if / else and clean iomanip formatting.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	//definitions
	char size;
	bool whippedCream;
	double whippedCreamPrice;
	double basePrice;
	double total;

	//cin statements
	cout << "What is your drink size? " << endl;
	cin >> size;
	cout << "Is there whipped cream?(1 = yes, 0 = no) " << endl;
	cin >> whippedCream;

	//if, if else, and else statements
	if (size == 'S') {
		basePrice = 2.50;
	}
	else if (size == 'M') {
		basePrice = 3.50;
	}
	else if (size == 'L') {
		basePrice = 4.50;
	}
	else
		cout << "Please enter either S, M or L";

	if (whippedCream = 1) {
		whippedCreamPrice = 0.75;
	}
	else if (whippedCream = 0) {
		whippedCreamPrice = 0;
	}
	else
		cout << "Please enter either 1 or 0";

	//calculations
	total = whippedCreamPrice + basePrice;


	//formatted outputs
	cout << fixed << setprecision(2);
	cout << "COFFEE ORDER SUMMARY" << endl;
	cout << "-----------------------" << endl;
	cout << "Drink size: " << size << endl;
	cout << "Base price: " << basePrice << endl;
	cout << "Whipped cream: " << whippedCreamPrice << endl;
	cout << "-----------------------" << endl;
	cout << "TOTAL: " << total << endl;

	return 0;
}