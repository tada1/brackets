#include <gtest/gtest.h>
#include <iostream>
#include "../inc/IsBalanced.hpp"


class IsBalancedTests : public ::testing::Test
{

};

TEST_F(IsBalancedTests, assertFasleIsTrue)
{
	ASSERT_TRUE(true);
}

//test single parentheses
TEST_F(IsBalancedTests, testOneParenthes)
{
// GIVEN:  IsBalanced class and one "("
	IsBalanced IsB;
	std::string str = "(";
// WHEN: on input
// THEN: expected true result
	EXPECT_EQ(IsB.AreBalanced(str), true);
}
