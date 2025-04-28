#include "unity.h"
#include "adder.h"

void setUp(void) {
    // This is run before EACH test
}

void tearDown(void) {
    // This is run after EACH test
}

void test_add_two_positive_numbers(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3));
}

void test_add_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-5, add(-2, -3));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_two_positive_numbers);
    RUN_TEST(test_add_negative_numbers);
    return UNITY_END();
}
