#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FactorialTest_recursive, nlt0) {
  Solution solution;
  int actual = solution.Factorial_recursive(-1);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}
TEST(FactorialTest_recursive, neq0) {
  Solution solution;
  int actual = solution.Factorial_recursive(0);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}
TEST(FactorialTest_recursive, ngt0) {
  Solution solution;
  int actual = solution.Factorial_recursive(4);
  int expected = 24;
  EXPECT_EQ(expected, actual);
}


TEST(FactorialTest_non_recursive, nlt0) {
  Solution solution;
  int actual = solution.Factorial_non_recursive(-1);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}
TEST(FactorialTest_non_recursive, neq0) {
  Solution solution;
  int actual = solution.Factorial_non_recursive(0);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}
TEST(FactorialTest_non_recursive, ngt0) {
  Solution solution;
  int actual = solution.Factorial_non_recursive(4);
  int expected = 24;
  EXPECT_EQ(expected, actual);
}
