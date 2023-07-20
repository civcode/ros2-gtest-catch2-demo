#include <catch2/catch.hpp>

TEST_CASE("package_name", "[]")
{
  REQUIRE(4 == (2 + 2));
}

TEST_CASE("package_name1", "[]")
{
  REQUIRE(4 == 2);
}

// int main(int argc, char** argv)
// {
//   testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }

