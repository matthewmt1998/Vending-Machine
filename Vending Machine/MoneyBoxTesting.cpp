#include "stdafx.h"
#include "Money.h"
#include "MoneyBox.h"
#include "CppUnitTest.h"
#include <string>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VendingMachineSystem
{
	TEST_CLASS(MoneyBoxTesting)
	{
	public:

		TEST_METHOD(totalMoneyInputed)
		{
			MoneyBox *pMoneyBox = new MoneyBox(20);
			int expectedTotalMoney = 20;
			Assert::AreEqual(expectedTotalMoney, pMoneyBox->totalMoney());
		}

		TEST_METHOD(addMoneyTest)
		{
			MoneyBox *pMoneyBox = new MoneyBox(0);
			pMoneyBox->addMoney(20);
			int expectedTotalMoneyValue = 20;
			Assert::AreEqual(expectedTotalMoneyValue, pMoneyBox->totalMoney());
		}

	};
};