#pragma once
class Drink
{
private:
	std::string drinkname;
	int drinkvalue;
public:
	Drink(std::string name, int drinkv);
	std::string getdrinkname();
	int getdrinkvalue();
	~Drink();
};

