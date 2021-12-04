#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-13.1/var.h"
#include "../Lab-13.1/var.cpp"
#include "../Lab-13.1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = 1;
			x = 0;
			n = 1;
			dod();
			Assert::AreEqual(0., a);
		}
	};
}
