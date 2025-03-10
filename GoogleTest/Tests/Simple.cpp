#include <gtest/gtest.h>
#include "../Adder.h"


// Test case
TEST(AdditionTest, PositiveNumbers) {
    // Assemble
    int a = 5;
    int b = 3;

    // Act
    int result = add(a, b);

    // Assert
    ASSERT_EQ(result, 8);
}

TEST(AdditionTest, NegativeNumbers) {
    // Assemble
    int a = -5;
    int b = -3;

    // Act
    int result = add(a, b);

    // Assert
    ASSERT_EQ(result, -8);
}

TEST(AdditionTest, MixedNumbers) {
    // Assemble
    int a = 5;
    int b = -3;

    // Act
    int result = add(a, b);

    // Assert
    ASSERT_EQ(result, 2);
}

