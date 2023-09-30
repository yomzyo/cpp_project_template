#include <gtest/gtest.h>

#include <cppProjectTemplate/lib.hpp>

TEST(Test2, LibraryLinking) {
    EXPECT_EQ(helloFromLibrary("TEST"), "Hello from the library, TEST.");
}