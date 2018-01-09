#include "stdafx.h"
#include "IPayment.h"
#include "Money.h"


Money::Money(int moneyv)
{
	moneyvalue = moneyv;
}


Money::~Money()
{
}

int Money::getMoneyValue()
{
	return moneyvalue;
}