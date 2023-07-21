//#include <catch2/catch.hpp>
//#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("package_name", "[asdfas]")
{
  REQUIRE(4 == (2 + 2));
}

TEST_CASE("package_name1", "[asdfaaf]")
{
  REQUIRE(4 == 2);
}

// int main(int argc, char** argv)
// {
//   testing::InitGoogleTest(&argc, argv);
//   return RUN_ALL_TESTS();
// }

