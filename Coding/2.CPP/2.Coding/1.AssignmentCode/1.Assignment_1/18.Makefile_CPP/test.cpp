#include <CppUTest/Utest.h>
#include <CppUTest/UtestMacros.h>
#include "CppUTest/TestHarness.h"
#include "mylib.h"
#include <stdexcept>

// Test Group
TEST_GROUP(DivideGroup){};

// Test case for normal division
TEST(DivideGroup, HandlesPositiveNumbers)
{
    DOUBLES_EQUAL(5.0, divide(10.0, 2.0), 0.0001);
    DOUBLES_EQUAL(3.0, divide(9.0, 3.0), 0.0001);
}

// Test case for division by zero
TEST(DivideGroup, HandlesDivisionByZero)
{
    CHECK_THROWS(std::invalid_argument, divide(10.0, 0));
}

// Test case for negative numbers
TEST(DivideGroup, HandlesNegativeNumbers)
{
    DOUBLES_EQUAL(-5.0, divide(-10.0, 2.0), 0.0001);
    DOUBLES_EQUAL(-5.0, divide(10.0, -2.0), 0.0001);
    DOUBLES_EQUAL(5.0, divide(-10.0, -2.0), 0.0001);
}

// Test case for division resulting in a fraction
TEST(DivideGroup, HandlesFractionResult)
{
    DOUBLES_EQUAL(2.5, divide(10.0, 4.0), 0.0001);
}

// Test Group
TEST_GROUP(AddGroup){};

// Test case for adding two positive numbers
TEST(AddGroup, HandlesPositiveNumbers)
{
    DOUBLES_EQUAL(10.0, add(3.0, 7.0), 0.0001);
    DOUBLES_EQUAL(5.0, add(0.0, 5.0), 0.0001);
}

// Test case for adding two negative numbers
TEST(AddGroup, HandlesNegativeNumbers)
{
    DOUBLES_EQUAL(-10.0, add(-3.0, -7.0), 0.0001);
    DOUBLES_EQUAL(-10.0, add(-5.0, -5.0), 0.0001);
}

// Test case for adding a positive and a negative number
TEST(AddGroup, HandlesMixedSignNumbers)
{
    DOUBLES_EQUAL(4.0, add(-3.0, 7.0), 0.0001);
    DOUBLES_EQUAL(-4.0, add(3.0, -7.0), 0.0001);
}

// Test case for adding zero
TEST(AddGroup, HandlesZero)
{
    DOUBLES_EQUAL(0.0, add(0.0, 0.0), 0.0001);
    DOUBLES_EQUAL(10.0, add(10.0, 0.0), 0.0001);
    DOUBLES_EQUAL(-10.0, add(0.0, -10.0), 0.0001);
}

// Test Group
TEST_GROUP(SubtractGroup){};

// Test case for subtracting two positive numbers
TEST(SubtractGroup, HandlesPositiveNumbers)
{
    DOUBLES_EQUAL(3.0, subtract(10.0, 7.0), 0.0001);
    DOUBLES_EQUAL(0.0, subtract(5.0, 5.0), 0.0001);
}

// Test case for subtracting two negative numbers
TEST(SubtractGroup, HandlesNegativeNumbers)
{
    DOUBLES_EQUAL(-2.0, subtract(-7.0, -5.0), 0.0001);
    DOUBLES_EQUAL(-5.0, subtract(-10.0, -5.0), 0.0001);
}

// Test case for subtracting a positive number from a negative number
TEST(SubtractGroup, HandlesMixedSignNumbers)
{
    DOUBLES_EQUAL(-10.0, subtract(-3.0, 7.0), 0.0001);
    DOUBLES_EQUAL(10.0, subtract(3.0, -7.0), 0.0001);
}

// Test case for subtracting zero
TEST(SubtractGroup, HandlesZero)
{
    DOUBLES_EQUAL(10.0, subtract(10.0, 0.0), 0.0001);
    DOUBLES_EQUAL(-10.0, subtract(-10.0, 0.0), 0.0001);
    DOUBLES_EQUAL(0.0, subtract(0.0, 0.0), 0.0001);
}

// Test Group
TEST_GROUP(MultiplyGroup){};

// Test case for multiplying two positive numbers
TEST(MultiplyGroup, HandlesPositiveNumbers)
{
    DOUBLES_EQUAL(20.0, multiply(4.0, 5.0), 0.0001);
    DOUBLES_EQUAL(0.0, multiply(0.0, 5.0), 0.0001);
}

// Test case for multiplying two negative numbers
TEST(MultiplyGroup, HandlesNegativeNumbers)
{
    DOUBLES_EQUAL(20.0, multiply(-4.0, -5.0), 0.0001);
    DOUBLES_EQUAL(25.0, multiply(-5.0, -5.0), 0.0001);
}

// Test case for multiplying a positive number by a negative number
TEST(MultiplyGroup, HandlesMixedSignNumbers)
{
    DOUBLES_EQUAL(-20.0, multiply(-4.0, 5.0), 0.0001);
    DOUBLES_EQUAL(-15.0, multiply(3.0, -5.0), 0.0001);
}

// Test case for multiplying by zero
TEST(MultiplyGroup, HandlesZero)
{
    DOUBLES_EQUAL(0.0, multiply(10.0, 0.0), 0.0001);
    DOUBLES_EQUAL(0.0, multiply(0.0, 10.0), 0.0001);
    DOUBLES_EQUAL(0.0, multiply(0.0, 0.0), 0.0001);
}