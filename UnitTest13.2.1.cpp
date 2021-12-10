#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-13.2.1/Lab-13.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1321
{
	TEST_CLASS(UnitTest1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 2;
			int y = POW2(x);
			Assert::AreEqual(4, y);
		}
	};
}
