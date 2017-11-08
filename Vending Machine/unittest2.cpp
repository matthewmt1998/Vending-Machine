#include "stdafx.h"
#include "Drink.h"
#include "CppUnitTest.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VendingMachine
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(Drink_Test_Name)
		{
			Drink*GrabThis = new Drink("Coke");
			std::string expecteddrinkname = "Coke";
			Assert::AreEqual(expecteddrinkname, GrabThis->getdrinkname());
			
		}
		TEST_METHOD(Drink_Test_Value)
		{
			Drink*GrabThis = new Drink(1);
			int expecteddrinkprice = 1;
			Assert::AreEqual(expecteddrinkprice, GrabThis->getdrinkvalue());
		}
	

	};
}