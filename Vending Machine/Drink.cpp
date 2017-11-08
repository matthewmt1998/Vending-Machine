#include "stdafx.h"
#include "Drink.h"


Drink::Drink(std::string name, int drinkv)
{
	drinkname = name;
	drinkvalue = drinkv;


}


Drink::~Drink()
{
}

int Drink::getdrinkvalue()
{
	return drinkvalue;
}
std::string Drink::getdrinkname()
{
	return drinkname;
}