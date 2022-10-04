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

TEST_CASE("Test cases for isTwinPrime function") {
	CHECK(isTwinPrime(17) == true);
	CHECK(isTwinPrime(31) == true);
	CHECK(isTwinPrime(16) == false);
	CHECK(isTwinPrime(23) == false);
}//end test case for Task E

TEST_CASE("Test cases for nextTwinPrime function") {
	CHECK(nextTwinPrime(15) == 17);
<<<<<<< HEAD
	CHECK(nextTwinPrime(101) == 103);
	CHECK(nextTwinPrime(255) == 269);
	CHECK(nextTwinPrime(81) == 101);
	CHECK(nextTwinPrime(194) == 197);
=======
>>>>>>> 39708b965516c13f5799ff8aa9242093149eac00
}//end test case for Task F

TEST_CASE("Test cases for largestTwinPrime function") {
	CHECK(largestTwinPrime(5, 18) == 17);
	CHECK(largestTwinPrime(1, 31) == 31);
	CHECK(largestTwinPrime(14, 16) == -1);
<<<<<<< HEAD
	CHECK(largestTwinPrime(0, 146) == 139);
}//end test case for Task G
=======
}//end of task G
>>>>>>> 39708b965516c13f5799ff8aa9242093149eac00
