#include <iostream>
using namespace std;
const int SIZE = 100;

void drawTrinangle();
void drawСross();
void drawTable();

int main() {
	drawTrinangle();
	drawСross();
	drawTable();
	return 0;
}

void drawTrinangle() {
	int triangle[SIZE][SIZE];
	int size;
	cout << "Enter the size of the square: ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			triangle[i][j] = 1;
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size - i - 1; j++) {
			triangle[i][j] = 0;
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << triangle[i][j] << ' ';
		}
		cout << "\n";
	}
}

void drawСross() {
	int сross[SIZE][SIZE];
	int size;
	cout << "Enter the size of the cross: ";
	cin >> size;
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			сross[i][j] = 0;
		}
	}
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (i == j || i + j == size - 1) {
				сross[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			cout << сross[i][j];
		}
		cout << endl;
	}
}

void drawTable() {
	int table[SIZE][SIZE];
	int width, lenght;
	cout << "Enter the width and lenght of the table: ";
	cin >> width >> lenght;
	int counter = 0;
	for (int i = 0; i < lenght; i++) {
		for (int j = 0; j < width; j++) {
			bool flag = (((i + j) % 2) != 0);
			table[i][j] = ((counter % 9 + 1) * flag);
			counter = counter + flag;
			cout << table[i][j];
		}
		cout << "\n";
	}
}



