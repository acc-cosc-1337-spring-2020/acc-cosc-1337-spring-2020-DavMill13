#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}



TEST_CASE("Test Bank Account deposit")
{
	Rect rectangle(4, 5);
	REQUIRE(rectangle.get_area() == 20);
	

}