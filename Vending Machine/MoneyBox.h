#pragma once
class MoneyBox 
{
private: 
	int totalMoneyValue;
public:
	MoneyBox();
	MoneyBox(int TMV);
	int totalMoney();
	~MoneyBox();

	int addMoney(int cash);

protected:
	Money*pMoney;

};

