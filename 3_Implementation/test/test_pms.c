#include"unity.h"
#include"unity_internals.h"
#include"PMS.h"
#define PROJECT_NAME "PMS"

void test_distance(void);
//void test_data_entry(void);
//void test_data_erase(void);
//void test_location(void);
//oid test_shortest_distance(void);
//void test_count(void);
void setUp(){}
void tearDown(){}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_distance);
    //RUN_TEST(test_data_entry);
    //RUN_TEST(test_data_erase);
    //RUN_TEST(test_location);
    //RUN_TEST(test_shortest_distance);
    //RUN_TEST(test_count);
    return UNITY_END();
}

void test_distance(){
    TEST_ASSERT_EQUAL(0,distance(0,0));
    TEST_ASSERT_EQUAL(14.142135,distance(10,10));
}
/*
void test_shortest_distance(void){
    TEST_ASSERT_EQUAL(0,shortest_distance(0));
}

void test_count(void){
    TEST_ASSERT_EQUAL(0,count(0));
}
*/

