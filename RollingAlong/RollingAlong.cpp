#include <iostream>

using namespace std;

int main(){
	cout << "Welcome to the dice statistics program!\n";
	cout << "Please enter how many dice you are rolling: ";
	int dice;
	cin >> dice;

	cout << "Please enter how many sides the dice have: ";
	int sides;
	cin >> sides;

	cout << "Do you want to add a constant modifier? (y/n): ";
	char choice;
	cin >> choice;
    if (choice == 'y' || choice == 'Y') {
		cout << "Please enter the modifier: ";
		int mod;
		cin >> mod;

		cout << "\nThank you! When rolling a " << dice << "d" << sides << " + " << mod << " your statistics will be: \n";
		double min = dice + mod;
		double avg = (min + (dice * sides) + mod) / 2;
		double max = dice * sides + mod;
		cout << "Minimum: " << min;
		cout << "\nAverage: " << avg;
		cout << "\nMaximum: " << max << "\n" << "\n";
	}
	else {
		cout << "\nThank you! When rolling a " << dice << "d" << sides << " your statistics will be: \n";
		double min = dice;
		double max = dice * sides;
		double avg = (min + max) / 2;
		cout << "Minimum: " << min;
		cout << "\nAverage: " << avg;
		cout << "\nMaximum: " << max << "\n" << "\n";
	}

	srand(time(0));
	int sum = 0;
	for (int i = 0; i < dice; i++) {
		int roll = rand() % sides + 1;
		//cout << "\nRoll " << i + 1 << ": " << roll;
		sum += roll;
	}

	if (dice == 1 && sides == 20) {
		if (sum == 1) {
			cout << "You rolled a critical failure!\n";
		}
		else if (sum == 20) {
			cout << "You rolled a critical success!\n";
		}
	}

	cout << "You rolled a " << sum << "!\n";

	cout << "\n\nThank you for using the DSP!";






	}