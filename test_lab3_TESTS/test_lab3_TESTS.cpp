#include "pch.h"
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
				for (int j = 1; j+i < n; j++)
				{
					Assert::AreNotEqual(flags[i],flags[i+j]);
				}
			}
		}
	};
}
