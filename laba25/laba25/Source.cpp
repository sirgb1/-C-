#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <random>
#include "ColorNumbers.h"
using namespace std;
using namespace this_thread;
using namespace chrono;


const int ROWS = 3;
const int COLUMNS = 4;


void sortArray(int array[ROWS][COLUMNS], int sortOrder) {
	int flattenedArray[ROWS * COLUMNS];

	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {
			flattenedArray[i * COLUMNS + j] = array[i][j];
		}
	}

	switch (sortOrder) {
	case 1:
		sort(flattenedArray, flattenedArray + (ROWS * COLUMNS), std::greater<int>());
		break;
	case 2:
		sort(flattenedArray, flattenedArray + (ROWS * COLUMNS));
		break;
	}

	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLUMNS; ++j) {
			array[i][j] = flattenedArray[i * COLUMNS + j];
		}
	}
}


void displayArray(int array[ROWS][COLUMNS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			cout << color(array[i][j]) << '\t';
		}
		cout << '\n';
	}
}


int main() {
	setlocale(0, "");
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distribution(0, 49);

	int array[ROWS][COLUMNS];
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			array[i][j] = distribution(gen);
		}
	}

	cout << "[" << y("+") << "] Сортировка: " << "\n\n";
	displayArray(array);

	cout << '\n';
	sleep_for(seconds(1));
	cout << "[" << y("1") << "] По убыванию" << '\n';
	cout << "[" << y("2") << "] По возрастанию" << '\n';
	cout << "[" << y("+") << "] Ввод: "; int sortOrder; cin >> sortOrder;
	sortArray(array, sortOrder);
	sleep_for(seconds(1));
	cout << "\n";
	displayArray(array);
	sleep_for(seconds(1));
	return 0;
}