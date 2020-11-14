#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1/lab6_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod6_1)
		{
			int t;
			const int s = 3;
			int a[s] = { 1,2,3 };
			t = Beside(a, s);
			Assert::AreEqual(t, 2);
		}
	};
}
