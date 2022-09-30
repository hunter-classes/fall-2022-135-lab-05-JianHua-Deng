#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Checking if isDivisibleBy returns the correct boolean value") {
	CHECK(isDivisibleBy(100, 25) == true);//Divisible
	CHECK(isDivisibleBy(75, 25) == true);//Divisible
	CHECK(isDivisibleBy(36, 8) == false);//Not divisible
	CHECK(isDivisibleBy(651, 178) == false);//Not divisible
}//end test case for Task A

TEST_CASE("Checking if isPrime returns the correct boolean value") {
	CHECK(isPrime(293) == true);//Prime
	CHECK(isPrime(17) == true);//Prime
	CHECK(isPrime(19) == true);//Prime
	CHECK(isPrime(2) == true);//Prime
	CHECK(isPrime(398) == false);//Not Prime
	CHECK(isPrime(15) == false);//Not Prime
	CHECK(isPrime(0) == false);//Not Prime
	CHECK(isPrime(1) == false);//Not Prime
}//end test case for Task B

TEST_CASE("Checking nextPrime function") {
	CHECK(nextPrime(3) == 5);
	CHECK(nextPrime(0) == 2);
	CHECK(nextPrime(1) == 2);
	CHECK(nextPrime(9) == 11);
	CHECK(nextPrime(11) == 13);
	CHECK(nextPrime(14) == 17);
}//end test case for Task C

TEST_CASE("Checking for counterPrime function") {
	CHECK(countPrimes(16, 80) == 16);
	CHECK(countPrimes(25, 35) == 2);
	CHECK(countPrimes(1, 1000) == 168);
	CHECK(countPrimes(0, 1000) == 168);
}//end test case for task D