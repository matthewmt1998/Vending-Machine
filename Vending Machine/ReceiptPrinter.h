#pragma once
class ReceiptPrinter : public IDisplay
{
public:

	ReceiptPrinter();
	~ReceiptPrinter();
	void Output(std::string);
};

