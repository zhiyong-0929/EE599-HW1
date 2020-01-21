#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "Modified by Zhiyong Yang-zhiyongy@usc.edu";
  EXPECT_EQ(expected, actual);
}