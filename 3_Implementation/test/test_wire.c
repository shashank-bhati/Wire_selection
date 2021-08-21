/**
 * @file test_wire.c
 * @author Shashank Bhati
 * @brief For the testing of the every functon paramters taken into account.
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "wire.h"
#include "unity.h"

/// Required by the unity test framework 
void setUp(){}
/// Required by the unity test framework 
void tearDown(){}

/// Prototypes for all the test functions 
void test_load_current(void);




/* Write all the test functions */ 
/**
 * @brief Since the project uses concept of pointer and the functions doesn't take any input parameters and return 0 value, the teting is done to check 0 return value of all fuctions.
 * 
 */


void test_load_current(void) 
{
  TEST_ASSERT_EQUAL(11,load_current(2420,220));
  //help to check the input power is the machine
}


/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_load_current);
  
 


  /* Close the Unity Test Framework */
  return UNITY_END();
}
