#include "unity.h"
#include "../include/printfc.h"

void setUp(void) {}
void tearDown(void) {}

void test_RGB_valid_args();
void test_RGB_unvalid_args();

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_RGB_valid_args);
    RUN_TEST(test_RGB_unvalid_args);

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