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
// displaySeatColumn: given a 2-D mapping of the seating chart in the form [columns][rows],
// will print out a "column" of seats on one row of output (i.e., seat 'A' for all rows in the plane)
// @param seats - reference to a 2-D character array
// @param column - reference to which column of seats to display
void displaySeatColumn(char seats[][COLUMNS]);

int main(void) {
	// Seats array [rows][columns]
	char seatLetters[ROWS][COLUMNS] = {
		{ 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A' },
		{ 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B' },
		{ 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', ' ' },
		{ 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', ' ' }
	};

	displaySeatColumn(seatLetters);

	return 0;
}

void displaySeatColumn(char seats[][COLUMNS]) {
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
