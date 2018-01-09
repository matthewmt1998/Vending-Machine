#pragma once
class IDisplay
{
public:
	virtual void Output(std::string) = 0;

	virtual ~IDisplay() {};

};
