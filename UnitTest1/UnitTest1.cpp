#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Perimeter_Function)
		{
			// To test the perimeter
			int length = 5;
			int width = 5;
			int Result = getPerimeter(&length, &width);
			Assert::AreEqual(20, Result);
		}

		TEST_METHOD(Area_Function)
		{
			// To test the area
			int length = 6;
			int width = 8;
			int Result = getArea(&length, &width);
			Assert::AreEqual(48, Result);
		}

		TEST_METHOD(Setting_Length_Function_Test1)
		{
			// To test setting the length function
			int length = 1;
			int input = 0;
			setLength(input, &length);
			Assert::AreEqual(1, length);
		}

		TEST_METHOD(Setting_Length_Function_Test2)
		{
			// To test setting the length function
			int length = 0;
			int input = 66;
			setLength(input, &length);
			Assert::AreEqual(66, length);
		}

		TEST_METHOD(Setting_Length_Function_Test3)
		{
			// To test setting the length function
			int length = 0;
			int input = 99;
			setLength(input, &length);
			Assert::AreEqual(99, length);
		}

		TEST_METHOD(Setting_Width_Function_Test1)
		{
			// To test the Setting Width function
			int width = 0;
			int input = 99;
			setWidth(input, &width);
			Assert::AreEqual(99, width);
		}

		TEST_METHOD(Setting_Width_Function_Test2)
		{
			// To test the Width function
			int width = 0;
			int input = 100;
			setWidth(input, &width);
			Assert::AreEqual(0, width);
		}

		TEST_METHOD(Setting_Width_Function_Test3)
		{
			// To test the Setting Width function
			int width = 1;
			int input = 0;
			setWidth(input, &width);
			Assert::AreEqual(1, width);
		}
	};
}
