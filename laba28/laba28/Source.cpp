#include <iostream>
#include <chrono>
#include <thread>
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define UNDERLINE "\033[4m"
#define RESET "\033[0m"
using namespace std;
using namespace this_thread;
using namespace chrono;


void color(string str, string color = "", int isUnderscored = 2) {
	string coloredStr;
	
	if (color == "red") {
		coloredStr = RED + str + RESET;
	}
	else if (color == "green") {
		coloredStr = GREEN + str + RESET;
	}
	else if (color == "yellow") {
		coloredStr = YELLOW + str + RESET;
	}
	else if (color == "blue") {
		coloredStr = BLUE + str + RESET;
	}
	else if (color == "") {
		coloredStr = str;
	}
	else {
		cout << "No such color!";
	}

	if (isUnderscored == 1) {
		coloredStr = UNDERLINE + coloredStr + RESET;
	}
	else if (isUnderscored == 2) {
		coloredStr = coloredStr;
	}
	else {
		cout << "Invalid parameter!";
	}

	cout << coloredStr;
}

int main() {
	color("Hello world!", "green", 1);
	return 0;
}