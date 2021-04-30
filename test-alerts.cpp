#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "Range_checker.h"



TEST_CASE("infers the breach according to limits: EMAIL testing") 
{
	float data[5] = {1,2,3,4,5};
	rangeCheck(data , 5);
	REQUIRE( Print_Range(0 , 0 , 0 , 0, CHECK) == 1 );
		  
}

