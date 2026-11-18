//Introductory Programming Lab 12 -- Emerson Beesley -- November 12, 2026

#include <iostream>
using namespace std;

const int COLUMNS = 13;
const int ROWS = 4;

// findRowIndex: given user input, returns appropriate row index into arrays.
// @param thisRow - integer indicating row selected by the user
// @return appropriate index into 2-D array if the specified row is valid, ERROR otherwise
int findRowIndex(int thisRow);
// findSeatIndex: given user input, returns appropriate column index into seating chart array.
// @param thisSeat - character indicating selected seat within row
// @return appropriate index into 2-D array if the specified seat is valid, ERROR otherwise
int findSeatIndex(char thisSeat);
void displaySeatColumn(char seats[][COLUMNS], int column);

int main(void) {
	// Seats array [rows][columns]
	char seatLetters[ROWS][COLUMNS] = {
		{ 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A' },
		{ 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B' },
		{ 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', ' ' },
		{ 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', ' ' }
	};

	displaySeatColumn(seatLetters, COLUMNS);

	return 0;
}



int findSeatIndex(char thisSeat) {
	if (thisSeat == 'A') {
		return 'X';
	} else if (thisSeat == 'B') {
		return 'X';
	} else if (thisSeat == 'C') {
		return 'X';
	} else if (thisSeat == 'D') {
		return 'X';
	} else if (thisSeat == 'X') {
		return 'F'; // F for Filled
	} else {
		return 'E'; // E for Error
	}
}


void displaySeatColumn(char seats[][COLUMNS], int column) {
	for (int i = (ROWS - 1); i >= 0; i--) {
		for (int j = 0; j < COLUMNS; j++) {
			cout << seats[i][j] << " ";
		}

		cout << endl;

		if (i == 2) {
			cout << endl << "                  1 1 1 1" << endl << "1 2 3 4 5 6 7 8 9 0 1 2 3" << endl << endl;
		}
	}
}
