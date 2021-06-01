
#include<iostream>
#include<vector>
#include "attCard.h"

void attCardErase(int& a, int& b, std::vector<int>& c, std::vector<int>& d) {
	c.push_back(a);
	c.push_back(b);
	c.erase(c.begin());
	d.erase(d.begin());
}