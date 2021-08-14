#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication/Predicates.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestConsoleApp
{
	TEST_CLASS(TestConsoleApp)
	{
	public:

		TEST_METHOD(Test_QWERTY_isUppercase)
		{
			Assert::AreEqual(true, onlyUppercase("QWERTY"));
		}

		TEST_METHOD(Test_1289_consistsOfDigits)
		{
			Assert::AreEqual(true, onlyDigits("1289"));
		}

		TEST_METHOD(Test_Vladislav_contains_vlad)
		{
			Assert::AreEqual(false, containsSubstringVlad("Vladislav"));
		}

		TEST_METHOD(Test_vladislav_consistsOfMoreThan10Symbols)
		{
			Assert::AreEqual(false, consistsOfMoreThan10Symbols("vladislav"));
		}

		TEST_METHOD(Test_vladislaVv_containsMoreThanOneOccuranceOfv)
		{
			Assert::AreEqual(false, containsMoreThanTwoOccurancesOfv("vladislaVv"));
		}
	};
}
