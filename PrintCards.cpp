#include <iostream>
#include "PrintCards.h"
using namespace std;
void PrintSuit() {
	char suit[8][11]{
		{ '#','#','#','#','#','#','#','#','#','#','#' },
		{ '#','#','#','#','#','#','#','#','#','#','#' },
		{ '#','#','#','#','#','#','#','#','#','#','#' },
		{ '#','#','#','#','#','#','#','#','#','#','#' },
		{ '#','#','#','#','#','#','#','#','#','#','#' },
		{ '#','#','#','#','#','#','#','#','#','#','#' },
		{ '#','#','#','#','#','#','#','#','#','#','#' },
		{ '#','#','#','#','#','#','#','#','#','#','#' }
	};
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 11; j++) {
			cout << suit[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void PrintSpades() {
	char spades[8][11]{
		{ '#','#','#','#','#',' ','#','#','#','#','#' },
		{ '#','#','#','#',' ',' ',' ','#','#','#','#' },
		{ '#','#',' ',' ',' ',' ',' ',' ',' ','#','#' },
		{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
		{ '#','#',' ','#','#',' ','#','#',' ','#','#' },
		{ '#','#','#','#','#',' ','#','#','#','#','#' },
		{ '#','#','#','#',' ',' ',' ','#','#','#','#' },
		{ '#','#','#','#','#','#','#','#','#','#','#' }
	};
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 11; j++) {
			cout << spades[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void PrintHearts() {
	char hearts[8][11]{
		{ '#','#','#','#','#','#','#','#','#','#','#' },
		{ '#','#',' ',' ','#','#','#',' ',' ','#','#' },
		{ '#',' ',' ',' ',' ','#',' ',' ',' ',' ','#' },
		{ '#','#',' ',' ',' ',' ',' ',' ',' ','#','#' },
		{ '#','#','#',' ',' ',' ',' ',' ','#','#','#' },
		{ '#','#','#','#',' ',' ',' ','#','#','#','#' },
		{ '#','#','#','#','#',' ','#','#','#','#','#' },
		{ '#','#','#','#','#','#','#','#','#','#','#' }
	};
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 11; j++) {
			cout << hearts[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void PrintDiamonds() {
	char diamonds[8][11]{
		{ '#','#','#','#','#',' ','#','#','#','#','#' },
		{ '#','#','#','#',' ',' ',' ','#','#','#','#' },
		{ '#','#','#',' ',' ',' ',' ',' ','#','#','#' },
		{ '#','#',' ',' ',' ',' ',' ',' ',' ','#','#' },
		{ '#','#','#',' ',' ',' ',' ',' ','#','#','#' },
		{ '#','#','#','#',' ',' ',' ','#','#','#','#' },
		{ '#','#','#','#','#',' ','#','#','#','#','#' },
		{ '#','#','#','#','#','#','#','#','#','#','#' }
	};
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 11; j++) {
			cout << diamonds[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void PrintClubs() {
	char clubs[8][11]{
		{ '#','#','#','#',' ',' ',' ','#','#','#','#' },
		{ '#','#','#',' ',' ',' ',' ',' ','#','#','#' },
		{ '#','#','#','#',' ',' ',' ','#','#','#','#' },
		{ '#','#',' ','#','#',' ','#','#',' ','#','#' },
		{ '#',' ',' ',' ',' ',' ',' ',' ',' ',' ','#' },
		{ '#','#',' ','#','#',' ','#','#',' ','#','#' },
		{ '#','#','#','#',' ',' ',' ','#','#','#','#' },
		{ '#','#','#','#','#','#','#','#','#','#','#' }
	};
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 11; j++) {
			cout << clubs[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void PrintRank(int& n) {
	char r[11]{ '#','#','#','#','#','#','#','#','#','#' };
	for (int i = 0; i < 11; i++) {
		cout << r[i];
	}
	if (n > 10) {
		switch (n) {
		case 11:
			cout << "J" << "\n";
			break;
		case 12:
			cout << "Q" << "\n";
			break;
		case 13:
			cout << "K" << "\n";
			break;
		case 14:
			cout << "A" << "\n";
			break;
		}
	}
	else if ((n <= 10) && (n >= 6)) {
		cout << n << "\n";
	}
}
void PrintCard(int& a, int& n) {
	switch (a) {
	case 1:
		PrintRank(n);
		PrintSpades();
		break;
	case 2:
		PrintRank(n);
		PrintSpades();
		break;
	case 3:
		PrintRank(n);
		PrintSpades();
		break;
	case 4:
		PrintRank(n);
		PrintSpades();
		break;
	case 5:
		PrintRank(n);
		PrintSpades();
		break;
	case 6:
		PrintRank(n);
		PrintSpades();
		break;
	case 7:
		PrintRank(n);
		PrintSpades();
		break;
	case 8:
		PrintRank(n);
		PrintSpades();
		break;
	case 9:
		PrintRank(n);
		PrintSpades();
		break;
	case 10:
		PrintRank(n);
		PrintHearts();
		break;
	case 11:
		PrintRank(n);
		PrintHearts();
		break;
	case 12:
		PrintRank(n);
		PrintHearts();
		break;
	case 13:
		PrintRank(n);
		PrintHearts();
		break;
	case 14:
		PrintRank(n);
		PrintHearts();
		break;
	case 15:
		PrintRank(n);
		PrintHearts();
		break;
	case 16:
		PrintRank(n);
		PrintHearts();
		break;
	case 17:
		PrintRank(n);
		PrintHearts();
		break;
	case 18:
		PrintRank(n);
		PrintHearts();
		break;
	case 19:
		PrintRank(n);
		PrintDiamonds();
		break;
	case 20:
		PrintRank(n);
		PrintDiamonds();
		break;
	case 21:
		PrintRank(n);
		PrintDiamonds();
		break;
	case 22:
		PrintRank(n);
		PrintDiamonds();
		break;
	case 23:
		PrintRank(n);
		PrintDiamonds();
		break;
	case 24:
		PrintRank(n);
		PrintDiamonds();
		break;
	case 25:
		PrintRank(n);
		PrintDiamonds();
		break;
	case 26:
		PrintRank(n);
		PrintDiamonds();
		break;
	case 27:
		PrintRank(n);
		PrintDiamonds();
		break;
	case 28:
		PrintRank(n);
		PrintClubs();
		break;
	case 29:
		PrintRank(n);
		PrintClubs();
		break;
	case 30:
		PrintRank(n);
		PrintClubs();
		break;
	case 31:
		PrintRank(n);
		PrintClubs();
		break;
	case 32:
		PrintRank(n);
		PrintClubs();
		break;
	case 33:
		PrintRank(n);
		PrintClubs();
		break;
	case 34:
		PrintRank(n);
		PrintClubs();
		break;
	case 35:
		PrintRank(n);
		PrintClubs();
		break;
	case 36:
		PrintRank(n);
		PrintClubs();
		break;
	}
}