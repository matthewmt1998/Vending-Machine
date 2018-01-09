#pragma once
class VendingMachine
{
private:
	std::list<Drink*> *pDrinkList;
	IDisplay *pDisplay;

public:
	VendingMachine(std::list<Drink*> *drinkList);
	~VendingMachine();

	bool ShowMessage(std::string message);

};

