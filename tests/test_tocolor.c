#include "unity.h"
#include "../include/printfc.h"

void setUp(void) {}
void tearDown(void) {}

void test_tocolor();

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_tocolor);

    return UNITY_END();  
}

void test_tocolor()
{
    color_t color;

    tocolor(&color, RGB(25, 50, 100), FOREGROUND);

    TEST_ASSERT_EQUAL_STRING(color, "\e[38;2;025;050;100m");
}