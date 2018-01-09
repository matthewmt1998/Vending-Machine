#pragma once
#include <iostream>
class Drink
{
private:
	std::string drinkname;
	int drinkvalue;
public:
	Drink(std::string name);
	std::string getdrinkname();

	Drink(int drinkv);
	int getdrinkvalue();

	~Drink();
};


