#include "stdafx.h"
#include "Money.h"
#include "Drink.h"
#include "CppUnitTest.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VendingMachine
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(MoneyTest_Ten_Pence)
		{
			Money*GrabThis = new Money(10);
			int expectedMoneyValue = 10;
			Assert::AreEqual(expectedMoneyValue, GrabThis->getMoneyValue());
		}
		TEST_METHOD(MoneyTest_Twenty_Pence)
		{
			Money*GrabThis = new Money(20);
			int expectedMoneyValue = 20;
			Assert::AreEqual(expectedMoneyValue, GrabThis->getMoneyValue());
		}
		TEST_METHOD(MoneyTest_Fifty_Pence)
		{
			Money*GrabThis = new Money(50);
			int expectedMoneyValue = 50;
			Assert::AreEqual(expectedMoneyValue, GrabThis->getMoneyValue());
		}
		TEST_METHOD(MoneyTest_One_Pound)
		{
			Money*GrabThis = new Money(100);
			int expectedMoneyValue = 100;
			Assert::AreEqual(expectedMoneyValue, GrabThis->getMoneyValue());
		}
		TEST_METHOD(MoneyTest_Two_Pound)
		{
			Money*GrabThis = new Money(200);
			int expectedMoneyValue = 200;
			Assert::AreEqual(expectedMoneyValue, GrabThis->getMoneyValue());
		}
	
	TEST_METHOD(Drink_Test_Name)
	{
		Drink*GrabThis = new Drink("Coke",1);
		std::string expecteddrinkname = "Coke";
		int expecteddrinkprice = 1;
		Assert::AreEqual(expecteddrinkname, GrabThis->getdrinkname());
		Assert::AreEqual(expecteddrinkprice, GrabThis->getdrinkvalue());
	}
	
	};
}