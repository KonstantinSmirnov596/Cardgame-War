#include<iostream>
#include<vector>
#include "attCard2.h"

void attCardErase2(int &a, int &b, std::vector<int> &c, std::vector<int> &d, std::vector<int> &e) {
	c.push_back(a);
	c.push_back(b);
	d.erase(d.begin());
	e.erase(e.begin());
}