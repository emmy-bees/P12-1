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
	int columnNumber;
	char rowLetter;
	char testLetter;


	while (true) {
		displaySeatColumn(seatLetters, COLUMNS);
		cout << endl << "Enter a seat or Q to quit: ";
		cin >> columnNumber >> rowLetter;

		if (rowLetter == 'Q') {
			break;
		}

		if (findRowIndex(columnNumber) == 999) {
			cout << "Sorry, no such seat exists on the CRJ 200." << endl;
		}
		else {

			columnNumber = findRowIndex(columnNumber);

			if (rowLetter == 'A') {
				testLetter = findSeatIndex(seatLetters[0][columnNumber]);
			}
			else if (rowLetter == 'B') {
				testLetter = findSeatIndex(seatLetters[1][columnNumber]);
			}
			else if (rowLetter == 'C') {
				testLetter = findSeatIndex(seatLetters[2][columnNumber]);
			}
			else if (rowLetter == 'D') {
				testLetter = findSeatIndex(seatLetters[3][columnNumber]);
			}
			else {
				testLetter = 'E';
			}

			if (testLetter == 'E') {
				cout << "Sorry, no such seat exists on the CRJ 200." << endl;
			}
			else if (testLetter == 'F') {
				cout << "Sorry, that seat is already filled. Please pick another." << endl;
			}
			else if (testLetter == 'X') {
				if (rowLetter == 'A') {
					seatLetters[0][columnNumber] = 'X';
				}
				else if (rowLetter == 'B') {
					seatLetters[1][columnNumber] = 'X';
				}
				else if (rowLetter == 'C') {
					seatLetters[2][columnNumber] = 'X';
				}
				else if (rowLetter == 'D') {
					seatLetters[3][columnNumber] = 'X';
				}
			}
		}
		cout << endl;
	}
	

	return 0;
}

int findRowIndex(int thisRow) {
	if ((thisRow >= 1) && (thisRow <= 13)) {
		return (thisRow - 1);
	}
	else {
		return 999;
	}
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
