#include "Primes.h"

bool isPrime(int number)
{
	if (number < 2) return false;
	else if (number == 2) return true;
	else if (number % 2 == 0) return false;
	else
	{
		int divisor = 3;
		int divided = number / divisor;
		while (divisor < divided)
		{
			if (number % divisor == 0) return false;
			divisor += 2;
			divided = number / divisor;
		}
		return true;
	}
}
