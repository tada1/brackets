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

TEST_F(IsBalancedTests, testOneParenthese)
{
// GIVEN:  IsBalanced class and one "("
	IsBalanced IsB;
	std::string str = "(";
// WHEN: on input
// THEN: expected false
	EXPECT_FALSE(IsB.AreBalanced(str));
}

TEST_F(IsBalancedTests, testOpenAndClosedBrackets)
{
// GIVEN: Is Balanced class and "()"
	IsBalanced IsB;
	std::string str = "()";
	std::string str2 = "[]";
	std::string str3 = "{}";
// WHEN: check if balanced
// THEN: expected true
	EXPECT_TRUE(IsB.AreBalanced(str));
	EXPECT_TRUE(IsB.AreBalanced(str2));
	EXPECT_TRUE(IsB.AreBalanced(str3));
}

