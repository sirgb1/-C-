#include <iostream>
#include <cmath>
#include <Windows.h>
#include <chrono>
#include <thread>
#define YELLOW "\033[33m"
#define RESET "\033[0m"
using namespace std;
using namespace chrono;
using namespace this_thread;

int x, y;

void askForValues() {
	int n1, n2;
	cout << "Input the first value: "; cin >> n1;
	cout << "Input the second value: "; cin >> n2; cout << "\n";
	x = n1; y = n2;
}

void askForValue() {
	int n;
	cout << "Input the value: "; cin >> n; cout << "\n";
	x = n;
}


int main() {
	setlocale(0, "");
	int operation; 

	cout << "1) Add" << "\t" << "| +\n"
		 << "2) Subtract" << "\t" << "| -\n"
		 << "3) Multiply" << "\t" << "| *\n"
		 << "4) Divide" << "\t" << "| /\n"
		 << "5) Remainder" << "\t" << "| %\n"
		 << "6) Power\n"
		 << "7) Cube\n"
		 << "8) Sine\n"
		 << "9) Cosine\n\n";
	cout << ">>> "; cin >> operation; cout << "\n";

	switch (operation) {
	case 1:
		askForValues();
		sleep_for(seconds(1));
		cout << "Result: " << x << " + " << y << " = " << x + y;
		break;
	case 2:
		askForValues();
		sleep_for(seconds(1));
		cout << "Result: " << x << " - " << y << " = " << x - y;
		break;
	case 3:
		askForValues();
		sleep_for(seconds(1));
		system("cls");
		cout << "Result: " << x << " * " << y << " = " << x * y;
		break;
	case 4:
		askForValues();
		sleep_for(seconds(1));
		cout << "Result: " << x << " ÷ " << y << " = " << x / y;
		break;
	case 5:
		askForValues();
		sleep_for(seconds(1));
		cout << "Result: " << x << " % " << y << " = " << x % y;
		break;
	case 6:
		askForValues();
		sleep_for(seconds(1));
		cout << "Result: " << x << " ^ " << y << " = " << pow(x, y);
		break;
	case 7: 
		askForValue();
		sleep_for(seconds(1));
		cout << "Result: " << x << "^3 = " << pow(x, 3);
		break;
	case 8:
		askForValue();
		sleep_for(seconds(1));
		cout << "Result: sin(" << x << ") = " << sin(x);
		break;
	case 9:
		askForValue();
		sleep_for(seconds(1));
		cout << "Result: cos(" << x << ") = " << cos(x);
		break;
	}

	return 0;
}