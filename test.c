#include "unity.h"
#include "calc.c"

void setUp(void) {}     // Not needed yet
void tearDown(void) {}

void test_add(void) {
    TEST_ASSERT_EQUAL(4, add(2, 2));
}

void test_sub(void){
     TEST_ASSERT_EQUAL(0, sub(1,1));
}

void test_mult(void){
     TEST_ASSERT_EQUAL(4,mult(2,2));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mult);
    return UNITY_END();

}

