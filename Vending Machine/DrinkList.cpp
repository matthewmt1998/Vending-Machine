#include "stdafx.h"
#include "DrinkList.h"
#include <algorithm>
#include <iostream>
#include <vector>


DrinkList::DrinkList(std::string dlistname, int dlistv)
{
	drinkname = dlistname;
	drinkvalue = dlistv;
	std::list<std::string> n{};
	std::list<int> v{};
	n.push_back(drinkname);
	v.push_back(drinkvalue);
}

DrinkList::~DrinkList()
{
}
