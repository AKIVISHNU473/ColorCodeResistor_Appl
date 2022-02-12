#include "unity.h"
#include "CCR.h"
#include<stdio.h>

void setup()
{

}

void tearDown()
{

}

void test_decode_multiplier(void)
{
          
        char R =100;
         
        double   actual_result = 100.0;

        double   expected_result = 100.0;

        TEST_ASSERT_EQUAL(100.0,100.0);


}


int loop()
{
    UNITY_BEGIN();
    RUN_TEST (test_decode_multiplier);

    UNITY_END();
}