#include "pch.h"
#include "CppUnitTest.h"

extern "C"	int getArea(int* length, int* width);
extern "C"	int getPerimeter(int* length, int* width);
extern "C"	void setLength(int input, int* length);
extern "C"	void setWidth(int input, int* width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Req001
{
	TEST_CLASS(Req001)
	{
	public:

		TEST_METHOD(TestGetArea)
		{
			int length = 5;
			int width = 10;
			int expectedArea = 50;


			int actualArea = getArea(&length, &width);


			Assert::AreEqual(expectedArea, actualArea, L"The area of the rectangle should be 50");
		}
		TEST_METHOD(TestGetPerimeter)
		{

			int length = 5;
			int width = 10;
			int expectedPerimeter = 30;


			int actualPerimeter = getPerimeter(&length, &width);

			Assert::AreEqual(expectedPerimeter, actualPerimeter, L"The perimeter of the rectangle should be 30");
		}
	
		
		TEST_METHOD(TestSetLengthWithValidInput)
		{
		
			int length = 0;
			setLength(50, &length);
			
			Assert::AreEqual(50, length);
		}

		TEST_METHOD(TestSetLengthWithMinimumInput)
		{
			int length = 0;
			setLength(1, &length);

			Assert::AreEqual(1, length);
		}

		TEST_METHOD(TestSetLengthWithMaximumInput)
		{
			int length = 0;
			setLength(99, &length);

			Assert::AreEqual(99, length);
		}
		TEST_METHOD(TestSetWidthWithValidInput)
		{
			int width = 0;
			setWidth(75, &width);

			Assert::AreEqual(75, width);
		}

		TEST_METHOD(TestSetWidthWithMinimumInput)
		{
			int width = 0;
			setWidth(1, &width);
			
			Assert::AreEqual(1, width);
		}

		TEST_METHOD(TestSetWidthWithMaximumInput)
		{
			int width = 0;
			setWidth(99, &width);

			Assert::AreEqual(99, width);
		}


	};
		
	
	
}

