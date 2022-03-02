#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Part A: testing for a pair that is true and one that is false"){
  CHECK(isDivisibleBy(10,5) == true);
  CHECK(isDivisibleBy(11,4) == false);
}

TEST_CASE("Part B: testing a low even prime number (2), a high odd prime number (17), a low even non-prime number (8), and a high even non-prime number (20)"){
  CHECK(isPrime(2) == true);
  CHECK(isPrime(17) == true);
  CHECK(isPrime(8) == false);
  CHECK(isPrime(20) == false);
}

/*
TEST_CASE("Part C:"){
  
}
*/