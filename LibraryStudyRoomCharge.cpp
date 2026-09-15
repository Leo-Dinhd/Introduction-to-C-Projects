//Library study room charge, practice logical operators and decision rules
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	//definition
	double hours;
	char userType;
	double cleaningFee = 0;
	double roomCost;
	double total;

	//user inputs
	cout << "How many hours did you spend at the library? ";
	cin >> hours;
	cout << "What type of user are you?(1=student, 2=faculty, 3=guest)";
	cin >> userType;

	//calculations
	roomCost = hours * 5;

	//if statements
	if (userType == 1) {
		roomCost = roomCost * 0.5;
	}
	else if (userType == 2) {
		roomCost = roomCost * 0.75;
	}
	else if (userType == 3) {
		if (hours > 3) {
			cleaningFee = 5;
		}
	}

	total = roomCost + cleaningFee;

	//Output area
	cout << fixed << setprecision(2);
	cout << "STUDY ROOM CHARGE" << endl;
	cout << "-----------------" << endl;
	cout << "Hours : " << hours << endl;
	cout << "User type: " << userType << endl;
	cout << "Room cost: $" << roomCost << endl;
	cout << "Cleaning fee: $" << cleaningFee << endl;
	cout << "-----------------" << endl;
	cout << "TOTAL: $" << total << endl;

	return 0;
}