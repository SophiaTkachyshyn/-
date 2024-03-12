#include "pch.h"
#include "CppUnitTest.h"
#include "../Бітова множина/bitset.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(AddAndIsAdded)
		{
			Bitset myBitset;
			myBitset.add(1);
			myBitset.add(2);
			Assert::IsTrue(myBitset.isAdded(1));
			Assert::IsTrue(myBitset.isAdded(2));
			Assert::IsFalse(myBitset.isAdded(0));
		}
		TEST_METHOD(Remove)
		{
			Bitset myBitset;
			myBitset.add(1);
			myBitset.remove(1);
			Assert::IsFalse(myBitset.isAdded(1));
		}
		TEST_METHOD(Change)
		{
			Bitset myBitset;
			myBitset.change();
			Assert::IsTrue(myBitset.isAdded(0));
			Assert::IsTrue(myBitset.isAdded(1));
			Assert::IsTrue(myBitset.isAdded(2));
			Assert::IsTrue(myBitset.isAdded(3));
			Assert::IsTrue(myBitset.isAdded(4));
			Assert::IsTrue(myBitset.isAdded(5));
			Assert::IsTrue(myBitset.isAdded(6));
			Assert::IsTrue(myBitset.isAdded(7));
		}
	};
}
