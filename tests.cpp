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


TEST_CASE("Part C: testing 0, 2, 14, and 17"){
  CHECK(nextPrime(0) == 2);
  CHECK(nextPrime(2) == 3);
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(17) == 19);
}

TEST_CASE("Part D: testing 2 intervals with primes, and one with no primes: (2,20), (3,7), and (8,10)"){
  CHECK(countPrimes(2, 20) == 8);
  CHECK(countPrimes(0, 7) == 4);
  CHECK(countPrimes(8, 10) == 0);
}


TEST_CASE("Part E: testing 17, 2, 15, and 19"){
  CHECK(isTwinPrime(17) == true);
  CHECK(isTwinPrime(2) == false);
  CHECK(isTwinPrime(15) == false);
  CHECK(isTwinPrime(19) == true);
}

TEST_CASE("Part F: testing 17, 19, and 0"){
  CHECK(nextTwinPrime(17) == 19);
  CHECK(nextTwinPrime(19) == 29);
  CHECK(nextTwinPrime(0) == 3);
}
  
TEST_CASE("Part G: testing 2 intervals with twin primes, and two with no twin primes: (5,18) (1,31) and (14,16)"){
  CHECK(largestTwinPrime(5,18) == 17);
  CHECK(largestTwinPrime(1,31) == 31);
  CHECK(largestTwinPrime(14,16) == -1);
  CHECK(largestTwinPrime(0,2) == -1);
}

 