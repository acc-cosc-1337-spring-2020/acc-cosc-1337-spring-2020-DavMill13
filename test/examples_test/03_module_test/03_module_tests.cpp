#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "value_ref.h"
#include "for_ranged.h"
#include<string>
#include "vec.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test pass by val and ref function")
{
	int num1 = 5, num2 = 10;

	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 5);
	REQUIRE(num2 == 50);
}


TEST_CASE("Test for ranged loop by value")
{
	std::string name = "joe";

	loop_string_w_auto_value(name);

	REQUIRE(name == "joe");

}

TEST_CASE("Test for ranged loop by ref")
{
	std::string name = "joe";

	loop_string_w_auto_ref(name);

	REQUIRE(name == "zzz");

}

TEST_CASE("Test for ranged loop w auto by value")
{
	std::vector<int> nums{ 9, 10, 99, 5, 67 };
	std::vector<int> expected{ 9, 10, 99, 5, 67 };


	loop_vector_w_auto(nums);

	REQUIRE(nums == expected);


}

TEST_CASE("Test for ranged loop w auto by ref")
{
	std::vector<int> nums{ 9, 10, 99, 5, 67 };
	std::vector<int> expected{ 0, 0, 0, 0, 0 };


	loop_vector_w_auto_ref(nums);

	REQUIRE(nums == expected);


}
