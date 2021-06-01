#include<iostream>
#include <vector>
#include "DealErase.h"

void DealCards(int *a, std::vector <int> &b, std::vector <int> &c, int n) {
	for (int i = 0; i <= (n / 2) - 1; i++) {
		b.insert(b.begin(), a[i]);
	}
	for (int j = n / 2, i = 0; j <= n - 1; j++, i++) {
		c.insert(c.begin(), a[j]);
	}

}

