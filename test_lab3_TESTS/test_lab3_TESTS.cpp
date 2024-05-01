#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../test_lab3/newgamecapital.cpp"
#include "../test_lab3/Headers.h"
#include "../test_lab3/newgame.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace testlab3TESTS
{
	TEST_CLASS(testlab3TESTS)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			newgamecapital ngc;
			int n = 20;
			vector <int> flags;
			for (int i = 0; i < n; i++)
			{
				flags.push_back(ngc.getFlagId());
			}

			for (int i = 0; i < n; i++)
			{
				for (int j = 1; j + i < n; j++)
				{
					Assert::AreNotEqual(flags[i], flags[i + j]);
				}
			}
		}

		TEST_METHOD(CheckFlagStart)
		{
			newgamecapital ngc;
			string answer = "Сухум";
			Assert::AreEqual(ngc.getFlagAnswer(1), answer);
		}
		TEST_METHOD(CheckFlagEnd)
		{
			newgamecapital ngc;
			string answer = "Токио";
			Assert::AreEqual(ngc.getFlagAnswer(196), answer);
		}
		TEST_METHOD(CheckFlagMid1)
		{
			newgamecapital ngc;
			string answer = "Сент-Джонс";
			Assert::AreEqual(ngc.getFlagAnswer(9), answer);
		}
		TEST_METHOD(CheckFlagMid2)
		{
			newgamecapital ngc;
			string answer = "Москва";
			Assert::AreEqual(ngc.getFlagAnswer(133), answer);
		}
		TEST_METHOD(CheckFlagMid3)
		{
			newgamecapital ngc;
			string answer = "Сан-Томе";
			Assert::AreEqual(ngc.getFlagAnswer(139), answer);
		}



		TEST_METHOD(CheckFlagLocationStart)
		{
			newgamecapital ngc;
			string answer = "Азия";
			Assert::AreEqual(ngc.getFlagHintLocation(1), answer);
		}
		TEST_METHOD(CheckFlagLocationEnd)
		{
			newgamecapital ngc;
			string answer = "Азия";
			Assert::AreEqual(ngc.getFlagHintLocation(196), answer);
		}
		TEST_METHOD(CheckFlagLocationMid1)
		{
			newgamecapital ngc;
			string answer = "Северная америка";
			Assert::AreEqual(ngc.getFlagHintLocation(9), answer);
		}
		TEST_METHOD(CheckFlagLocationMid2)
		{
			newgamecapital ngc;
			string answer = "Европа";
			Assert::AreEqual(ngc.getFlagHintLocation(133), answer);
		}
		TEST_METHOD(CheckFlagLocationMid3)
		{
			newgamecapital ngc;
			string answer = "Африка";
			Assert::AreEqual(ngc.getFlagHintLocation(139), answer);
		}

	};
}
