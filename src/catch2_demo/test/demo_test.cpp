#include <catch2/catch.hpp>

//TEST_CASE("'Test case 1'", "[]")
TEST_CASE("Test-case-1", "[]")
{
  REQUIRE(4 == (2 + 2));
}

//TEST_CASE("'Test case 2'", "[]")
TEST_CASE("Test-case-2", "[]")
{
  REQUIRE(4 == 2);
}

// int main(int argc, char** argv)
// {
//   testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }

