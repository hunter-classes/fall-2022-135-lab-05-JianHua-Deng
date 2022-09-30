#include <iostream>
#include "funcs.h"

// add functions here

//Task A
bool isDivisibleBy(int first, int second) {

	if (first % second == 0) {
		return true;
	}
	else {
		return false;
	}//end of condition

}//end of isDivisibleBy function

//Task B
bool isPrime(int number) {

	if (number == 1 || number == 0) {
		return false;
	}//end condition

	for (int i = 2; i < number; i++) {
	if (number % i == 0) {
		return false;
		}//end condition
	}//end for loop
	
	return true;

}//end of isPrime

//Task C
int nextPrime(int number) {
	
	int count = number + 1;
	while (!isPrime(count)) {
		count++;
	}//end while loop
	return count;
}//end nextPrime method


//Task D
int countPrimes(int start, int end) {
	int count = 0;
	for (int i = start; i <= end; i++) {
		if (isPrime(i)) {
			count++;
		}//end condition
	}//end for loop
	return count;
}//end counterPrimes method


//Task E
bool isTwinPrime(int number) {
	if (isPrime(number)) {
		if (isPrime(number - 2) || isPrime(number + 2)) {
			return true;
		}//end inner condition
	}//end condition
	return false;
}//end isTwinPrime function



//Task F
int nextTwinPrime(int number) {
	int count = number + 1;
		while (!isTwinPrime(count)) {
			count++;
		}
	return count;
}//end function 


//Task G
int largestTwinPrime(int start, int end) {


	return 0;
}//end method of largestTwinPrime
