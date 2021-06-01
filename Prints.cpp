#include<iostream>
#include<vector>
#include "Prints.h"

void PrintVector(const std::vector<int> &v)
{
	for (auto s : v)
	{
		std::cout << "I" << " ";
	}
	std::cout << std::endl;
}


