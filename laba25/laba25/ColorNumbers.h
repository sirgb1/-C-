#pragma once
#include <iostream>
#include <string>
#include <sstream>
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define RED     "\033[31m"
#define WHITE   "\033[97m"
#define YELLOW  "\033[93m"
using namespace std;

string g(string str) {
	return GREEN + str + RESET;
}

string b(string str) {
	return BLUE + str + RESET;
}

string r(string str) {
	return RED + str + RESET;
}

string w(string str) {
	return WHITE + str + RESET;
}

string y(string str) {
	return YELLOW + str + RESET;
}

string color(int num) {
	string str;

	if (num >= 0 && num <= 9) {
		str = w(to_string(num));
	} if (num > 9 && num <= 19) {
		str = g(to_string(num));
	} if (num > 19 && num <= 29) {
		str = b(to_string(num));
	} if (num > 29 && num <= 39) {
		str = r(to_string(num));
	} if (num > 39 && num <= 49) {
		str = y(to_string(num));
	}

	return str;
}