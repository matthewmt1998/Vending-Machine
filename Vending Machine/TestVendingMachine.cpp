#include "stdafx.h"

#include <list>
#include <string>

#include "DeleteHelper.h"
#include "IDisplay.h"
#include "LcdDisplay.h"
#include "ReceiptPrinter.h"
#include "CppUnitTest.h"
#include "Drink.h"
#include "VendingMachine.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VendingMachineSystem
{
	TEST_CLASS(VendingMachineTest)
	{
	public:

		TEST_METHOD(VendingMachineDisplayOptions)
		{
			std::list<Drink*> *list = new std::list<Drink*>();
			list->push_back(new Drink("Coke"));
			VendingMachine *vendingMachine = new VendingMachine(list);
			std::string displayMessage = "Coke - 20";
			Assert::AreEqual(true, vendingMachine->ShowMessage(displayMessage));
			// DeleteHelper::DeleteList(list);


		}
		/*
		TEST_METHOD(VendingMachineDisplayMethod)
		{
			VendingMachine *pVendingMachine = new VendingMachine("Coke 20");
			ReceiptPrinter *pPrinter = new ReceiptPrinter();
			IDisplay *pDisplay = (IDisplay *)pPrinter;
			bool is = true;
			Assert::AreEqual(is,pVendingMachine->OutputDisplay(pPrinter));
		}

		TEST_METHOD(VMDisplayOutput)
		{
			VendingMachine*pVendingMachine = new VendingMachine("7UP 20");
			LCDDisplay*pdisplay = new LCDDisplay();
			IDisplay *pDisplay = (IDisplay *)pdisplay;
			bool is = true;
			Assert::AreEqual(is, pVendingMachine->OutputDisplay(pdisplay));

		}*/
	};
};
