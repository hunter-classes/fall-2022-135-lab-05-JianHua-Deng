#include <iostream>
#include "funcs.h"

int main()
{

	std::cout << isDivisibleBy(100, 25) << "\n";
	std::cout << isPrime(293) << "\n";
	std::cout << nextPrime(17) << "\n";
	std::cout << countPrimes(16, 80) << "\n";
	std::cout << isTwinPrime(16) << "\n";
	std::cout << nextTwinPrime(15) << "\n";
	std::cout << largestTwinPrime(1, 31) << "\n";
	return 0;
}
