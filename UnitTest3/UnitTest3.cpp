#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna5.2/Laboratorna5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = A(1.0, 1, 1.0);
			Assert::AreEqual(result, -1, 0.0001);
		}
	};
}
