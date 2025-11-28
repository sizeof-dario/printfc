#include "unity.h"
#include "../include/printfc.h"

void setUp(void) {}
void tearDown(void) {}

void test_clrcpy_copying();
void test_clrcpy_return();
void test_clrcpy_null_args();

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_clrcpy_copying);
    RUN_TEST(test_clrcpy_return);
    RUN_TEST(test_clrcpy_null_args);

    return UNITY_END();  
}

void test_clrcpy_copying()
{
    color_t source = "ch-arr: Ab1-#%@_\0\e\t";
    color_t destination = { 0 };
    
    clrcpy(&destination, &source);

    TEST_ASSERT_EQUAL_CHAR_ARRAY(destination, source, COLOR_T_LENGTH);
}

void test_clrcpy_return()
{
    color_t source = "ch-arr: Ab1-#%@_\0\e\t";
    color_t destination = { 0 };
    color_t *retclr_p;
    
    retclr_p = clrcpy(&destination, &source);

    TEST_ASSERT_EQUAL_PTR(retclr_p, &destination);
}

void test_clrcpy_null_args()
{
    TEST_ASSERT_EQUAL_PTR(clrcpy(0 , 0), 0);
}