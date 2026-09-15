// Leo_Dinh_assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Weekly Electricity Usage Calculator - collects 7 days of kWh usage,
//validates the input, then reports the total, average, and usage category.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//dailyUsage holds one day's entry at a time; total Usage is the running total
	float dailyUsage, averageDailyUsage, totalUsage;
	string usageCategory;
	string continueChoice;

	// Welcome message print
	cout << "Welcome to the Weekly Electricity Usage Calculator!" << endl;
	cout << endl;

	do {
		// Reset the running total at the start of every week.
		totalUsage = 0;

		// for loop collects daily values
		for (int day = 1; day <= 7; day++) {
			cout << "Enter electricity usage for Day " << day << ": ";
			cin >> dailyUsage;

			// while loop runs until the value is valid
			// values outside of 0-100 fail
			while (dailyUsage < 0 || dailyUsage > 100) {
				cout << "Invalid usage! Please enter a value between 0 and 100." << endl;
				cout << "Enter electricity usage for Day " << day << ": ";
				cin >> dailyUsage;
			}

			// Add value to the running total
			totalUsage += dailyUsage;
		}
		
		averageDailyUsage = totalUsage / 7;

		//Categorization of usage into 3 categories
		if (averageDailyUsage < 15) {
			usageCategory = "Low Usage";
		}
		else if (averageDailyUsage < 30) {
			usageCategory = "Moderate Usage";
		}
		else {
			usageCategory = "High Usage";
		}

		// Weekly summary
		cout << endl;
		cout << "Weekly Electricity Usage Summary" << endl;
		cout << endl;
		cout << fixed << setprecision(2); // forces two decimal places on the numbers
		cout << "Total Usage: " << totalUsage << " kWh" << endl;
		cout << "Average Daily Usage: " << averageDailyUsage << " kWh" << endl;
		cout << "Usage Category: " << usageCategory << endl;
		cout << endl;

		// Ask whether to run again, and keep asking until the answer is y/Y/n/N
		cout << "Would you like to calculate another week? (y/n): ";
		cin >> continueChoice;

		while (continueChoice != "y" && continueChoice != "Y" &&
			continueChoice != "n" && continueChoice != "N") {
			cout << "Invalid choice! Please enter y or n." << endl;
			cout << "Would you like to calculate another week? (y/n): ";
			cin >> continueChoice;
		}

		cout << endl; 

	} while (continueChoice == "y" || continueChoice == "Y"); // do-while repeats the whole calculator

	cout << "Goodbye!" << endl;

	return 0;
}

