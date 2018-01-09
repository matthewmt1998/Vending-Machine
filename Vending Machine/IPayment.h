#pragma once
class IPayment
{
public:
	virtual void Pay() = 0;

	virtual ~IPayment() {};
};
