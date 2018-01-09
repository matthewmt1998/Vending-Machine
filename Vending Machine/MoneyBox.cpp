#include "stdafx.h"
#include "Money.h"
#include "MoneyBox.h"


MoneyBox::MoneyBox(int TMV)
{
	totalMoneyValue = TMV;
}

MoneyBox::MoneyBox()
{
	totalMoneyValue = 0;
}
MoneyBox::~MoneyBox()
{
}

int MoneyBox::totalMoney()
{
	return totalMoneyValue;
}

int MoneyBox::addMoney(int cash)
{
	totalMoneyValue += cash;
	return totalMoneyValue;
}