#include "stdafx.h"
#include "Drink.h"

Drink::Drink( int drinkv)
{
	drinkvalue = drinkv;
}

Drink::Drink(std::string name)
{
	drinkname = name;
}
Drink::~Drink() { }

int Drink::getdrinkvalue()
{
	return drinkvalue;
}
std::string Drink::getdrinkname()
{
	return drinkname;
}
