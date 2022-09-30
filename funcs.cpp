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
	bool found = false;
	int i = 1;
	while (found == false) {
		if(number + i > 1){
			if (isPrime(number + i)) {
				found = true;
				return (number + i);
				}//end inner condition
		}//end outter condition
		i++;
	}//end while loop
	return 0;
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