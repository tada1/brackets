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

TEST_F(IsBalancedTests, testOpenAndClosedParentheses)
{
// GIVEN: Is Balanced class and "()"
	IsBalanced IsB;
	std::string str = "()";
// WHEN: check if balanced
// THEN: expected true
	EXPECT_TRUE(IsB.AreBalanced(str));
}

TEST_F(IsBalancedTests, testOpenAndClosedBrackets)
{
// GIVEN: Is Balanced class and "[]"
	IsBalanced IsB;
	std::string str = "[]";
// WHEN: check if balanced
// THEN: expected true
	EXPECT_TRUE(IsB.AreBalanced(str));
}

