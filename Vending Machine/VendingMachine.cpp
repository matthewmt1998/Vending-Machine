#include "stdafx.h"

#include <list>

#include "IDisplay.h"
#include "Drink.h"
#include "VendingMachine.h"


VendingMachine::VendingMachine(std::list<Drink*> *drinkList)
{
	pDrinkList = drinkList;
}

VendingMachine::~VendingMachine() { }


bool VendingMachine::ShowMessage(std::string message)
{
	pDisplay->Output(message);
	return true;
}