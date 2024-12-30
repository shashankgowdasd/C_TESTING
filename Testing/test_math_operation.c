#include <stdio.h>
#include "../Unity/src/unity.h"
#include "../maths_operation.h"

void setUp(void)
{
    // code to run before each test (e.g., reset variables)
}

void tearDown(void)
{
    // code to run after each test( e.g cleanup)
}

void test_add(void)
{
    TEST_ASSERT_EQUAL_INT(5,add(3,2));
    TEST_ASSERT_EQUAL_INT(-4,add(-2,-2));
}

void test_sub(void)
{
    TEST_ASSERT_EQUAL_INT(-1, sub(2, 3));  // Test if subtract(2, 3) equals -1
    TEST_ASSERT_EQUAL_INT(0, sub(2, 2));   // Test if subtract(2, 2) equals 0
    TEST_ASSERT_EQUAL_INT(-3, sub(-2, 1)); // Test if subtract(-2, 1) equals -3
}

// void test_mul(void)
// {

// }

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    return UNITY_END();
}