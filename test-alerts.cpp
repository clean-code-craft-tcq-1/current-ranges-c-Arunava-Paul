#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "Range_checker.h"



TEST_CASE("infers the breach according to limits: EMAIL testing") 
{
	float data[5] = {1,2,3,4,5};
	rangeCheck(data , 5);
	//REQUIRE( strcmp( test_param[console_test_idx].expected_console_msg ,  console_validate_buffer.dis_msg ) == 0 );
		  
}

