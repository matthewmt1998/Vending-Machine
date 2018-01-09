#pragma once
class LCDDisplay : public IDisplay
{
public:
	LCDDisplay();
	~LCDDisplay();

	void Output(std::string);
};

