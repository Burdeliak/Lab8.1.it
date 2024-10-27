#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1.IT/lab8.1.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testlab81it
{
	TEST_CLASS(Testlab81it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			char str4[] = "aabbcc";

			
			char expected4[] = "aabbcc";

			
			Assert::AreEqual(expected4, Change(str4));
		}
	};
}
