#include "pch.h"
#include "CppUnitTest.h"
#include "..\laab5.2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double f=A(1, 1, 1);
			Assert::AreEqual(-1., f);
		}
	};
}
