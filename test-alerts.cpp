#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "Range_checker.h"

/**FAil case: No print if there is no range present**/
TEST_CASE("Do not Print the ranges of a current data set, if no pattern is present") 
{
	float data[6] = {1,3,5,7,9,12};
	rangeCheck(data , sizeof(data));
	REQUIRE( Print_Range(0 , 0 , 0 , 0, CHECK) == 1 );
		  
}

TEST_CASE("Print the ranges of a current data set") 
{
	float data[10] = {1,2,3,4,5,7,9,10,11,12};
	rangeCheck(data , sizeof(data));
	REQUIRE( Print_Range(0 , 0 , 0 , 0, CHECK) == 1 );
		  
}


