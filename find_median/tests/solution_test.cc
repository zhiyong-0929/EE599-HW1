#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindMedianTest, HandlesEvenArrays) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  EXPECT_EQ(solution.FindMedian(inputs), 2.5);
  //EXPECT_EQ(solution.FindMaxRecursive(inputs), 4);
}

TEST(FindMedianTest, HandlesOddSArrays) {
  Solution solution;
  std::vector<int> inputs = {1, 3, 4};
  EXPECT_EQ(solution.FindMedian(inputs), 3);
  //EXPECT_EQ(solution.FindMaxRecursive(inputs), 4);
}

TEST(FindMedianTest, HandlesSizeOne) {
  Solution solution;
  std::vector<int> inputs = {2};
  EXPECT_EQ(solution.FindMedian(inputs), 2);
  //EXPECT_EQ(solution.FindMaxRecursive(inputs), 2);
}

TEST(FindMedianTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_EQ(solution.FindMedian(inputs), -1);
  //EXPECT_EQ(solution.FindMaxRecursive(inputs), -1);
}
