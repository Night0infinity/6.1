#include "pch.h" 
#include "CppUnitTest.h" 
#include "../Lab 6.1/Source.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 24;
			int b[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 };
			int sum = suma(b, n);
			Assert::AreEqual(sum, 300);
		}
	};
}
