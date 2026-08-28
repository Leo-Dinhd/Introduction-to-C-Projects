// Exam 1 Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//switch practice

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int sizeChoice;
	int proteinChoice;
	double price = 0;
	double taxRate = 0.07;

	cout << "Choose a smoothie size:\n";
	cout << "1. Small ($3.50)\n";
	cout << "2. Medium ($4.75)\n";
	cout << "3. Large ($6.00)\n";
	cin >> sizeChoice;

	switch (sizeChoice) {
	case 1:
		price = 3.50;
		break;
	case 2:
		price = 4.75;
		break;
	case 3:
		price = 6.00;
		break;
	default:
		cout << "Invalid size selection\n";
		return 0;
	}

	cout << "\nAdd protein powder for $1.25?\n";
	cout << "1. Yes\n";
	cout << "2. No\n";

	cout << "Enter choice: ";
	cin >> proteinChoice;

	// protein option
	switch (proteinChoice) {

	case 1:
		price = price + 1.25;
		break;

	case 2:
		break;

	default:
		cout << "Invalid option\n";
		return 0;
	}

	// add tax
	double total = price + (price * taxRate);

	cout << fixed << setprecision(2);

	cout << left << setw(12) << "\nTotal cost: " << right << setw(8) << total << endl;

	return 0;
}