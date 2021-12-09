#include "pch.h"
#include "Testing.h"
#include <gtest/gtest.h>
using namespace std;


TEST(TestMultiplication, Test1)
{
	Numbers test;
	test.a = 4;
	test.b = 9;
	test.c = multiplication(test.a, test.b);

	EXPECT_EQ(36, test.c);
	EXPECT_TRUE(true);
}
 
TEST(TestMultiplication, Test2)
{
	Numbers test2;
	test2.a = -1;
	test2.b = 9;
	test2.c = multiplication(test2.a, test2.b);

	EXPECT_EQ(-9, test2.c);
	EXPECT_TRUE(true);
}

TEST(TestMultiplication, Test3)
{
	Numbers test3;
	test3.a = 0;
	test3.b = 99999;
	test3.c = multiplication(test3.a, test3.b);

	EXPECT_EQ(0, test3.c);
	EXPECT_TRUE(true);
}

int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}