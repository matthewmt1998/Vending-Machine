#pragma once
#include "Drink.h"
#include <iostream>
#include <vector>
#include <list>

class DrinkList
{
	std::string drinkname;
	int drinkvalue;

public:
	DrinkList(std::string dlistname, int dlistv);
	std::string getdlistname();
	int getdlistv();

	~DrinkList();
};

