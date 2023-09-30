#include <gtest/gtest.h>

TEST(Test1, BasicAssertions) {
    EXPECT_STRNE("hello", "world");
    EXPECT_EQ(7*6, 42);
}