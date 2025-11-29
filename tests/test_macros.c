#include "unity.h"
#include "../include/printfc.h"

void setUp(void) {}
void tearDown(void) {}

void test_RGB_valid_args();
void test_RGB_unvalid_args();
void test_RGB_GET_macros_valid_args();
void test_RGB_GET_macros_unvalid_args();

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_RGB_valid_args);
    RUN_TEST(test_RGB_unvalid_args);
    RUN_TEST(test_RGB_GET_macros_valid_args);
    RUN_TEST(test_RGB_GET_macros_unvalid_args);

    return UNITY_END();  
}

void test_RGB_valid_args()
{
    TEST_ASSERT_EQUAL(0x32c864, RGB(50, 200, 100));
}

void test_RGB_unvalid_args()
{
    TEST_ASSERT_EQUAL(0xe7f114, RGB(999, -15, 20));
}

void test_RGB_GET_macros_valid_args()
{
    int value = 0x4a9df3;
    TEST_ASSERT_EQUAL(0x4a, RGB_GET_R(value));
    TEST_ASSERT_EQUAL(0x9d, RGB_GET_G(value));
    TEST_ASSERT_EQUAL(0xf3, RGB_GET_B(value));
}

void test_RGB_GET_macros_unvalid_args()
{
    int value = 0x2c4a9df3;
    TEST_ASSERT_EQUAL(0x4a, RGB_GET_R(value));
    TEST_ASSERT_EQUAL(0x9d, RGB_GET_G(value));
    TEST_ASSERT_EQUAL(0xf3, RGB_GET_B(value));
}