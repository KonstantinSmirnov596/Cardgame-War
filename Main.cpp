#include<iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <ctime>
#include "DealErase.h"
#include "FillArray.h"
#include "Prints.h"
#include "PrintCards.h"
#include "attCard.h"
#include "attCard2.h"
#include "Titles.h"
#include "CardMap.h"
using namespace std;

int main() {
	srand(time(NULL));
	const int n = 36;
	int k = 0;
	int round = 0;
	int attackCardPlayer = 0;
	int attackCardComp = 0;
	char ent;
	int pack[n]{};
	vector <int> player_pack;
	player_pack.reserve(36);
	vector <int>  comp_pack;
	comp_pack.reserve(36);
	vector<int> discardPile;
	discardPile.reserve(36);
	map <int, int> cardRank;
	CardMap(cardRank);
	cout << "Card game War" << endl;
	FillArray(pack, n);
	random_shuffle(begin(pack), end(pack));
	DealCards(pack, player_pack, comp_pack, n);
	War();
	PrintVector(player_pack);
	PrintVector(comp_pack);
	while ((player_pack.size() > 0) || (comp_pack.size() > 0)) {
		size_t i = 0;
		if (i < player_pack.size() && i < comp_pack.size()) {
			++round;
			if (round > 2000) {
				cout << "Draw";
				ent = cin.get();
				while (ent != 'x') {
					ent = cin.get();
				}
				return 0;
			}
			int nom1 = cardRank[player_pack[i]];
			int nom2 = cardRank[comp_pack[i]];

			cout << "You turn, press Enter or press x to exit";
			ent = cin.get();
			if (ent == '\n') {
				cout << "Round " << round << endl;
			}
			else if (ent == 'x') {
				return 0;
			}
			if ((nom1 == 6) && (nom2 == 14)) {
				nom1 += 10;
			}
			else if ((nom1 == 14) && (nom2 == 6)) {
				nom2 += 10;
			}
			if (nom1 > nom2) {
				cout << "Player abandoned the cards" << "\n";
				if (comp_pack.size() == 1) {
					YouWon();
					cout << "You won!!!! press x to exit";
					ent = cin.get();
					while (ent != 'x') {
						ent = cin.get();
					}
					return 0;
				}
				attackCardPlayer = player_pack[i];
				attackCardComp = comp_pack[i];
				if (discardPile.size() > 0) {
					player_pack.insert(end(player_pack), begin(discardPile), end(discardPile));
				}
				discardPile.clear();
				attCardErase(attackCardPlayer, attackCardComp, player_pack, comp_pack);
				cout << "Player:" << endl;
				PrintCard(cardRank[player_pack[i]], cardRank[player_pack[i]]);
				cout << "Hand:";
				PrintVector(player_pack);
				cout << "Comp:" << endl;
				PrintCard(cardRank[comp_pack[i]], cardRank[comp_pack[i]]);
				cout << "Hand:";
				PrintVector(comp_pack);
				attackCardPlayer = 0;
				attackCardComp = 0;
				cout << "Discard pile:";
				PrintVector(discardPile);
			}
			else if (nom1 < nom2) {
				cout << "Computer abandoned the cards" << endl;
				if (player_pack.size() == 1) {
					CompWon();
					cout << "Computer won.. Press x to exit";
					ent = cin.get();
					while (ent != 'x') {
						ent = cin.get();
					}
					return 0;
				}
				attackCardPlayer = player_pack[i];
				attackCardComp = comp_pack[i];
				if (discardPile.size() > 0) {
					comp_pack.insert(end(comp_pack), begin(discardPile), end(discardPile));
				}
				discardPile.clear();
				attCardErase(attackCardPlayer, attackCardComp, comp_pack, player_pack);
				cout << "Player:" << endl;
				PrintCard(cardRank[player_pack[i]], cardRank[player_pack[i]]);
				cout << "Hand:";
				PrintVector(player_pack);
				cout << "Computer:" << endl;
				PrintCard(cardRank[comp_pack[i]], cardRank[comp_pack[i]]);
				cout << "Hand:";
				PrintVector(comp_pack);
				attackCardPlayer = 0;
				attackCardComp = 0;
				cout << "Discard pile:";
				PrintVector(discardPile);
			}
			else if (nom1 == nom2) {
				cout << "Cards are equal" << endl;
				if (player_pack.size() < 4) {
					CompWon();
					cout << "Computer won.. Press x to exit";
					ent = cin.get();
					while (ent != 'x') {
						ent = cin.get();
					}
					return 0;
				}
				else if (comp_pack.size() < 4) {
					YouWon();
					cout << "You won!!!! Press x to exit";
					ent = cin.get();
					while (ent != 'x') {
						ent = cin.get();
					}
					return 0;
				}
				for (int i = 0; i < 3; i++) {
					if (player_pack.size() < 1) {
						CompWon();
						cout << "Computer won.. Press x to exit";
						ent = cin.get();
						while (ent != 'x') {
							ent = cin.get();
						}
						return 0;
					}
					else if (comp_pack.size() < 1) {
						YouWon();
						cout << "You won!!!! Press x to exit";
						ent = cin.get();
						while (ent != 'x') {
							ent = cin.get();
						}
						return 0;
					}
					cout << "Player:" << endl;
					PrintSuit();
					cout << "Hand:";
					PrintVector(player_pack);
					cout << "Computer:" << endl;
					PrintSuit();
					cout << "Hand:";
					PrintVector(comp_pack);
					attackCardPlayer = player_pack[i];
					attackCardComp = comp_pack[i];
					attCardErase2(attackCardPlayer, attackCardComp, discardPile, player_pack, comp_pack);
					attackCardPlayer = 0;
					attackCardComp = 0;
					cout << "Player:" << endl;
					cout << "Hand:";
					PrintVector(player_pack);
					cout << "Computer:" << endl;
					cout << "Hand:";
					PrintVector(comp_pack);
					cout << "Discard pile:";
					PrintVector(discardPile);
					if (player_pack.size() < 3) {
						CompWon();
						cout << "Computer won.. Press x to exit";
						ent = cin.get();
						while (ent != 'x') {
							ent = cin.get();
						}
						return 0;
					}
					else if (comp_pack.size() < 3) {
						YouWon();
						cout << "You won!!!! Press x to exit";
						ent = cin.get();
						while (ent != 'x') {
							ent = cin.get();
						}
						return 0;
					}
				}
				attackCardPlayer = player_pack[i];
				attackCardComp = comp_pack[i];
				attCardErase2(attackCardPlayer, attackCardComp, discardPile, player_pack, comp_pack);
				attackCardPlayer = 0;
				attackCardComp = 0;
				cout << "Player:" << endl;
				cout << "Hand:";
				PrintVector(player_pack);
				cout << "Computer:" << endl;
				cout << "Hand:";
				PrintVector(comp_pack);
				cout << "Discard pile:";
				PrintVector(discardPile);
			}
		}
		i++;
	}
	return 0;
}